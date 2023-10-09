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

void insertionAtHead(node* &head, int data){

    // New node create kar lo
    node* temp = new node(data);
    // abb sahi place pe insert kardo
    temp -> next = head;
    head = temp;
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

    // i/p = 10, 20, 30, 40
    insertionAtHead(head,20);
    insertionAtHead(head,30);
    insertionAtHead(head,40);
    
    print(head);
    // o/p = 40, 30, 20, 10

    return 0;
}