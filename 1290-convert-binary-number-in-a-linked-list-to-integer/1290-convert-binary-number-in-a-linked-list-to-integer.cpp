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
 int convertToDecimal(vector<int> &arr){
    int p2=1;
    int num=0;
    int len=arr.size();
    for(int i=len-1;i>=0;i--){
        if(arr[i]==1){
            num=num+p2;
        }
        p2=p2*2;
    }
    return num;
 }
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        if(head->val==0 && head->next==NULL){
            return 0;
        }
        ListNode* temp=head;
        vector<int> arr;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        return convertToDecimal(arr);
    }
};