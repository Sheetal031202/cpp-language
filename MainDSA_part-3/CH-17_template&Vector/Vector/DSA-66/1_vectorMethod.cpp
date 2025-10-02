#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> v1;
    // 1..size()= to find length

    // 2..push_back= last ti add kare
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    // 3..pop_back= last ti remove kare
    v1.pop_back();
    cout << "Oush back valu loop ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "\t";
    }
    cout << endl;

    // 4 clear= badha element remove kare
    // v1.clear();

    // 5 empty= aakhu vector empty hase to true(1 )dese nahitar 0(false) dese
    // cout <<v1.empty();

    // 6 front= first element aapse
    cout << "First element : " << v1.front() << endl;

    // 7 back= last element aapse
    cout << "last element : " << v1.back() << endl;

    // 8 for Each loop  ..element ni jagya par koi bhi name chale
    cout << "For Each :\t";
    for (int element : v1)
    {
        cout << element << "\t";
    }

    // 9 begin= it will give memeory address of first element
    // 10 end= it will give memeory address of last element

    // 11 insert(index,element)..cpp ma khabr j nathikeindesx su chhe , so memory adress thi element add thase,memory adress begin & end thi malse
    // v1.insert(v1.begin() + 2, 15010);
    // cout << endl
    //      << "inset valu  begin thi karelu loop :\t";
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1[i] << "\t";
    // }

    // end thi
    // v1.insert(v1.end() - 2, 2020);
    // cout << endl
    //      << "inset valu  end thi karelu loop :\t";
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1[i] << "\t";
    // }

    // 12 earse
    v1.erase(v1.begin() + 1); // to remove only one element
    cout << endl
         << "one element remove :\t";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "\t";
    }

    v1.erase(v1.begin() + 1, v1.begin() + 2); // to  remove 1 thi 3  element
    cout << endl
         << "1 to 3  element remove :\t";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "\t";
    }

    return 0;
}