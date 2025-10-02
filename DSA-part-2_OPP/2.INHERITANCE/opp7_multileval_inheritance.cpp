#include <iostream>
using namespace std;

// multilevel inheritance

class A
{
protected:
    int a;

public:
    void setA()
    {
        cout << "Enter A : ";
        cin >>  this->a;
    }
    void getA()
    {
        cout << "A: " << this->a << endl;
    }
};


class B :public A
{
protected:
    int b;

public:
    void setB()
    {
        cout << "Enter B : ";
        cin >> this-> b;
    }
    void getB()
    {
        cout << "B: " <<  this->b << endl;
    }
};

class C:public B
{
protected:
    int c;

public:
    void setC()
    {
        cout << "Enter C : ";
        cin >>  this->c;
    }
    void getC()
    {
        cout << "C : " <<  this->c << endl;
        cout << "SUM : "<< a+b+c;
    }
};
int main()
{


    // last child no object banavano


    C c1;
    c1.setA();
    c1.setB();
    c1.setC();

    c1.getA();
    c1.getB();
    c1.getC();


    

    return 0;
}