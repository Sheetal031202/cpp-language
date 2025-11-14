#include <iostream>
using namespace std;
// index return karvani che etle int

int search(int a[], int n)
{
    int serchElement;
    cout <<endl<< "Enter serch Element : ";
    cin >> serchElement;

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (serchElement == a[i])
        {
            index = i;
            break;
        }
    }
    return index;
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

    int index=search(arr, n);
 if (index ==-1)
        {
           cout<<endl<<"Element not found "<<endl;
        }
        else{
            cout <<"Index : " <<index<<endl;
        }
    return 0;
}