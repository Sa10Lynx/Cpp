#include <iostream>

using namespace std;

class Node{

    public:

    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for the node with data : "<<value<<endl;
    }
};

void insertAtElement(Node* &tail,Node* &head, int element, int d){
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail=newNode;
        head=newNode;
        newNode->next=newNode->prev=newNode;
    }
    else{
        Node* curr = tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node* temp = new Node(d);
        temp->next=curr->next;
        curr->next->prev=temp;
        curr->next=temp;
        temp->prev=curr;

        if (curr == tail) {
            tail = temp;
        }
    }
}

void deleteNode(Node* &tail, Node* &head, int d){

    if(tail==NULL){
        cout<<"Empty List"<<endl;
    }
    Node* temp = tail;
    while(temp->next->data!=d){
        temp=temp->next;
    }
    Node* delNode = temp->next;
    temp->next=delNode->next;
    delNode->next->prev=temp;

    delNode->next=delNode->prev=NULL;
    delete delNode;
}

void print(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}


int main(){

    Node* tail=NULL;
    Node* head=NULL;


    insertAtElement(tail,head,1,1);
    print(head);

    insertAtElement(tail,head,1,2);
    print(head);

    insertAtElement(tail,head,2,3);
    print(head);

    insertAtElement(tail,head,3,4);
    print(head);

    deleteNode(tail,head,3);
    print(head);

    deleteNode(tail,head,4);
    print(head);

    deleteNode(tail,head,1);
    print(head);


    return 0;
}
