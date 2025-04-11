#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        int value = this->data;
        //to free the memory
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory for the node is free: "<<value<<endl;
    }
};

void insertAtHead(Node* &head, Node* &tail, int d) {
    Node* temp = new Node(d);
    if (head == NULL) {
        head = temp;
        tail = temp;
    } else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head, Node* &tail, int d) {
    Node* temp = new Node(d);
    if (head == NULL) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int pos, int d) {
    if (pos == 1) {
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while (count < pos - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL) {
        insertAtTail(head, tail, d);
        return;
    }

    Node* newNode = new Node(d);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteNode(int position, Node* &head){
    
    //deleting 1st node
    if(position==1){
        Node* temp =head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    //for other cases
    else{
        Node* curr = head;
        Node* prev = NULL;

        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next; 
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 10);
    print(head);

    insertAtHead(head, tail, 12);
    print(head);

    insertAtHead(head, tail, 14);
    print(head);

    insertAtTail(head, tail, 20);
    print(head);

    insertAtTail(head, tail, 30);
    print(head);

    insertAtPosition(head, tail, 3, 99);
    print(head);

    insertAtPosition(head, tail, 1, 5);
    print(head);

    insertAtPosition(head, tail, 100, 50); // Will insert at tail if position is out of range
    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    deleteNode(8,head);
    print(head);

    return 0;
}
