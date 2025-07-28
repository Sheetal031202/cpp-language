#include<iostream>
using namespace std;
main(){
  int num,a=1;
   cout<< "enter num : ";
   cin >> num;
    for(int i=0;i<=num;i++){
        a=i+a;
        cout<< a << "\t";
    }
}