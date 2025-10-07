#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkesList
{
public:
    Node *Head;
    int count;
    LinkesList()
    {
        this->Head = nullptr;
        this->count = 0;
    }

    // add
    void insertBeggining(int ddata)
    {
        Node *newNode = new Node(ddata);

        newNode->next = this->Head;
        this->Head = newNode;
        this->count++;
    }

    // display
    void display()
    {
        Node *ptr = this->Head;

        while (ptr != nullptr)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }

    // delete
    void remove(int position)
    {
        if (Head == nullptr || count == 0)
        {
            cout << "List empty" << endl;
        }

        Node *prev = this->Head;
        Node *current = this->Head;

        for (int i = 0; i < position; i++)
        {
            current = current->next;
        }
        for (int i = 0; i < position - 1; i++)
        {
            prev = prev->next;
        }

        prev->next = current->next;
        delete current;
        current = nullptr;
        prev = nullptr;
        delete prev;
        this->count--;
    }

    // search
    void search(int position)
    {
        if (Head == nullptr)
        {
            cout << "List is empty..";
            return;
        }

        Node *temp = Head;
        int pos = 0;
        while (temp != nullptr)
        {
            if (temp->data == position)
            {
                cout << "Element " << position << " found at position " << pos << endl;
                return;
            }
            temp = temp->next;
            pos++;
        }

        cout << "Element " << position << " not found in the list." << endl;
    }

    // reverse
    void reverse()
    {
        if (Head == nullptr)
        {
            cout << "List is empty";
            return;
        }

        Node *prev = nullptr;
        Node *current = Head;
        Node *next = nullptr;

        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        Head = prev;
    }
};

int main()
{
    LinkesList l1;
    int choice, data, position;

    do
    {
        cout << endl
             << "---------------------------------------------------------------" << endl;
        cout << "1= insert at start" << endl;
        cout << "2= search" << endl;
        cout << "3= Delete" << endl;
        cout << "4= reverse" << endl;
        cout << "5= display" << endl;
        cout << "0= exit..." << endl;
        cout << "---------------------------------------------------------------" << endl;

        cout << "Enter choice : ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Exit..........";
            break;

        case 1:
            cout << "Enter data : ";
            cin >> data;
            l1.insertBeggining(data);
            break;

        case 2:
            cout << "Enter position to search: ";
            cin >> data;
            l1.search(data);
            break;

        case 3:
            cout << "Enter position : ";
            cin >> position;
            l1.remove(position);
            break;

        case 4:
            l1.reverse();
            break;
        case 5:
            l1.display();
            break;

        default:
            cout << "Invalid choice......";
            break;
        }

    } while (choice != 0);
    return 0;
}