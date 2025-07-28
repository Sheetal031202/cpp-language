#include<iostream>
using namespace std;
main(){
   char start,end;
   cout<< "enter staring character : ";
   cin >> start;
     cout<< "enter ending character : ";
   cin >> end;
   do{
    cout<< start << "\t";
    start++;
   }while(start<=end);
}