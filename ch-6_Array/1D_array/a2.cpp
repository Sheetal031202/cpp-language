#include<iostream>
using namespace std;


// sum and average
main(){
int row;
cout << "Enter row :";
cin >> row;

int a[row];
int sum=0;

for(int i=0;i<row;i++){
    cin>> a[i];
}
for(int i=0;i<row;i++){
 cout << a[i] << "\t";
sum=sum+a[i];
}
float p= (float)sum/row;

cout << "Ans is : " << sum;
cout << "ave is : " << p;
}