#include <iostream>
using namespace std;

class S
{
private:
    int *arr;
    int size;
    int top;
    int len;

public:
    S(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
        this->len = 0;
    };
    ~S()
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
            cout << "S is overflow";
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
            cout << "S underflow" << endl;
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
    cout << "Enter S size : ";
    cin >> size;

    S s(size);

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
            s.push(element);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            s.isEmpty();
            break;
        case 5:
            s.isFull();
            break;
             case 6:
            s.topp();
            break;
        default:
            cout << "Invalid Choice";
            break;
        }

    } while (choice != 0);

    return 0;
}