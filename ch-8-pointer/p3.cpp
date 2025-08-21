#include<iostream>
using namespace std;

int main(){
    //scale of pointer

int a[5]={110,20,30,40,50};
int *ptr=&a[0];




for(int i=0;i<5;i++){
    cout<<*(ptr+i)<<endl;
}


    return 0;
}