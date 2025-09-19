#include <iostream>
#include "classFile.cpp"
using namespace std;

int main()
{
    //  bank account and take initial info
    BankAc b1;
    b1.BankAcc();
    SavingInterest s1;
    Overdraft o1;
    Fixed f1;
    int choice;
    while (true)
    {
        system("cls");
        selectService();

        cout << endl
             << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "\nExit successfully.\n";
            return 0;

            // deposit amount
        case 1:
            b1.dAmt();
            break;

            // with draw
        case 2:
            b1.withdrawAmt();
            break;

            // showing balance
        case 3:
            b1.bal();
            break;

            // showing infromation regarding bank
        case 4:
            b1.infoBankAc();
            break;

        // interest
        case 5:
            s1.calculateInt();
            break;

            // overdraft
        case 6:
            o1.od();
            break;

            // fd
        case 7:
            f1.fd();
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

        cout << "\nPress any key to continue...";
        cin.ignore();
        cin.get(); // wait for user input before showing menu again
    }

    return 0;
}
