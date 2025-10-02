#include <iostream>
using namespace std;
// dsa 62
// dma with oop
class DMA
{
private:
    int size;
    int *arr;

public:
    // constuctor
    DMA(int size)
    {
        this->size = size;
        // array ne aalocate karyu
        arr = new int(size);
        if (arr != nullptr)
        {
            cout << "alocate success" << endl;
        }
    }

    // 1...
    bool indexCheck(int index)
    {
        // if (index >= 0 && index < size)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        // or we use ternary
    }

    //  2.. insert
    void insert(int index, int value)
    {
        if(this->indexCheck(index)){
            arr[index]=value;
        }
        else{
            cout << "Wrong inxed";
        }
    }

    // 3...
    void getValue(int index)
    {
        if (index >= 0 && index < size)
        {
            cout << arr[index];
        }
    }
    ~DMA()
    {
        delete[] arr;
        arr = nullptr;
        if (arr == nullptr)
        {
            cout << "delocate success" << endl;
        }
    }
};

int main()
{
    DMA d1(3);
    d1.insert(1, 1010);
    d1.getValue(1);
    return 0;
}