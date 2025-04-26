#include <iostream>
#include <map>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int d){
        this->data= d;
        this->next= NULL;
    }
};

bool detectingLoop(Node* head){
    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp!=NULL){

        //the node has been visited once before
        if(visited[temp]==true){
            cout<<"Node: "<<temp->data<<" has been visited"<<endl;
            return 1;
        }

        visited[temp]=true;
        temp=temp->next;
    }
}

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

void createLoop(Node* tail, Node* target) {
    if (tail != NULL)
        tail->next = target;
}

void printList(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL && count < 20) { // limit to 20 nodes
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 5);

    cout << "Linked List (limited printing): ";
    printList(head);

    if (detectingLoop(head))
        cout << "Loop is present!" << endl;
    else
        cout << "No Loop detected!" << endl;

    // Now create a loop manually (e.g., tail connects to node 3)
    Node* temp = head;
    int count = 1;
    while (count < 3 && temp != NULL) { // move temp to 3rd node
        temp = temp->next;
        count++;
    }

    createLoop(tail, temp); // Creating a loop at node 3

    // After making a loop
    cout << "\nAfter creating a loop..." << endl;

    if (detectingLoop(head))
        cout << "Loop is present!" << endl;
    else
        cout << "No Loop detected!" << endl;

    return 0;
}