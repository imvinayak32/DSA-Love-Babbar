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

    node* temp = new node(data);

    tail -> next = temp;
    tail = temp;
}

void insertionAtHead(node* &head, int data){

    node* temp = new node(data);

    temp -> next = head;
    head = temp;
}

void insertionAtPosition(node* &head, node* &tail, int position, int data){

    if(position == 1){
        insertionAtHead(head,data);
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
    temp -> next = nodeToInsert;
}


int main(){

    node *node1 = new node(10);

    node* head = node1;
    node* tail = node1;

    insertionAtTail(head, tail, 20);
    insertionAtTail(head, tail, 40);
    insertionAtTail(head, tail, 50);
    print(head);

    insertionAtPosition(head, tail, 3, 30);
    print(head);

    insertionAtPosition(head, tail, 1, 100);
    print(head);

    insertionAtPosition(head, tail, 7, 200);
    print(head);


    cout<<"Head is Pointing to "<<head -> data<<endl;
    cout<<"Tail is Pointing to "<<tail -> data<<endl;

    return 0;
}