#include <iostream>
#include <vector>
using namespace std;

// Merge
void merge(vector<int> &a, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= end)
    {
        if (a[i] < a[j])
            temp.push_back(a[i++]);
        else
            temp.push_back(a[j++]);
    }

    while (i <= mid)
        temp.push_back(a[i++]);

    while (j <= end)
        temp.push_back(a[j++]);

    for (int k = 0; k < temp.size(); k++)
        a[start + k] = temp[k];
}


void merge_sort(vector<int> &a, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(a, start, mid);
        merge_sort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}

// Selection 
void selection_sort(vector<int> &a)
{
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_index])
                min_index = j;
        }

        int temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;
    }
}

// Binary 
int binary_search(vector<int> &a, int target)
{
    int start = 0, end = a.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (target < a[mid])
            end = mid - 1;
        else if (target > a[mid])
            start = mid + 1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    vector<int> a;
    int choice;
    int n;

    do
    {
        cout << endl<<"---------------MENU ---------------------";
        cout << endl<<"1. Enter Array";
        cout << endl<<"2. Display ";
        cout << endl<<"3. Selection Sort";
        cout << endl<<"4. Merge Sort";
        cout <<endl<< "5. Binary Search";
        cout <<endl<< "6. Exit";

        // choice
        cout <<endl<< "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter size: ";
            cin >> n;
            a.clear();
            a.resize(n);
            for (int i = 0; i < n; i++)
            {
                cout << "Enter element " << i + 1 << ": ";
                cin >> a[i];
            }
            break;

        case 2:
            if (a.empty())
                cout << "Array is empty! Enter data first.";
            else
            {
                cout << "Array: ";
                for (int x : a)
                    cout << x << " ";
            }
            break;

        case 3:
            if (a.empty())
                cout << "Enter array first!";
            else
            {
                selection_sort(a);
                cout << "Array sorted using Selection Sort!";
            }
            break;

        case 4:
            if (a.empty())
                cout << "Enter array first!";
            else
            {
                merge_sort(a, 0, a.size() - 1);
                cout << "Array sorted using Merge Sort!";
            }
            break;

        case 5:
        {
            if (a.empty())
            {
                cout << "Enter array first!";
                break;
            }
            int target;
            cout << "Enter value to search: ";
            cin >> target;

            int index = binary_search(a, target);

            if (index == -1)
                cout << "Element not found!";
            else
                cout << "Element found at index: " << index;
            break;
        }

        case 6:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice!";
        }

    } while (choice != 6);

    return 0;
}
