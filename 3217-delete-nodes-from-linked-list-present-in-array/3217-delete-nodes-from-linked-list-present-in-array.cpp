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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int,int> hashh;
        for(int i: nums){
            hashh[i]=1;
        }
        while(head && hashh.find(head->val)!=hashh.end()){
            head=head->next;
        }
        ListNode* temp=head;
        while(temp){
            ListNode* nextNode=temp->next;
            while(nextNode && hashh.find(nextNode->val)!=hashh.end()){
                nextNode=nextNode->next;
            }
            temp->next=nextNode;
            temp=temp->next;
        }
        return head;
    }
};