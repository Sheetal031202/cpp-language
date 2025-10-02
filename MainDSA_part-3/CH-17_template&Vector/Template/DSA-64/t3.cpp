#include <iostream>
using namespace std;

template <typename T>
class Collection
{
private:
    int size;
    T *arr;
    int index; // next available position

public:
    // Constructor
    Collection(int size)
    {
        this->size = size;
        arr = new T[size];
        index = 0; // initialize
    }

    // Destructor
    ~Collection()
    {
        delete[] arr;
        arr = nullptr;
    }

    // Insert at a specific index
    void insertCollection(int index, T value)
    {
        if (index >= 0 && index < this->size)
        {
            arr[index] = value;
        }
        else
        {
            cout << "Invalid index!" << endl;
        }
    }

    // Display elements
    void fetchCollection()
    {
        for (int i = 0; i < this->size; i++)
        {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }

    // Push (like in a stack / dynamic array)
    void push(T value)
    {
        if (index >= 0 && index < this->size)
        {
            arr[index] = value;
            index++;
        }
        else
        {
            cout << "Collection is full!" << endl;
        }
    }
};

int main()
{
    Collection<int> c1(3);

    // Using push
    c1.push(10);
    c1.push(20);
    c1.push(30);
    c1.push(40); // this will say "Collection is full!"

    c1.fetchCollection();

    // Using insert
    Collection<char> c2(3);
    c2.insertCollection(0, 'A');
    c2.insertCollection(1, 'B');
    c2.insertCollection(2, 'C');
    c2.fetchCollection();

    return 0;
}
