class Node{
    public:
    string url;
    Node* next;
    Node* prev;
    Node(string data){
        url=data;
        next=nullptr;
        prev=nullptr;
    }
    Node(string data,Node* next1,Node* prev1){
        url=data;
        next=next1;
        prev=prev1;
    }
};
class BrowserHistory {
public:
    Node* curr=nullptr;
    BrowserHistory(string homepage) {
        curr=new Node(homepage);
    }
    
    void visit(string url) {
        Node* newNode=new Node(url);
        newNode->prev=curr;
        curr->next=newNode;
        curr=newNode;
    }
    
    string back(int steps) {
        while(steps){
            if(curr->prev){
                curr=curr->prev;
                steps--;
            }
            else{
                break;
            }
        }
        return curr->url;
    }
    
    string forward(int steps) {
        while(steps){
            if(curr->next){
                curr=curr->next;
                steps--;
            }
            else{
                break;
            }
        }
        return curr->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */