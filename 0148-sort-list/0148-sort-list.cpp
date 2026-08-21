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
 ListNode* middle(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
 }
 ListNode* mergeTwoLists(ListNode* list1,ListNode* list2){
    ListNode* dummyHead=new ListNode(-1);
    ListNode* traverse=dummyHead;
    while(list1 && list2){
        if(list1->val < list2->val){
            traverse->next=list1;
            list1=list1->next;
        }
        else{
            traverse->next=list2;
            list2=list2->next;
        }
        traverse=traverse->next;
    }
    if(list1) traverse->next=list1;
    else traverse->next=list2;
    return dummyHead->next;
 }
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* middleNode=middle(head);
        ListNode* rightHead=middleNode->next;
        ListNode* leftHead=head;
        middleNode->next=NULL;
        leftHead=sortList(leftHead);
        rightHead=sortList(rightHead);
        return mergeTwoLists(leftHead,rightHead);
    }
};