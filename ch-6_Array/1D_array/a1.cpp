#include<iostream>
using namespace std;


// Dynamic array
main(){
int row;
cout << "Enter row :";
cin >> row;

int a[row];

for(int i=0;i<row;i++){
    cin>> a[i];
}
for(int i=0;i<row;i++){
 cout << a[i] << "\t";
}
}