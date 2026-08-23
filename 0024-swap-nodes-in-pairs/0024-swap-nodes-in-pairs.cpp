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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* newHead;
        ListNode* temp=head;
        ListNode* prevNode=NULL;
        while(temp!=NULL){
            ListNode* next=temp->next;
            if(next==NULL){
                if(prevNode)
                    prevNode->next=temp;
                break;
            }
            ListNode* nextNode=next->next;
            next->next=NULL;
            reverseList(temp);
            if(prevNode==NULL)
                newHead=next;
            else
                prevNode->next=next;
            prevNode=temp;
            temp=nextNode;
        }
        return newHead;
    }
};