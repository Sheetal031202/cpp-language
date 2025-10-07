#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};


int main(){

    // Node 1
Node *HEAD =new Node();
HEAD->data=15;
HEAD->next=nullptr;

// Node 2
Node *current=new Node();
current->data=25;
current->next=nullptr;
HEAD->next=current;


current =new Node();
current->data=35;
current->next=nullptr;
HEAD->next->next=current;

current =new Node();
current->data=45;
current->data=45;
current->next=nullptr;
HEAD->next->next->next=current;


// traversing (loop thi access)

Node *ptr=HEAD;

while(ptr != nullptr){
    cout << ptr->data<< endl;
    ptr=ptr->next;
}

    return 0;
}