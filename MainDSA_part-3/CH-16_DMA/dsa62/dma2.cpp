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

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    delete[] arr;
    arr = nullptr;
    if (arr == nullptr)
    {
        cout  << endl<< "dellocatedddddddddd ";
    }
    return 0;
}