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

Node* reverseK(Node* head, int k){
    //base case
    if(head==NULL){
        return head;
    }

    Node* forward = NULL;
    Node* prev=NULL;
    Node* curr = head;
    int count=0;

    while(curr!=NULL && count<k){
        forward=curr->next;
        curr->next=prev;
        prev =curr;
        curr=forward;

        count++;
    }

    if(forward!=NULL){
        head->next=reverseK(forward,k);
    }

    return prev;
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

    head=reverseK(head,2);
    print(head);

    return 0;
}