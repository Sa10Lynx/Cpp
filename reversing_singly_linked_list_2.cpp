#include <iostream>
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

void reverseList(Node* &head, Node* &curr, Node* &prev){
    //base condition
    if(curr==NULL){
        head=prev;
        return;
    }

    Node* forward = curr->next;
    reverseList(head,forward,curr);
    curr->next=prev;
}

Node* reversingList(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    reverseList(head,curr,prev);
    return head;
}

void insertAtHead(Node* &head, int d){
    // if(head == NULL){
    //     Node* newNode = new Node(d);
    //     return;
    // }
    Node* newNode = new Node(d);
    newNode->next= head;
    head= newNode;
}


void print(Node* head){
    if(head == NULL){
        cout<<"Empty list"<<endl;
        return;
    }
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){


    Node* head = NULL;

    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);


    cout<<"Original List:"<<endl;
    print(head);

    head= reversingList(head);
    cout<<"After reversing the list:"<<endl;
    print(head);
    return 0;
}













// #include <iostream>
// #include <vector>

// using namespace std;

// class Node{

//     public:
//     int data;
//     Node* next;

//     Node(int d){
//         this->data=d;
//         this->next=NULL;
//     }

// };

// void reverseList(Node* &head, Node* curr, Node* prev){
//     //base case
//     if(curr==NULL){
//         head= prev;
//         return;
//     }

//     Node* forward = curr->next;
//     reverseList(head,forward,curr);
//     curr->next=prev;
// }


// Node* reversingLinkedList(Node* head){
//     Node* curr = head;
//     Node* prev = NULL;
//     reverseList(head, curr, prev);
//     return head;
// }

// void insertAthead(Node* head, int d){
//     if(head==NULL){
//         Node* newNode = new Node(d);
//         return;
//     }
//     else{
//         Node* newNode = new Node(d);
        
//     }
// }
// void print(Node* head) {
//     if (head == NULL) {
//         cout << "List is empty" << endl;
//         return;
//     }

//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// void insertAtHead(Node* &head, int d) {
//     Node* newNode = new Node(d);
//     newNode->next = head;
//     head = newNode;
// }

// int main(){
//     Node* head = NULL;
//     Node* curr = head;
//     Node* prev = NULL;

//     insertAtHead(head, 10);
//     insertAtHead(head, 20);
//     insertAtHead(head, 30);
//     insertAtHead(head, 40);

//     cout << "Original list: ";
//     print(head);

//     reverseList(head,curr,prev);  // update head
//     cout << "Reversed list: ";
//     print(head);

//     return 0;
// }
