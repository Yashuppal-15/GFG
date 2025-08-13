/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
        Node* temp = head;
         Node* temp1 = head;
         int count = 0;
         while(temp->next != NULL){
               count++;
               temp = temp->next;
         }
         if(count == 0){
             return temp1->data;
         }
         int a = (count+1)/2;
         int kcount = 0;
         while(temp1->next != NULL){
             kcount++;
             temp1 = temp1->next;
             if(kcount == a){
                 a = temp1->data;
                 break;
             }
         }
         return a;
    }
};