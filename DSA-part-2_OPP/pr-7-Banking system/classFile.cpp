#include <iostream>
using namespace std;

// base class
//
class BankAc
{
public:
    long long int accountNumber;
    char accountHolderName[30];
    double balance;
    double depositeAmt;
    double withAmt;
    double totalBal;

    void BankAcc()
    {
        cout << "Enter account Number: ";
        cin >> this->accountNumber;
        fflush(stdin);
        cout << "Enter account holder name: ";
        cin >> this->accountHolderName;
        cout << "Enter account Balace: ";
        cin >> this->balance;
    }
    void infoBankAc()
    {
        cout << endl
             << "|--------------------------- your Account Details --------------------------------------------------------------|" << endl;
        cout << "|Account No:\t\t\t\t: " << accountNumber << endl;
        cout << "|Ac Name:\t\t\t\t: " << accountHolderName << endl;
        cout << "|Balance: \t\t\t\t:" << balance << endl;
        cout << "|----------------------------------------------------------------------------------------------------------------|" << endl;
    }
    // deposite amt and  total of deposite  amt

    void dAmt()
    {
        cout << " Enter your deposite amount : ";
        cin >> this->depositeAmt;
        totalBal = this->balance + this->depositeAmt;
        cout << "Your total balance is : " << totalBal << endl;
    }

    // withdraw
    void withdrawAmt()
    {

        cout << " Enter your withdraw amount : ";
        cin >> this->withAmt;
        if (balance < withAmt)
        {
            cout << "soryy.. you dont have efficient amount to withdraw as per your requirement";
        }
        else
        {
            totalBal = this->balance - this->withAmt;
            cout << "Your total balance is : " << totalBal << endl;
        }
    };

    // balance
    void bal()
    {
        cout << "currant balance : " << this->totalBal;
    }
};
// select option
void selectService()
{
    cout << " Press 0= exit" << endl;
    cout << " Press 1 = Deposite Amount" << endl;
    cout << " Press 2 = Withdraw amount" << endl;
    cout << " Press 3 = get balance" << endl;
    cout << " Press 4 =display account info " << endl;
    cout << " Press 5 = Calculate interest " << endl;
    cout << " Press 6= for overdrafat limit " << endl;
    cout << " Press 7 = for fixed deposite " << endl;
}

// 2nd  saning ac interest
class SavingInterest : public BankAc
{
private:
    double interest;

public:
    void calculateInt()
    {
        interest = (totalBal * 7.0) / 100.0;
        cout << "Your yearly interest is : " << interest << endl;
    }
};

// overdraft
class Overdraft : public BankAc
{
private:
    double overdraft;

public:
    void od()
    {
        cout << "Your Balance is " << totalBal << ", you will get " << totalBal / 2 << "as overdraft";
    }
};

// fixed deposite
class Fixed : public BankAc
{
private:
    int term, rate = 8, fdAmt;

public:
    void fd()
    {
        cout << "Enter amount to be deposited: ";
        cin >> this->fdAmt;
        cout << "Enter Number of months: ";
        cin >> this->term;

        if (fdAmt > totalBal && fdAmt < 10000)
        {
            cout << "You cant add amt less than 10,000 or more than your current balance";
        }
     
         else if (term<1)
        {
            cout << "You have to book fd more than 1 month";
        }
           else{
            cout << "Fd  booked successfully................"<<endl;
            cout << " interest you get is: "<< rate*this->fdAmt/100<<endl;
            cout << " total amt you get is: "<< this->fdAmt+(rate*fdAmt/100)<<endl;
        }

    }
};