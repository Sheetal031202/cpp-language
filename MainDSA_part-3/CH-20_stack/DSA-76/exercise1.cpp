#include <iostream>
using namespace std;

// number  to binary
class Stack
{
private:
    int top;
    int len;
    int size;
    int *arr;

public:
    Stack(int size)
    {
        this->arr = new int[size];
        this->top = -1;
        this->size = size;
        this->len = 0;
    }
    ~Stack()
    {
        delete[] arr;
    }

    // push
    void push(int element)
    {
        if (this->top == size - 1)
        {
            cout << "Stack is full";
        }
        else
        {
            top++;
            arr[top] = element;
            len++;
        }
    }

// display
void display(){
    for(int i=this->top;i>=0;i--){
        cout << arr[i];
    }
}

};

int main()
{

    int num,a;
    cout << "Enter any number : ";
    cin >> num;
a=num;
        Stack stack(32);

    while (num != 0)
    {
        stack.push(num % 2);
        num = num / 2;
    }
    cout<<"------------------------------------"<<endl;
    cout << "ACTUAL NUMBER : "<< a<<endl;

    cout << "BINARY  : ";
    stack.display();

    cout<<endl<<"------------------------------------"<<endl;

    return 0;
}
