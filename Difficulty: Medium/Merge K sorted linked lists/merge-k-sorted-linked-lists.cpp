class Solution {
  public:
    
    // Comparator for Min Heap
    class Compare {
      public:
        bool operator()(Node* a, Node* b) {
            return a->data > b->data;
        }
    };
    
    Node* mergeKLists(vector<Node*>& arr) {
        
        priority_queue<Node*, vector<Node*>, Compare> pq;
        
        // Step 1: push first node of each list into heap
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != NULL) {
                pq.push(arr[i]);
            }
        }
        
        Node* head = NULL;
        Node* tail = NULL;
        
        // Step 2: process min heap
        while (!pq.empty()) {
            
            Node* topNode = pq.top();
            pq.pop();
            
            if (head == NULL) {
                head = topNode;
                tail = topNode;
            } else {
                tail->next = topNode;
                tail = topNode;
            }
            
            if (topNode->next != NULL) {
                pq.push(topNode->next);
            }
        }
        
        return head;
    }
};
