/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
         if(head->next == NULL ) return head;
        vector<int> v;
        v.push_back(head->data);
        Node * temp = head->next;
        while(temp){
            if(temp->data != v[(v.size())-1]){
                v.push_back(temp->data);
            }
            temp = temp->next;
        }
        temp=head;
        Node * ptr = NULL;
        int index=0;
        while(index < v.size()){
            temp->data = v[index++];
            ptr = temp;
            temp=temp->next;
        }
        ptr->next = NULL;
        // for(int i:v) cout<<i<<endl;
        return head;
    }
};