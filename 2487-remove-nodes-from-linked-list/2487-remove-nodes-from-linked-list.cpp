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
    ListNode* curr=head;
    ListNode* prev=NULL;
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
    ListNode* removeNodes(ListNode* head) {
        head=reverseList(head);
        ListNode* temp=head;
        int val=temp->val;
        while(temp && temp->next){
            ListNode* nextNode=temp->next;
            while(nextNode && val>nextNode->val){
                nextNode=nextNode->next;
            }
            if(nextNode) val=nextNode->val;
            temp->next=nextNode;
            temp=temp->next;
        }
        head=reverseList(head);
        return head;
        // above is my approach time : O(4N) and space :O(1)

        //optimal approach time: O(N) and space : O(N) for vector storage
        // vector<ListNode*> st;
        // ListNode* temp=head;
        // while(temp){
        // while(!st.empty() && st.back()->val < temp->val){
        //     st.pop_back();
        // }
        // st.push_back(temp);
        // temp=temp->next;
        // }
        // for(int i=0;i+1<st.size();i++){
        //     st[i]->next=st[i+1];
        // }
        // st.back()->next=nullptr;
        // return st[0];
    }
};