#include<iostream>
using namespace std;
// input

int input()
{
    int n;
    cin >> n;
    return n;
}

// array input

void arrayinput(int size, int array[])
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        array[i] = input();
    }
}

// array Output

void arrayoutput(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}

// array
int arraySum(int n, int a[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}