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
        ListNode* temp=head;
        map<ListNode*,int> mapp;
        while(temp){
            if(mapp.find(temp)!=mapp.end()){
                return temp;
            }
            mapp[temp]=1;
            temp=temp->next;
        }
        return nullptr;
    }
};