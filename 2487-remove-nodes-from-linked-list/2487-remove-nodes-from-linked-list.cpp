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
    ListNode* removeNodes(ListNode* head) {
        head=reverseList(head);
        ListNode* temp=head;
        int val=temp->val;
        while(temp && temp->next){
            ListNode* nextNode=temp->next;
            while(nextNode && val>nextNode->val){
                nextNode=nextNode->next;
            }
            if(nextNode) val=nextNode->val;
            temp->next=nextNode;
            temp=temp->next;
        }
        head=reverseList(head);
        return head;
    }
};