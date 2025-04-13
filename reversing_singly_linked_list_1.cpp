#include <iostream>
#include <vector>
#include <bits/stdc++.h>

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
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL){
        Node* forward = curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

void insertAthead(Node* head, int d){
    if(head==NULL){
        Node* newNode = new Node(d);
        return;
    }
}


int main(){

    Node* node1 = new Node(10);
    Node* head = node1;



    return 0;
}