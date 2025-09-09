#include<iostream>
using namespace std;

int main(){
    // array of pointer

int a[5]={10,20,30,40,50};
int *ptr[5];

for(int i=0;i<5;i++){
    ptr[i]=&a[i];
}


for(int i=0;i<5;i++){
    cout<<*ptr[i]<<endl;
}


    return 0;
}