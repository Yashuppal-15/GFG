/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {

    // Step 1: Detect loop using slow and fast pointer
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          // slow moves 1 step
        fast = fast->next->next;    // fast moves 2 steps

        // Loop detected
        if (slow == fast) {
            break;
        }
    }

    // If no loop is present
    if (fast == NULL || fast->next == NULL) {
        return;
    }

    // Step 2: Find starting point of loop
    slow = head;

    // Move slow and fast one step at a time
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    // Now slow (or fast) is at starting point of loop
    Node* startPoint = slow;

    // Step 3: Remove loop
    Node* temp = startPoint;

    // Traverse till last node of loop
    while (temp->next != startPoint) {
        temp = temp->next;
    }

    // Break the loop
    temp->next = NULL;
}
};