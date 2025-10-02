#include <iostream>
using namespace std;

class Company
{
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    float comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    Company() {}

    Company(int comp_id, string comp_name, int comp_staff_quantity,
            float comp_revenue, int comp_import_raw_diamonds,
            int comp_export_diamonds, string comp_ceo)
    {
        this->comp_id = comp_id;
        this->comp_name = comp_name;
        this->comp_staff_quantity = comp_staff_quantity;
        this->comp_revenue = comp_revenue;
        this->comp_import_raw_diamonds = comp_import_raw_diamonds;
        this->comp_export_diamonds = comp_export_diamonds;
        this->comp_ceo = comp_ceo;
    }

    // Display function
    void getData()
    {
        cout << "ID \t\t: " << comp_id << endl;
        cout << "NAME\t\t: " << comp_name << endl;
        cout << "STAFF MEMBERS\t\t: " << comp_staff_quantity << endl;
        cout << "REVENUE\t\t: " << comp_revenue << endl;
        cout << "IMPORT\t\t: " << comp_import_raw_diamonds << endl;
        cout << "EXPORT\t\t: " << comp_export_diamonds << endl;
        cout << "CEO\t\t: " << comp_ceo << endl;
    }
};

int main()
{
    int numberOfCompany;
    cout << "Enter NUMBER of companies : ";
    cin >> numberOfCompany;

    Company c[numberOfCompany]; 

    for (int i = 0; i < numberOfCompany; i++)
    {
        int id, staff, importD, exportD;
        float revenue;
        string name, ceo;

        cout << endl<< "Enter details of company " << i + 1 << endl;
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Staff Quantity: ";
        cin >> staff;
        cout << "Revenue: ";
        cin >> revenue;
        cout << "Import Raw Diamonds: ";
        cin >> importD;
        cout << "Export Diamonds: ";
        cin >> exportD;
        cout << "CEO: ";
        cin >> ceo;

        // Assign values using parameterized constructor
        c[i] = Company(id, name, staff, revenue, importD, exportD, ceo);
    }

    cout << endl<< "Company Output" <<endl;
    for (int i = 0; i < numberOfCompany; i++)
    {
        c[i].getData();
    }

    return 0;
}
