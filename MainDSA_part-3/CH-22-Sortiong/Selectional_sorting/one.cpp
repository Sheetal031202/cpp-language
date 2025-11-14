#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter size : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << i + 1 << " :  ";
        cin >> arr[i];
    }

    cout << endl
         << "Actual array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    //    logic

    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        int swap = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = swap;
    }

    cout << endl
         << "Assending  array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}