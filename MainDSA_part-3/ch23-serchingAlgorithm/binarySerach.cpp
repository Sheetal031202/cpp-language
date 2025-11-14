#include <iostream>
using namespace std;

int binary_search(int a[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (target < a[mid])
        {
            end = mid - 1;
        }
        else if (target > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
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

    int target;
    cout<<endl << "Enter target : ";
    cin >> target;

   int index= binary_search(arr, n, target);
     if (index ==-1)
            {
               cout<<endl<<"Element not found "<<endl;
            }
            else{
                cout <<"Index : " <<index<<endl;
            }
    return 0;
}