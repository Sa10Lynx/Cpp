#include <iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

Node* reverseList(Node* &head){
    //base case
    if(head == NULL || head->next==NULL){
        return head;
    }
    
    //return the head of the rest of the list (SL= small list)
    Node* SLhead = reverseList(head->next);

    head->next->next=head;
    head->next=NULL;

    return SLhead;
}

void reversingList(Node* &head, Node* curr, Node* prev){
    if(curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr->next;
    reversingList(head,forward,curr);
    curr->next=prev;

}

Node* reversLinkedList(Node* &head){
    return reverseList(head);
}


void insertAtHead(Node* &head, int d) {
    Node* newNode = new Node(d);
    newNode->next = head;
    head = newNode;
}

// Print list
void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

    cout << "Original list: ";
    print(head);

    // Using return-style reverse
    head = reversLinkedList(head);
    cout << "Reversed (return-style): ";
    print(head);

    // Using void-style reverse
    reversingList(head, head, NULL);
    cout << "Reversed again (void-style): ";
    print(head);

    return 0;
}