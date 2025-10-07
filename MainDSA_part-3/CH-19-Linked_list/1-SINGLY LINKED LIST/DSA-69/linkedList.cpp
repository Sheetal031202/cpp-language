#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    // node 1
Node *HEAD=new Node();
HEAD->data=15;
HEAD->next=nullptr;

// node-2
Node *n2=new Node();
n2->data=25;
n2->next=nullptr;
HEAD->next=HEAD;

// node-3
Node *n3=new Node();
n3->data=35;
n3->next=nullptr;
n2->next=n2;

// node-4
Node *n4=new Node();
n4->data=45;
n4->next=nullptr;
n3->next=n3;



cout << "1 node DATA:"<< HEAD->data<< "\t\tADDRESS : "<< HEAD->next <<endl; 
cout << "2 node DATA:"<< n2->data<< "\t\tADDRESS : "<< n2->next <<endl; 
cout << "3 node DATA:"<< n3->data<< "\t\tADDRESS : "<< n3->next <<endl; 
cout << "4 node DATA:"<< n4->data<< "\t\tADDRESS : "<< n4->next <<endl; 

    return 0;
}