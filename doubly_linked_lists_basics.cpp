#include <iostream>

using namespace std;

class Node{
    public:

    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

    cout<<"Inserted: "<<d<<" at head"<<endl;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
    cout<<"Inserted: "<<d<<" at tail"<<endl;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;

    int count=1;
    while(count<position-1 && temp!=NULL){
        temp=temp->next;
        count++;
    }

    if(temp==NULL || temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* newNode = new Node(d);
    newNode->next=temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;

    cout<<"Inserted: "<<d<<" at position: "<<position<<endl;
}

void deleteNode(Node* &head, Node*&tail, int position){

    cout<<"Deleted at position: "<<position<<endl;

    if(position==1){
        Node* temp = head;
        head=temp->next;
        temp->next=NULL;
        temp->prev=NULL;
        head->prev=NULL;
        delete temp;
    }
    else{
        int count=1;
        Node* temp=head;
        while(count<position){
            temp=temp->next;
            count++;
        }
        Node* prevNode = temp->prev;
        Node* aftNode = temp->next;

        if (aftNode != NULL) {
            aftNode->prev = prevNode;
        } else {
            // Deleting the tail
            tail = prevNode;
        }

        prevNode->next = aftNode;

        temp->next=temp->prev=NULL;
        delete temp;

    }

    
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(node1);

    insertAtHead(head,12);
    print(head);

    insertAtHead(head,14);
    print(head);

    insertAtHead(head,16);
    print(head);

    // cout<<getLength(head)<<endl;

    insertAtTail(tail,8);
    print(head);
    
    insertAtTail(tail,6);
    print(head);

    insertAtTail(tail,4);
    print(head);

    insertAtPosition(head,tail,5,9);
    print(head);

    insertAtPosition(head,tail,7,7);
    print(head);

    insertAtPosition(head,tail,9,5);
    print(head);

    deleteNode(head,tail,2);
    print(head);

    deleteNode(head,tail,1);
    print(head);

    deleteNode(head,tail,5);
    print(head);

    deleteNode(head,tail,7);
    print(head);


    return 0;
}