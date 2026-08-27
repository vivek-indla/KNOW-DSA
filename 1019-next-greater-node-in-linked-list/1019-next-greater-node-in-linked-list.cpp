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
 int nxtGreater(ListNode* head){
    ListNode* temp=head->next;
    int value=head->val;
    while(temp){
        if(value < temp->val)  return temp->val;
        temp=temp->next;
    }
    return 0;
 }
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> res;
        ListNode* temp=head;
        while(temp->next){
            res.push_back(nxtGreater(temp));
            temp=temp->next;
        }
        res.push_back(0);
        return res;
    }
};