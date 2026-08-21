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
 ListNode* convert(vector<int> &nums){
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
    if(list1){
        traverse->next=list1;
    }
    else{
        traverse->next=list2;
    }
    return dummyHead->next;
 }
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // vector<int> arr;
        // for(int i=0;i<lists.size();i++){
        //     ListNode* temp=lists[i];
        //     while(temp){
        //         arr.push_back(temp->val);
        //         temp=temp->next;
        //     }
        // }
        // sort(arr.begin(),arr.end());
        // ListNode* head=convert(arr);
        // return head;
        // above is the brute approach use time : O(N Log N) space : O(N)
        
        //second approach
        if(lists.empty())
            return NULL;
        ListNode* head=lists[0];
        for(int i=1;i<lists.size();i++){
            head=mergeTwoLists(head,lists[i]);
        }
        return head;
    }
};