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

    node *node1 = new node(10);

    node* head = node1;

    
    print(head);

    return 0;
}