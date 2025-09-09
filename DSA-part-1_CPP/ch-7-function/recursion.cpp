#include <iostream>
using namespace std;


// normal loop --------------------------------------------------------
// int loop(int start, int end)
// {
//     cout << start << endl;
//     start++;
//     if (start <= end)
//     {
//         loop(start, end);
//     }
// }

// int main()
// {

//     loop(1, 10);

//     return 0;

// }

// factorial program----------------------------------


 int fact(int n){

    if(n<=1){
return 1;
    }
    else{
        return n*fact(n-1);

    }

}
int main(){

fact(5);
    return 0;
}