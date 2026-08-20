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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyHead=new ListNode(-1);
        ListNode* traverse=dummyHead;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        while(temp1 && temp2){
            if(temp1->val < temp2->val){
                traverse->next=temp1;
                temp1=temp1->next;
            }
            else{
                traverse->next=temp2;
                temp2=temp2->next;
            }
            traverse=traverse->next;
        }
        if(temp1){
            traverse->next=temp1;
        }
        else{
            traverse->next=temp2;
        }
        return dummyHead->next;
    }
};