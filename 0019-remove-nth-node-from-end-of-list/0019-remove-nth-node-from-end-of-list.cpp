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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* temp=head;
        int size=0;
        while(temp){
            size++;
            temp=temp->next;
        }
        if(size==n){
            head=head->next;
            return head;
        }
        int count=1;
        temp=head;
        while(temp){
            if(count==size-n){
                ListNode* newNode=temp->next;
                temp->next=newNode->next;
                delete newNode;
                return head;
            }
            count++;
            temp=temp->next;
        }
        return head;
    }
};