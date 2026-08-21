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
    ListNode* prev=NULL;
    ListNode* curr=head;
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* dummyHead=new ListNode(-1);
        dummyHead->next=head;
        ListNode* beforeLeft=dummyHead;
        for(int i=1;i<left;i++){
            beforeLeft=beforeLeft->next;
        }
        ListNode* leftHead=beforeLeft->next;
        ListNode* rightNode=leftHead;
        for(int i=left;i<right;i++){
            rightNode=rightNode->next;
        }
        ListNode* afterRight=rightNode->next;
        rightNode->next=NULL;
        ListNode* newHead=reverseList(leftHead);
        beforeLeft->next=newHead;
        leftHead->next=afterRight;
        return dummyHead->next;
    }
};