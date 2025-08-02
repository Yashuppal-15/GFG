/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  private:
  
    Node* rev(Node* head)
    {
        Node* curr=head;
        Node* prev=NULL;
        Node* next=NULL;
        
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;curr=next;
        }
        return prev;
    }
    
    void insertAtTail(Node* &head,Node* &tail,int d)
    {
        Node* temp=new Node(d);
        if(tail==NULL)       //if initially the LL was empty
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    
    Node* add(Node* num1, Node* num2)
    {
        Node* anshead=NULL;
        Node* anstail=NULL;
        
        int carry=0;
        while(num1!=NULL || num2!=NULL || carry!=0)
        {
            int val1=0;
            if(num1!=NULL)
            {
                val1=num1->data;
            }
            int val2=0;
            if(num2!=NULL)
            {
                val2=num2->data;
            }
            
            int sum=val1+val2+carry;
            int digit=sum%10;
            //add in answer LL
            insertAtTail(anshead,anstail,digit);
            
            carry=sum/10;
            
            if(num1!=NULL)
            {
                num1=num1->next;
            }
            if(num2!=NULL)
            {
                num2=num2->next;
            }
        }
        return anshead;
    }
    
  public:
  
    Node* addTwoLists(Node* num1, Node* num2) {
        
        //step1-rev  both unput LLs
        num1=rev(num1);              
        num2=rev(num2);              
        
        //step2-add them
        Node* ans=add(num1,num2);    
        
        //step3-reverse ans  ll
        ans=rev(ans);                
        
        // Step 4: remove leading zeros
        while (ans != NULL && ans->data == 0 && ans->next != NULL)
        {
            Node* temp = ans;
            ans = ans->next;
            delete temp;
        }
        
        return ans;
    }
};

