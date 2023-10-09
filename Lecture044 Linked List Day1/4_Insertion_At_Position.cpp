// Insertion at Position 1, with InsertionAtPostion can't possible as we need preposition node, which doesn't exist.

// Problem while inserting at head :-
        // Not able to insert at Head !!

// Problem while inserting at tail :-
        // Tail doesn't get updated !!

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

void print(node* &head){
    node* temp = head;

    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp ->  next;
    }
    cout<<endl;
}

void insertionAtTail(node* &head, node* &tail, int data){

    // New node create kar lo
    node* temp = new node(data);

    // abb sahi place pe insert kardo
    tail -> next = temp;
    tail = temp;
}

void insertionAtPosition(node* &head, int position, int data){

    node* temp = head;
    int count = 1; // temp is at 1st position initially

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    node* nodeToInsert = new node(data);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}


int main(){

    node *node1 = new node(10);

    node* head = node1;
    node* tail = node1;

    insertionAtTail(head, tail, 20);
    insertionAtTail(head, tail, 40);
    insertionAtTail(head, tail, 50);
    print(head); // o/p = 10, 20, 40, 50

    insertionAtPosition(head, 3, 30);
    print(head); // o/p = 10, 20, 30, 40, 50
    

    // Problem while inserting at head :-
    // Not able to insert at Head !!
    // Expected o/p = 100, 10, 20, 30, 40, 50
    insertionAtPosition(head, 1, 100);
    // Actual o/p = 10, 100, 20, 30, 40, 50
    print(head); 

    
    // Problem while inserting at tail :-
    // Tail doesn't get updated !!
    // o/p = 100, 10, 20, 30, 40, 50, 200
    insertionAtPosition(head, 7, 200);
    print(head); 
    cout<<"Tail is Pointing to "<<tail -> data<<endl;

    return 0;
}