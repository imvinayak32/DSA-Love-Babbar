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
    
    cout<<endl;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp ->  next;
    }
    cout<<endl;
}

void insertionAtTail(node* &head, node* &tail, int data){

    node* temp = new node(data);

    tail -> next = temp;
    tail = temp;
}

void deletionAtPosition(node* &head, node* &tail, int position){

    node* temp = head;

    if(position == 1){
        head = head -> next;
        temp -> next = NULL;
        delete temp;
        return;
    }

    int count = 1;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }
    
    if((temp -> next)->next == NULL){
        tail = temp;
    }

    node* deletedNode = temp -> next;

    temp -> next = ((temp -> next) -> next);
    deletedNode -> next = NULL;
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
    insertionAtTail(head, tail, 90);
    insertionAtTail(head, tail, 100);
    print(head);

    // Deletion at Position = first node
    deletionAtPosition(head, tail, 1);
    print(head);
    cout<<"Head is Pointing to "<<head -> data<<endl;
    cout<<"Tail is Pointing to "<<tail -> data<<endl<<endl;


    // Deletion at Position = 7
    deletionAtPosition(head, tail, 7);
    print(head);
    cout<<"Head is Pointing to "<<head -> data<<endl;
    cout<<"Tail is Pointing to "<<tail -> data<<endl<<endl;

    
    // Deletion at Position = last node
    deletionAtPosition(head, tail, 8);
    print(head);
    cout<<"Head is Pointing to "<<head -> data<<endl;
    cout<<"Tail is Pointing to "<<tail -> data<<endl<<endl;


    return 0;
}