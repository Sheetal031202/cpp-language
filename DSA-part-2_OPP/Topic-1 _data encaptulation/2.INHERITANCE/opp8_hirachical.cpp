// #include <iostream>
// using namespace std;

// class RBI
// {
// protected:
//     double rate;

//     RBI()
//     {
//         rate = 8.9;
//     }
// };

// class SBI : public RBI
// {
// private:
//     double totalAmt;

// public:
//     void setamt()
//     {
//         cout << "ENter sbi amount :";
//         cin >> this->totalAmt;
//     }
//     void getamt()
//     {
//         cout << " amount sbi :" <<  this->totalAmt*this->rate/100;
//     }
// };

// class ICICI : public RBI
// {
// private:
//     double totalAmt;

// public:
//     void setamt()
//     {
//         cout << "ENter  icici amount :";
//         cin >> this->totalAmt;
//     }
//     void getamt()
//     {
//         cout << " amount ICICI :" << this->totalAmt*this->rate/100;
//     }
// };

// class HDFC : public RBI
// {
// private:
//     double totalAmt;

// public:
//     void setamt()
//     {
//         cout << "ENter hdfc amount :";
//         cin >> this->totalAmt;
//     }
//     void getamt()
//     {
//         cout << " amount HDFC :" <<  this->totalAmt*this->rate/100;
//     }
// };

// // main

// int main()
// {

//     // child is 3 so 3 object

//     SBI s1;
//     ICICI i1;
//     HDFC h1;

//     s1.setamt();
//     i1.setamt();
//     h1.setamt();

//     s1.getamt();
//     i1.getamt();
//     h1.getamt();
//     return 0;
// }

// 0r----------------------------------------------------------

#include <iostream>
using namespace std;

class RBI
{
protected:
    double rate;

    RBI()
    {
        rate = 8.9;
    }
    void final(double totalAmy, string bankname)
    {
        double f=totalAmy*rate/100;
        cout<< endl<< "amt " <<f<< endl;
    }
};

class SBI : public RBI
{
private:
    double totalAmt;

public:
    void setamt()
    {
        cout << "ENter sbi amount :";
        cin >> this->totalAmt;
            final(this->totalAmt,"SBI");

    }
    
};

class ICICI : public RBI
{
private:
    double totalAmt;

public:
    void setamt()
    {
        cout << "ENter  icici amount :";
        cin >> this->totalAmt;
            final(this->totalAmt,"ICICI");

    }
};

class HDFC : public RBI
{
private:
    double totalAmt;

public:
    void setamt()
    {
        cout << "ENter hdfc amount :";
        cin >> this->totalAmt;
            final(this->totalAmt,"HDFC");

    }
};

// main

int main()
{

    // child is 3 so 3 object

    SBI s1;
    ICICI i1;
    HDFC h1;

    s1.setamt();
    i1.setamt();
    h1.setamt();

    
    return 0;
}