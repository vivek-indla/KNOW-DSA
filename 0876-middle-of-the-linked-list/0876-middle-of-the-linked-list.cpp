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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        int pos=(count/2)+1;
        temp=head;
        while(temp){
            pos--;
            if(pos==0){
                break;
            }
            temp=temp->next;
        }
        return temp;
    
        // ListNode* slow=head;
        // ListNode* fast=head;
        // while(fast!=NULL && fast->next!=NULL){
        //     slow=slow->next;
        //     fast=fast->next->next;
        // }
        // return slow;
    }
};