/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // ListNode* temp=head;
        // map<ListNode*,int> mapp;
        // while(temp){
        //     if(mapp.find(temp)!=mapp.end()){
        //         return temp;
        //     }
        //     mapp[temp]=1;
        //     temp=temp->next;
        // }
        // return nullptr;
        // above is a brute force approach time around:O(N) space:O(N)

        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
        }
        return nullptr;
    }
};