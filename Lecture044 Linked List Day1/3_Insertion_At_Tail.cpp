#include<bits/stdc++.h>
using namespace std;

class node{

    public:
        int data;
        node* next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};


void insertionAtTail(node* &head, node* &tail, int data){

    // New node create kar lo
    node* temp = new node(data);

    // abb sahi place pe insert kardo
    tail -> next = temp;
    tail = temp;
}


// Traversing the linked list
void print(node* &head){
    node* temp = head;

    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp ->  next;
    }
    cout<<endl;
}

int main(){

    // Create a new node
    node *node1 = new node(10);

    // Head points to node 1
    node* head = node1;
    node* tail = node1;

    // i/p = 10, 20, 30, 40
    insertionAtTail(head, tail, 20);
    insertionAtTail(head, tail, 30);
    insertionAtTail(head, tail, 40);
    insertionAtTail(head, tail, 50);
    
    print(head);
    // o/p = 10, 20, 30, 40

    return 0;
}