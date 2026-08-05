/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 ListNode* reverseLL(ListNode* head){
    if(head==NULL||head->next==NULL) return head;
    ListNode* newHead=reverseLL(head->next);
    ListNode* front=head->next;
    front->next=head;
    head->next=NULL;
    return newHead;
 }
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // stack<int> st;
        // ListNode* temp=head;
        // while(temp){
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // temp=head;
        // while(temp){
        //     if(temp->val!=st.top()){
        //         return false;
        //     }
        //     st.pop();
        //     temp=temp->next;
        // }
        // return true;
        // above is the brute force approach time: O(2n) space: O(N) for using external space stack

        if(head==NULL || head->next==NULL){
            return true;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newHead=reverseLL(slow->next);
        ListNode* first=head;
        ListNode* second=newHead;
        while(second!=NULL){
            if(first->val!=second->val){
                reverseLL(newHead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reverseLL(newHead);
        return true;
    }
};