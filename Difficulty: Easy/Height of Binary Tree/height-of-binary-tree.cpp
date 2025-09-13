/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int height(Node* node) {
        // code here
        if(node == NULL)return 0;
        
        if(!node->left && !node->right)return 0;
        
        return 1 + max(height(node->left), height(node->right));
    }
};