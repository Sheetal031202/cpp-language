#include <iostream>
using namespace std;
// dma with pop
// dsa 62
int main()
{
    int size;
    int *arr;
    cout << "Enter Array size : ";
    cin >> size;

    arr = new int[size];
    if (arr == nullptr)
    {
        cout << "Allocated Failed ";
    }
    else
    {
        cout << "Allocated success " << endl;
    }

    delete[] arr;
    arr = nullptr;
    if (arr == nullptr)
    {
        cout << "dellocatedddddddddd ";
    }
    return 0;
}