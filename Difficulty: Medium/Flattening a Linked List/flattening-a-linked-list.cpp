/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
  public:
  Node *getMid(Node *head){
      Node *slow = head;
      Node *fast = head->bottom;
      while(fast!=nullptr && fast->bottom !=  nullptr){
          
          slow=slow->bottom;
          fast=fast->bottom-> bottom;
          
      }
      return slow;
  }
  
  
  Node * mergeTwoLists(Node *left, Node *right){
      Node *mergedList= new Node(0);
      Node *ptr = mergedList;
      
      while(left && right){
          if(left->data <= right->data){
              ptr->bottom = left;
              left=left->bottom;
              ptr=ptr->bottom;
          }
          else{
              ptr->bottom = right;
              right= right->bottom;
              ptr=ptr->bottom;
          }
      }
      
      while(left){
         ptr-> bottom = left;
        left=left->bottom;
        ptr=ptr->bottom;
          
      }
      
      while(right){
           ptr-> bottom = right;
              right= right->bottom;
              ptr=ptr-> bottom;
      }
      
      return mergedList-> bottom;
  }
  
  
  Node* sortBottomList(Node* head) {
        if (!head || !head->bottom) return head;
        Node* mid = getMid(head);
        Node* right = mid->bottom;
        mid->bottom = nullptr;

        Node* leftSorted  = sortBottomList(head);
        Node* rightSorted = sortBottomList(right);
        return mergeTwoLists(leftSorted, rightSorted);
    }
  
  
    Node *flatten(Node *head) {
        Node *newNode = new Node(0);
        Node *temp2=newNode;
    
        Node * temp= head;
        
        while(temp){
            Node * current_bottom= temp; // intialsie row for current coulumn
            
             while(current_bottom != nullptr){ 
                 temp2->bottom= current_bottom;
                 temp2 = temp2->bottom;
                 current_bottom = current_bottom->bottom;
        }
        temp =temp->next; // move to the next coloumn
            
        }
        temp2->bottom = nullptr; // Terminate the list
        
        return sortBottomList(newNode->bottom);  
        
    }
};