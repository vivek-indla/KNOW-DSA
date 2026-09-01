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
    ListNode* swapNodes(ListNode* head, int k) {
        int total=0;
        ListNode* tailNode=head;
        while(tailNode){
            total++;
            tailNode=tailNode->next;
        }
        ListNode* newHead=head;
        for(int i=1;i<k;i++){
            newHead=newHead->next;
        }
        ListNode* newTail=head;
        int tail=total-k;
        for(int i=0;i<tail;i++){
            newTail=newTail->next;
        }
        swap(newHead->val,newTail->val);
        return head;
    }
};