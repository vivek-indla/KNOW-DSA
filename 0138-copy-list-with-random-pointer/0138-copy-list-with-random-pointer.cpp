/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
void copyNode(Node* head){
    Node* temp=head;
    while(temp){
        Node* copyNode=new Node(temp->val);
        if(copyNode) copyNode->next=temp->next;
        temp->next=copyNode;
        temp=temp->next->next;
    }
}
void randomPointer(Node* head){
    Node* temp=head;
    while(temp){
        Node* copyNode=temp->next;
        if(temp->random) copyNode->random=temp->random->next;
        else copyNode->random=nullptr;
        temp=temp->next->next;
    }
}
Node* nextPointer(Node* head){
    Node* temp=head;
    Node* dummyHead = new Node(-1);
    Node* traverse = dummyHead;
    while(temp){
        traverse->next=temp->next;
        traverse=traverse->next;
        temp->next=temp->next->next;
        temp=temp->next;
    }
    return dummyHead->next;
}
class Solution {
public:
    Node* copyRandomList(Node* head) {
        copyNode(head);
        randomPointer(head);
        return nextPointer(head);
    }
};