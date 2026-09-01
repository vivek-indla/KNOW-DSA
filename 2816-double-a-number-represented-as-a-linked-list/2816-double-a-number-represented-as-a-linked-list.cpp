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
 ListNode* reverseList(ListNode* head){
    ListNode* curr=head;
    ListNode* prev=NULL;
    while(curr){
        ListNode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
 }
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        head=reverseList(head);
        ListNode* temp=head;
        int carry=0;
        while(temp){
            int sum=carry;
            sum+=temp->val+temp->val;
            temp->val=sum%10;
            carry=sum/10;
            temp=temp->next;
        }
        head=reverseList(head);
        if(carry){
            ListNode* newHead=new ListNode(carry);
            newHead->next=head;
            return newHead;
        }
        return head;
    }
};