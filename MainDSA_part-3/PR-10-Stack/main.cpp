#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int top;
    int len;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
        this->len = 0;
    };
    ~Stack()
    {
        delete[] arr;
    }

    // 1  push
    void push(int element)
    {
        if (this->top == size - 1)
        {
            cout << endl
                 << "--------------------------------------------------" << endl;
            cout << "stack is overflow";
            cout << endl
                 << "--------------------------------------------------" << endl;
        }
        else
        {
            top++;
            arr[top] = element;
            len++;
        }
    };

    // 2  pop
    void pop()
    {
        if (this->top == -1)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            top--;
        }
    }

    // 3 display
    void display()
    {
        for (int i = this->top; i >= 0; i--)
            cout << arr[i] << " \t";
    }
    // 4  ie Empty
    void isEmpty()
    {
        if (top == -1)
        {
            cout << "IT iS EMPTY" << endl;
        }
        else
        {
            cout << "IT iS NOT EMPTY" << endl;
        }
    }
    // 5 is full
    void isFull()
    {
        if (this->top == size - 1)
        {
            cout << "IT iS Full" << endl;
        }
        else
        {
            cout << "IT iS NOT Full" << endl;
        }
    }
    // 6 top
      void topp()
    {
        cout <<"TOP : " <<  arr[this->top] << endl;
    }
};
int main()
{

    int size;
    cout << "Enter stack size : ";
    cin >> size;

    Stack stack(size);

    int choice, element;

    do
    {
        cout << endl
             << "--------------------------------------------------" << endl;
        cout << "0= Exit... " << endl;
        cout << "1= push " << endl;
        cout << "2= pop " << endl;
        cout << "3= display " << endl;
        cout << "4= is Empty " << endl;
        cout << "5= is Full " << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "Enter choice ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Exit................ ";
            break;
        case 1:
            cout << "Enter Element ";
            cin >> element;
            stack.push(element);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.display();
            break;
        case 4:
            stack.isEmpty();
            break;
        case 5:
            stack.isFull();
            break;
             case 6:
            stack.topp();
            break;
        default:
            cout << "Invalid Choice";
            break;
        }

    } while (choice != 0);

    return 0;
}