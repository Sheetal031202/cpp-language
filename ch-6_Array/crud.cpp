#include <iostream>
using namespace std;

main()
{
    //  array size input
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter array element " << i << " :";
        cin >> a[i];
    }

    // option input
    int n;

    // clear terminal
    system("cls");
    do
    {
        cout << endl
             << "Enter 1= insert " << endl;
        cout << "Enter 2= push " << endl;
        cout << "Enter 3= fetch " << endl;
        cout << "Enter 4= upadate " << endl;
        cout << "Enter 5= pop " << endl;
        cout << "Enter 6= delete " << endl;
        cout << "Enter 0= exit " << endl;
        cin >> n;
        cout << endl
             << endl;
        switch (n)
        {

        case 1:
            cout << "Insert" << endl
                 << endl;
            //  take input for position and element
            int pos, element;
            cout << "Enter Position :";
            cin >> pos;
            cout << "Enter element :";
            cin >> element;

            if (pos < size && pos >= 0)
            {
                for (int i = size - 1; i < pos; i++)
                {

                    a[i + 1] = a[i];
                }
                a[pos] = element;
                size++;
            }
            break;

        case 2:
            cout << "Push" << endl
                 << endl;
            break;

        case 3:
            cout << "Fetch" << endl
                 << endl;
            for (int i = 0; i < size; i++)
            {
                cout << a[i] << "\t";
            }
            break;
        case 4:
            cout << "Update" << endl
                 << endl;
            break;
        case 5:
            cout << "Pop" << endl
                 << endl;
            break;
        case 6:
            cout << "Delete" << endl
                 << endl;
            break;

        case 0:
            cout << "Exit" << endl
                 << endl;
            break;
        default:
            cout << "Invalide choice" << endl;

            break;
        }
    } while (n != 0);
}