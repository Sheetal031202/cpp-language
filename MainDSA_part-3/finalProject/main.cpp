#include <iostream>
using namespace std;

// linked list
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

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }

// insert at start
    void insertAtStart(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

// insert at end
    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

// insert anywhere
    void insertAtPosition(int data, int position)
    {
        if (position == 1)
        {
            insertAtStart(data);
            return;
        }

        Node *newNode = new Node(data);
        Node *temp = head;
        int count = 1;

        while (temp != nullptr && count < position - 1)
        {
            temp = temp->next;
            count++;
        }

        if (temp == nullptr)
        {
            cout << "Position  is not valid\n";
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

// displayy
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " :";
            temp = temp->next;
        }
        cout << "NULL"<<endl;
    }

    // merge
    Node* merge(Node* left, Node* right)
    {
      
        if (left->data < right->data)
        {
            left->next = merge(left->next, right);
            return left;
        }
        else
        {
            right->next = merge(left, right->next);
            return right;
        }
    }

    Node* findMid(Node* head)
    {
        Node* slow = head;
        Node* fast = head->next;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node* mergeSort(Node* head)
    {
        if (head == nullptr || head->next == nullptr) return head;

        Node* mid = findMid(head);
        Node* rightHead = mid->next;
        mid->next = nullptr;

        Node* left = mergeSort(head);
        Node* right = mergeSort(rightHead);

        return merge(left, right);
    }

    void applyMergeSort()
    {
        head = mergeSort(head);
    }

    // quick sortt

    Node* partition(Node* start, Node* end)
    {
        int pivot = end->data;
        Node* pIndex = start;
        Node* temp = start;

        while (temp != end)
        {
            if (temp->data < pivot)
            {
                swap(temp->data, pIndex->data);
                pIndex = pIndex->next;
            }
            temp = temp->next;
        }

        swap(pIndex->data, end->data);
        return pIndex;
    }

    void quickSort(Node* start, Node* end)
    {
        if (start == nullptr || start == end || end == nullptr)
            return;

        Node* pivot = partition(start, end);

        
        Node* temp = start;
        while (temp->next != pivot)
            temp = temp->next;

        quickSort(start, temp);
        quickSort(pivot->next, end);
    }

    void applyQuickSort()
    {
        Node* temp = head;
        if (!temp) return;

        while (temp->next != nullptr)
            temp = temp->next;

        quickSort(head, temp);
    }

    // binary

    Node* middle(Node* start, Node* end)
    {

        Node* slow = start;
        Node* fast = start;

        while (fast != end && fast->next != end)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    bool binarySearch(int key)
    {
        Node* start = head;
        Node* end = nullptr;

        while (start != end)
        {
            Node* mid = middle(start, end);


            if (mid->data == key)
                return true;
            else if (mid->data < key)
                start = mid->next;
            else
                end = mid;
        }

        return false;
    }
};



int main()
{
    LinkedList list;
    int choice, value, pos;

    do
    {
        cout<<endl << " MENU"<<endl;
        cout << "1. Insert at Start"<<endl;
        cout << "2. Insert at End"<<endl;
        cout << "3. Insert at Position"<<endl;
        cout << "4. Display"<<endl;
        cout << "5. Merge Sort"<<endl;
        cout << "6. Quick Sort"<<endl;
        cout << "7. Binary Search"<<endl;
        cout << "8. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtStart(value);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtEnd(value);
            break;

        case 3:
            cout << "Enter value: ";
            cin >> value;
            cout << "Enter position: ";
            cin >> pos;
            list.insertAtPosition(value, pos);
            break;

        case 4:
            cout << "Linked List: ";
            list.display();
            break;

        case 5:
            list.applyMergeSort();
            cout << "Merge Sort Applied"<<endl;
            break;

        case 6:
            list.applyQuickSort();
            cout << "Quick Sort Applied"<<endl;
            break;

        case 7:
            cout << "Enter value to search: ";
            cin >> value;

            if (list.binarySearch(value))
                cout << "available"<<endl;
            else
                cout << "not avilable"<<endl;
            break;

        case 8:
            cout << "Exiting..."<<endl;
            break;

        default:
            cout << "Invalid choice///"<<endl;
        }

    } while (choice != 8);

    return 0;
}
