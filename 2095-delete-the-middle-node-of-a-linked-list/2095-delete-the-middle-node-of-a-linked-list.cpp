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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }  
        int pos=count/2;
        temp=head;
        while(temp){
            pos--;
            if(pos==0){
                ListNode* delNode=temp->next;
                temp->next=delNode->next;
                delete delNode;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};