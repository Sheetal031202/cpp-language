#include<iostream>
using namespace std;

// single inheritance

class a{
    public:
    int a=10;
}
;
class b:public a{
        public:

    int b=20;

   void  getSUm(){
            cout << "sum : "<< a+b;

    }
};

int main(){

b b1;
b1.getSUm();

    return 0;
}