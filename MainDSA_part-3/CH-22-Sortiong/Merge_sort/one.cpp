#include <iostream>
#include <vector>
using namespace std;

// Merge two sorted halves
void merge(vector<int> &a, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;

    vector<int> temp;

    while (i <= mid && j <= end)
    {
        if (a[i] < a[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(a[j]);
            j++;
        }
    }

    // Copy remaining elements
    while (i <= mid)
    {
        temp.push_back(a[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(a[j]);
        j++;
    }

    // Copy sorted temp back into main array
    for (int i = 0; i < temp.size(); i++)
    {
        a[start + i] = temp[i];
    }
}

// Recursive merge sort
void merge_sort(vector<int> &a, int start, int end)
{
    if (start < end) // ✅ fixed condition
    {
        int mid = (start + end) / 2;

        merge_sort(a, start, mid);
        merge_sort(a, mid + 1, end);
        merge(a, start, mid, end);
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
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\t";
    }

    merge_sort(a, 0, n - 1); // ✅ function call

    cout << "\nAscending array : ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\t";
    }

    cout << endl;
    return 0;
}
