/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node * temp = new Node(x) ;
        temp->next = NULL ;
        
        if(head==NULL) return temp ;
        
        
        Node * mover = head ;
        while(mover->next != NULL){
            mover = mover->next ;
        }
        
        mover->next = temp ;
        
        return head ;
    }
};