#include <iostream>
using namespace std;

// take something ,return nothing

// 1...declare
void add(int ,int );

int main()
{
    // calling
    add(3, 5);

    return 0;
}

// 2 defintion
void add(int a,int b)
{
    cout << "Additon :" << a + b;
}