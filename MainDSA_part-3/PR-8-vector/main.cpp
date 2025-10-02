#include <iostream>
using namespace std;
#include <vector>

template <typename T1, typename T2>
class MemoryCalculate
{
private:
    vector<T1> id;
    vector<T2> name;

public:
    void instruction()
    {
        cout << "O = Exit" << endl;
        cout << "1 = To add student" << endl;
        cout << "2 = To display student" << endl;
        cout << "3 = To insert student" << endl;
        cout << "4 = To delete student" << endl;
        cout << "5= To search student" << endl;
    }

    // add
    void add()
    {
        T1 stuid;
        T2 stuname;
        cout << "Enter Student ID: ";
        cin >> stuid;
        cout << "Enter Student Name: ";
        cin >> stuname;

        id.push_back(stuid);
        name.push_back(stuname);

        cout << "Student added ...!" << endl;
    }

    // display
    void display()
    {
        if (id.empty())
        {
            cout << "need to add student first" << endl;
            return;
        }

        cout << endl
             << " Student data " << endl;
                    cout<<"----------------------------------------------------"<<endl;

        for (int i = 0; i < id.size(); i++)
        {
            cout << "ID: " << id[i] << "\tName: " << name[i] << endl;
        }
               cout<<"----------------------------------------------------" <<endl;

    }

    // insert
    void insert(int index)
    {
        if (index < 0 || index > id.size())
        {
            cout << "Invalid index" << endl;
            return;
        }

        T1 stuid;
        T2 stuname;
        cout << "Enter student iD: ";
        cin >> stuid;
        cout << "Enter student name: ";
        cin >> stuname;

        id.insert(id.begin() + index, stuid);
        name.insert(name.begin() + index, stuname);

        cout << "Student added successfully" << endl;
    }

    // remove
    void remove(int index)
    {
        if (index < 0 || index >= id.size())
        {
            cout << "Invalid index" << endl;
            return;
        }

        id.erase(id.begin() + index);
        name.erase(name.begin() + index);

        cout << "student deleted successfully!" << endl;  
             cout<<"----------------------------------------------------";

    }

    // search
     void search(int index)
    {
        if (index < 0 || index >= id.size())
        {
            cout << "Invalid index" << endl;
            return;
        }

       cout<<"----------------------------------------------------"<<endl;
        cout << "Id : "<< id[index] << "Name : " << name[index] << endl;
               cout<<"----------------------------------------------------"<<endl;

    }
};

int main()
{

    MemoryCalculate<int, string> m1;
    int choice, index;

    do
    {

        m1.instruction();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            m1.add();
            break;
        case 2:

            m1.display();
            break;
        case 3:

            cout << "Enter index to add student: ";
            cin >> index;
            m1.insert(index);
            break;
        case 4:

            cout << "Enter index to  delete student: ";
            cin >> index;
            m1.remove(index);
            break;

                    case 5:

            cout << "Enter index to  find student: ";
            cin >> index;
            m1.search(index);
            break;
        case 0:
            cout << "Exit..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }

    } while (choice != 0);

    return 0;
}