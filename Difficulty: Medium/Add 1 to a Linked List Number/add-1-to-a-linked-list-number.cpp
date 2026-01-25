class Solution {
public:

    // Reverse linked list
    Node* reverseLL(Node* head) {

        Node* prev = NULL;
        Node* curr = head;

        while (curr != NULL) {
            Node* nextNode = curr->next; // store next
            curr->next = prev;           // reverse link
            prev = curr;                 // move prev
            curr = nextNode;             // move curr
        }

        return prev; // new head
    }

    // Add 1 to linked list
    Node* addOne(Node* head) {

        // Step 1: Reverse linked list
        head = reverseLL(head);

        // Step 2: Add 1
        Node* temp = head;
        int carry = 1;

        while (temp != NULL) {

            int totalSum = temp->data + carry;
            temp->data = totalSum % 10;
            carry = totalSum / 10;

            // If no carry left, stop early
            if (carry == 0) {
                break;
            }

            // If last node and carry still left
            if (temp->next == NULL && carry != 0) {
                temp->next = new Node(carry);
                carry = 0;
                break;
            }

            temp = temp->next;
        }

        // Step 3: Reverse back
        head = reverseLL(head);

        return head;
    }
};
