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
 ListNode* convert(vector<int>& nums){
    if(nums.empty())
        return NULL;
    ListNode* head=new ListNode(nums[0]);
    ListNode* mover=head;
    for(int i=1;i<nums.size();i++){
        ListNode* temp=new ListNode(nums[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
 }
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head->next;
        vector<int> nums;
        int sum=0;
        while(temp){
            if(temp->val!=0){
                sum+=temp->val;
            }
            else{
                nums.push_back(sum);
                sum=0;
            }
            temp=temp->next;
        }
        ListNode* newHead=convert(nums);
        return newHead;
    }
};