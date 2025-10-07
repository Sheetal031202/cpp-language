#include <iostream>
using namespace std;

// 1 node no class banavano
class Node
{
public:
    int data;
    Node *next;

    // 5
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

// 2 niche bov badha object banava pade eni badle aya j class banavi levanu
class LinkesList
{
public:
    Node *Head;
    // ketla node chhe e count karva count variable ,length mate..but aama koi built in function nathi aavta vector ni jem etle jate karvu padse
    int count;
    LinkesList()
    {
        // start ma to null j hase dagling pointer na bane etle
        this->Head = nullptr;
        this->count = 0;
    }

    //  5 insert begging
    void insertBeggining(int ddata)
    {

        // step 1 create new node,
        Node *newNode = new Node(ddata); // aaya aa Node name nu class parameterise constuctoor chhhe

        // step 2: link up that node to HEAD node;
        newNode->next = this->Head;
        // step 3 :point head to new node
        this->Head = newNode;
        this->count++;
    }

    // isert at end
    void insertEnding(int ddata)
    {
        // step 1: create node;
        Node *newNode = new Node(ddata); // aaya aa Node name nu class parameterise constuctoor chhhe

        // step 2 create new ptr for traversing whole list
        if (this->Head == nullptr || this->count == 0)
        {
            newNode->next = this->Head;
            this->Head = newNode;
        }
        else
        {
            Node *ptr = this->Head;
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        this->count++;
    }

    // insert at any position
    void insertPosition(int ddata, int position)
    {
        // step 1 create node
        Node *newNode = new Node(ddata); // aaya aa Node name nu class parameterise constuctoor chhhe
        if (this->Head == nullptr || this->count == 0)
        {
            newNode->next = this->Head;
            this->Head = newNode;
        }
        else
        {
            if (position>0 && position<count)
            {
                // step 2 create new ptr for traversing whole list
                Node *ptr = this->Head;

                // step 3 traversing whole list till specific position
                for (int i = 0; i < position - 1; i++)
                {
                    ptr = ptr->next;
                }

                // step 4 update links
                newNode->next = ptr->next;
                ptr->next = newNode;
            }
            else
            {
cout <<"Invalid position";
            }
        }
        this->count++;
    }

    // display
    void displayALlNodes()
    {
        // step 1:create new pointer step 2:pointing ptr to first node
        Node *ptr = this->Head;

        // step 3 loop
        while (ptr != nullptr)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
};

int main()
{
    // 3 linked list na class no object banavano
    LinkesList l1;
    int choice, data, position;

    // 4 basic menu
    do
    {
        cout << "---------------------------------------------------------------" << endl;
        cout << "1= insert at start" << endl;
        cout << "2= insert at end" << endl;
        cout << "3= insert at any point" << endl;
        cout << "4= for display" << endl;
        cout << "0= exit..." << endl;
        cout << "---------------------------------------------------------------" << endl;

        cout << "Enter choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter data : ";
            cin >> data;
            l1.insertBeggining(data);
            break;

        case 2:
            cout << "Enter data : ";
            cin >> data;
            l1.insertEnding(data);
            break;

        case 3:
            cout << "Enter data : ";
            cin >> data;
            cout << "Enter position : ";
            cin >> position;
            l1.insertPosition(data, position);
            break;

        case 4:
            cout << "Enter All Nodes : " << endl;

            l1.displayALlNodes();
            cout << endl;
            break;
        default:
            break;
        }

    } while (choice != 0);
    return 0;
}