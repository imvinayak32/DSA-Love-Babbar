#include<bits/stdc++.h>
using namespace std;

class node{

    public:
        int data;
        node* next;
        node* prev;

    node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

void print(node* &head){
    node* temp = head;

    cout<<endl;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp ->  next;
    }
    cout<<endl;
}

void insertionAtHead(node* &head, node* &tail, int data){

    // In case of empty Linked List
    if(head == NULL){
        node* temp = new node(data);
        head = temp;
        tail = temp;
    }

    node* temp = new node(data);

    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insertionAtTail(node* &head, node* &tail, int data){

    // In case of empty LL
    if(tail == NULL){
        node* temp = new node(data);
        head = temp;
        tail = temp;
    }

    // When there are some element in LL already
    while(tail -> next != NULL){
        tail = tail -> next;
    }

    node* temp = new node(data);

    tail -> next = temp;
    temp ->prev = tail;
    tail = temp;
}

void insertionAtPosition(node* &head, node* &tail, int position, int data){

    // To insert at Head
    if(position == 1){
        insertionAtHead(head, tail, data);
        return;
    }

    node* temp = head;
    int count = 1;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL){
        insertionAtTail(head, tail, data);
        return;
    }

    node* nodeToInsert = new node(data);

    nodeToInsert -> next = temp -> next;
    (temp -> next) -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
    
}


int main(){

    node *node1 = new node(10);

    node* head = node1;
    node* tail = node1;

    insertionAtHead(head, tail, 20);
    insertionAtHead(head, tail, 40);
    print(head);

    insertionAtTail(head, tail, 50);
    insertionAtTail(head, tail, 60);
    insertionAtTail(head, tail, 70);
    print(head);

    insertionAtPosition(head, tail, 3, 30);
    print(head);
    cout<<"Head is Pointing to "<<head -> data<<endl;
    cout<<"Tail is Pointing to "<<tail -> data<<endl;

    insertionAtPosition(head, tail, 1, 100);
    print(head);
    cout<<"Head is Pointing to "<<head -> data<<endl;
    cout<<"Tail is Pointing to "<<tail -> data<<endl;

    insertionAtPosition(head, tail, 9, 200);
    print(head);
    cout<<"Head is Pointing to "<<head -> data<<endl;
    cout<<"Tail is Pointing to "<<tail -> data<<endl;

    return 0;
}