#include <iostream>
using namespace std;

// take nothing,return something

int add()
{
    int a, b;

    cout << "Enter a value:";
    cin >> a;

    cout << "Enter b value:";
    cin >> b;
    return a + b;
}


int input(){
    int n;
    cin >> n;
    return n;
}
int main()
{

    // int ans=add();
    // cout << "Ans is : "<< ans;
    // or

    cout << "Ans is :"<< add();


    // for input function
    int age;
    cout <<endl<< "Enter age :";
    age=input();
        cout <<endl<< "Age is:" << age;

    return 0;
}
