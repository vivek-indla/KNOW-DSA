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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL ||head->next==NULL || k==0){
            return head;
        }
        int total=1;
        ListNode* tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
            total++;
        }
        k%=total;
        int pos=total-k;
        tail->next=head;
        ListNode* temp=head;
        ListNode* newHead=NULL;
        int count=0;
        while(temp){
            count++;
            if(count==pos){
                newHead=temp->next;
                temp->next=NULL;
                break;
            }
            temp=temp->next;
        }
        return newHead;

    }
};