#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

// Function to insert a new node at the end
void insertAtTail(Node* &head, Node* &tail, int d) {
    Node* newNode = new Node(d);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// Function to check if the list is circular
bool isCircular(Node* head) {
    if (head == NULL || head->next == NULL)
        return false;

    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        if (slow == fast)
            return true;
        slow = slow->next;
        fast = fast->next->next;
    }

    return false;
}

// Function to make the linked list circular manually
void makeCircular(Node* &tail, Node* head) {
    if (tail != NULL)
        tail->next = head;
}

// Function to print the list (limited to avoid infinite loop if circular)
void printList(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL && count < 20) { // Print only first 20 nodes to avoid infinite loop
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Insert elements
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);

    cout << "Linked List: ";
    printList(head);

    cout << "Is circular? " << (isCircular(head) ? "Yes" : "No") << endl;

    // Make it circular
    makeCircular(tail, head);

    cout << "After making circular..." << endl;
    cout << "Is circular? " << (isCircular(head) ? "Yes" : "No") << endl;

    return 0;
}
