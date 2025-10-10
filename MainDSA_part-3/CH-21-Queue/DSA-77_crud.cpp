#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int front;
    int rear;
    int count;
    int capacity;

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        this->arr = new int[capacity];
        this->front = -1;
        this->rear = -1;
        this->count = 0;
    }

    ~Queue()
    {
        delete[] arr;
    }

    // add
    void enqueue(int element)
    {
        if (this->rear == this->capacity - 1)
        {
            cout << "Queue overflow" << endl;
        }
        else if (this->rear == -1 && this->front == -1)
        {
            this->front = 0;
            this->rear = 0;
            this->arr[rear] = element;
            this->count++;
        }
        else
        {
            this->rear++;
            this->arr[rear] = element;
            this->count++;
        }
    }

    // delete
    void dequeue()



    {
        if (this->rear == -1 && this->front == -1)
        {
            cout << "Queue underflow" << endl;
        }
        else if (this->rear == this->front)
        {
            cout << "Deleted element: " << this->arr[this->front] << endl;
            this->front = -1;
            this->rear = -1;
            this->count--;
        }
        else
        {
            cout << "Deleted element: " << this->arr[this->front] << endl;
            this->front++;
            this->count--;
        }
    }

    // front
    void ffront()
    {
        if (this->rear == -1 && this->front == -1)
        {
            cout << "Queue underflow" << endl;
        }
        else
        {
            cout << "Front : " << this->arr[this->front] << endl;
        }
    }

    // end
    void rrear()
    {
        if (this->rear == -1 && this->front == -1)
        {
            cout << "Queue empty" << endl;
        }
        else
        {
            cout << "Rear : " << this->arr[this->rear] << endl;
        }
    }

    // empty
    void empty()
    {
        if (this->rear == -1 && this->front == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Queue is not empty" << endl;
        }
    }

    // display
    void display()
    {
        if (this->rear == -1 && this->front == -1)
        {
            cout << "Queue empty" << endl;
        }
        else
        {
            cout << "Queue elements: ";
            for (int i = this->front; i <= this->rear; i++)
                cout << this->arr[i] << " ";
            cout << endl;
        }
    }

    // full
    void full()
    {
        if (this->rear == this->capacity - 1)
        {
            cout << "Queue full" << endl;
        }
        else
        {
            cout << "Queue is not full" << endl;
        }
    }

    // size
    void size()
    {
        cout << "Size : " << count << endl;
    }
};

int main()
{
    int size, choice, element;

    cout << "Enter size : ";
    cin >> size;

    Queue queue(size);

    do
    {
        cout << "\n1 = add enqueue" << endl;
        cout << "2 = remove dequeue" << endl;
        cout << "3 = front" << endl;
        cout << "4 = rear" << endl;
        cout << "5 = display" << endl;
        cout << "6 = empty" << endl;
        cout << "7 = full" << endl;
        cout << "8 = size" << endl;
        cout << "9 = exit.......... " << endl;

        cout << "Enter choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element : ";
            cin >> element;
            queue.enqueue(element);
            break;

        case 2:
            queue.dequeue();
            break;

        case 3:
            queue.ffront();
            break;

        case 4:
            queue.rrear();
            break;

        case 5:
            queue.display();
            break;

        case 6:
            queue.empty();
            break;

        case 7:
            queue.full();
            break;

        case 8:
            queue.size();
            break;

        case 9:
            cout << "Exit...." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
        }

    } while (choice != 9);

    return 0;
}
