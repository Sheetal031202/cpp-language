#include <iostream>
#include <vector>
using namespace std;

int quickPartition(vector<int> &a, int start, int end)
{
    int pivot = a[end];
    int i = start - 1;

    for (int j = start; j < end; j++) // ✅ fixed condition
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[end]);
    return i + 1;
}

void quickSort(vector<int> &a, int start, int end)
{
    if (start < end)
    {
        int pivotIndex = quickPartition(a, start, end);
        quickSort(a, start, pivotIndex - 1);
        quickSort(a, pivotIndex + 1, end);
    }
}

int main()
{
    int n;
    vector<int> a;

    cout << "Enter size : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter Element " << i + 1 << " : ";
        cin >> element;
        a.push_back(element);
    }

    cout << "\nActual array : ";
    for (int val : a)
        cout << val << "\t";

    quickSort(a, 0, n - 1);

    cout << "\nAscending array : ";
    for (int val : a)
        cout << val << "\t";

    cout << endl;
    return 0;
}
