#include<iostream>
using namespace std;


// 2 array sum store in 3rd array

main(){
int row;
cout << "Enter row :";
cin >> row;

int a[row];
int b[row];
int c[row];


for(int i=0;i<row;i++){
     cout <<"a  value" << i+1  << ": ";

    cin>> a[i];
}

for(int i=0;i<row;i++){
         cout <<"b  value " << i+1  << ": ";

    cin>> b[i];
}
for(int i=0;i<row;i++){
    c[i]=a[i]+b[i];
 cout << c[i] << "\t";
}
}