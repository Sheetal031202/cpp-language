#include <iostream>
#include <string>
using namespace std;

#define MAX 100

class Stack
{
private:
    char *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
        this->arr = new char[size];
        this->top = -1;
        this->size = size;
    }

    ~Stack()
    {
        delete[] arr;
    }

    // push
    void push(char element)
    {
        if (top == size - 1)
            cout << "Stack overflow" << endl;
        else
            arr[++top] = element;
    }

    // pop
    char pop()
    {
        if (top == -1)
            cout << "Stack underflow" << endl;
        else
            return arr[top--];
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isPalindrome(string str)
    {
        int n = str.length();

        for (int i = 0; i < n; i++)
        {
            push(str[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (pop() != str[i])
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    string name;
    cout << "Enter a name: ";
    cin >> name;

    Stack stack(name.length());

    if (stack.isPalindrome(name))
        cout << "It is a palindrome." << endl;
    else
        cout << "It is not a palindrome." << endl;

    return 0;
}