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

    // Working of Destructor is not clear ??
    ~node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
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

void deletionAtPosition(node* &head, node* &tail, int position){

    node* current = head;

    if(position == 1){

        head = head -> next;
        current -> next = NULL;
        head -> prev = NULL;
        delete current;
        return;
    }

    int count = 1;

    node* previous = NULL;

    while(count < position){
        previous = current;
        current = current -> next;
        count++;
    }

    // To update Tail
    if(current -> next == NULL){
        tail = previous;
    }

    previous -> next = current -> next;

    // Why we don't need these lines ??
    //(current -> next) -> prev = previous;
    //current -> prev = NULL;

    current -> next = NULL;
    delete current;
    //delete previous;  //- why this is creating problem??
}


int main(){

    node *node1 = new node(10);

    node* head = node1;
    node* tail = node1;

    insertionAtTail(head, tail, 20);
    insertionAtTail(head, tail, 30);
    insertionAtTail(head, tail, 40);
    insertionAtTail(head, tail, 50);
    insertionAtTail(head, tail, 60);
    insertionAtTail(head, tail, 70);
    insertionAtTail(head, tail, 80);
    print(head);

    // Deletion at Position = first node
    deletionAtPosition(head, tail, 1);
    print(head);
    cout<<"Head is Pointing to "<<head -> data<<endl;
    cout<<"Tail is Pointing to "<<tail -> data<<endl<<endl;


    // Deletion at Position = 3
    deletionAtPosition(head, tail, 3);
    print(head);
    cout<<"Head is Pointing to "<<head -> data<<endl;
    cout<<"Tail is Pointing to "<<tail -> data<<endl<<endl;

    
    // Deletion at Position = last node
    deletionAtPosition(head, tail, 6);
    print(head);
    cout<<"Head is Pointing to "<<head -> data<<endl;
    cout<<"Tail is Pointing to "<<tail -> data<<endl<<endl;



    return 0;
}