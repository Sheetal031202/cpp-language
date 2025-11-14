#include <iostream>
using namespace std;

int main()
{

    int size;
    int pass = 1;

    cout << "Enter size : ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << " :  ";
        cin >> arr[i];
    }

    cout<<endl << "Actual array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }

    while (pass <= size - 1)
    {

        for (int i = 0; i < size ; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int c=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=c;
            }
        }
        pass++;
    }

    cout <<endl<< "Assending  array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}