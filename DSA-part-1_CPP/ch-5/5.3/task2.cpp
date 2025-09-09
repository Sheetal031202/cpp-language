#include <iostream>
using namespace std;
main()
{

    cout << "Press 1 for English" << endl;
    cout << "Press 2 for Hindi" << endl;
    cout << "Press 3 for Gujarati" << endl;

    int choice;
    cout << endl
         << "Enter your choice: ";
    cin >> choice;
    int rec;
    switch (choice)
    {
    case 1:
    {
        cout << "Press 1 for Internet Recharge" << endl;
        cout << "Press 2 for Top-up Recharge" << endl;
        cout << "Press 3 for Special Recharge" << endl;
        cout << endl
             << "Enter your choice: ";
        cin >> rec;
        switch (rec)
        {
        case 1:
            cout << endl
                 << "You have successfully done a Top-up Recharge." << endl;
            break;
        case 2:
            cout << "You have successfully done a Top-up Recharge." << endl;
            break;
        case 3:
            cout << "You have successfully done a Top-up Recharge." << endl;
            break;
        default:
            cout << "Invalid choice......" << endl;
            break;
        }
    }
    break;

    case 2:
    {
        cout << "Internet Recharge ke liye 1 dabaiye" << endl;
        cout << "Top-up Recharge ke liye 2 dabaiye" << endl;
        cout << "Special Recharge ke liye 3 dabaiye" << endl;
        cout << endl
             << "Enter your choice: ";
        cin >> rec;
        switch (rec)
        {
        case 1:
            cout << endl
                 << "Aapne safaltapurvak Internet Recharge kar liya he." << endl;
            break;
        case 2:
            cout << "Aapne safaltapurvak Internet Recharge kar liya he." << endl;
            break;
        case 3:
            cout << "Aapne safaltapurvak Internet Recharge kar liya he." << endl;
            break;
        default:
            cout << "Invalid choice......" << endl;
            break;
        }
    }
    break;

    case 3:
    {
        cout << "Internet Recharge mate 1 dabavo" << endl;
        cout << "Top-up Recharge mate 2 dabavo" << endl;
        cout << "Special Recharge mate 3 dabavo" << endl;
        cout << endl
             << "Enter your choice: ";
        cin >> rec;
        switch (rec)
        {
        case 1:
            cout << endl
                 << "Tame safaltapurvak Special Recharge karyu chhe." << endl;
            break;
        case 2:
            cout << "Tame safaltapurvak Special Recharge karyu chhe." << endl;
            break;
        case 3:
            cout << "Tame safaltapurvak Special Recharge karyu chhe.." << endl;
            break;
        default:
            cout << "Invalid choice......" << endl;
            break;
        }
    }
    break;
    default:
        cout << "Invalid yu choice......" << endl;
    }
}
