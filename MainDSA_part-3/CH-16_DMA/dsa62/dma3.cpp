#include <iostream>
using namespace std;
// dsa 62

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

    ~DMA()
    {
        delete[] arr;
        arr = nullptr;
        if (arr == nullptr)
        {
            cout << "delocate success";
        }
    }
};

int main()
{
    DMA d1(3);
    return 0;
}