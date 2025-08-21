#include <iostream>
using namespace std;

// sum
int sum(int a, int b)
{
    return a + b;
}

// substract
int less(int a, int b)
{
    if (a > b)
    {
        return a - b;
    }
    else if (a == b)
    {
        return 0;
    }
    else
    {
        return b - a;
    }
}

// multiple
int multiple(int a, int b)
{
    return a * b;
}

// devide
int devide(int a, int b)
{
    if (a > b)
    {
        return a / b;
    }
    else if (a == b)
    {
        return 1;
    }
    else
    {
        return b / a;
    }
}
int module(int a, int b)
{
    if (a > b)
    {
        return a % b;
    }
    else if (a == b)
    {
        return 0;
    }
    else
    {
        return b % a;
    }
}

// main-------------
int main()
{

    for (int i = 1; i >= 1; i++)
    {

        int choice;
        cout << " Enter your choice : ";
        cin >> choice;

        if (choice > 0)
        {
            int first;
            int second;

            cout << endl
                 << " Enter your first number :";
            cin >> first;

            cout << endl
                 << " Enter your second number :";
            cin >> second;

            switch (choice)
            {

            case 1:
                cout << "Adiition of " << first << " + " << second << " =  " << first + second << endl;
            break;

            case 2:
                cout << "Subtraction of " << first << " - " << second << " =  " << first - second << endl;
            break;

            case 3:
                cout << "MUltiplication of " << first << " X " << second << " =  " << first * second << endl;
            break;

            case 4:
                cout << "Devision of " << first << " / " << second << " =  " << first / second << endl;
            break;

            case 5:
            
                cout << "module of " << first << " % " << second << " =  " << first % second << endl;
            break;

            default:
            cout << "Invalid choice " << endl;
            }
        }
        else
        {
            cout << " choice is 0 .. exit " << endl;
            break;
        }
    }
    return 0;
}