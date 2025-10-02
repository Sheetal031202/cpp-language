#include<iostream>
using namespace std;

template <typename T1,typename T2>
void a(T1 a , T2 b){
cout << "A : "<< a<< endl; 
cout << "B : "<< b<< endl; 
}


int main(){

a(10,25.3);



    return 0;
}