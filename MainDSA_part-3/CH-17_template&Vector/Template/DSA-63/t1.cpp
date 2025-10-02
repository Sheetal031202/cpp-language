#include<iostream>
using namespace std;

template <typename T>
T add(T a,T b){
return a+b;
}

int main(){
cout << add(10,20)<< endl;
cout << add(10.2,20.3)<< endl;
// cout << add('a'+'q')<< endl;



    return 0;
}