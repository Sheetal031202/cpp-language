#include <iostream>
using namespace std;

class Food
{
    int cafe_id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    // Default constructor (needed for array)
    Food() {}

    // Parameterized constructor
    Food(int cafe_id,
         string cafe_name,
         string cafe_type,
         int cafe_rating,
         string cafe_location,
         int cafe_establish_year,
         int cafe_staff_quantity)
    {
        this->cafe_id = cafe_id;
        this->cafe_name = cafe_name;
        this->cafe_type = cafe_type;
        this->cafe_rating = cafe_rating;
        this->cafe_location = cafe_location;
        this->cafe_establish_year = cafe_establish_year;
        this->cafe_staff_quantity = cafe_staff_quantity;
    }

    // Display function
    void getData()
    {
        cout << "ID\t\t: " << cafe_id << endl;
        cout << "NAME\t\t: " << cafe_name << endl;
        cout << "TYPE\t\t: " << cafe_type << endl;
        cout << "RATING\t\t: " << cafe_rating << endl;
        cout << "LOCATION\t\t: " << cafe_location << endl;
        cout << "YEAR\t\t: " << cafe_establish_year << endl;
        cout << "QUANTITY\t\t: " << cafe_staff_quantity << endl;
    }
};

int main()
{
    int numberOfFood;
    cout << "Enter NUMBER of cafes : ";
    cin >> numberOfFood;

    Food c[numberOfFood]; 

    for (int i = 0; i < numberOfFood; i++)
    {
        int id, rating, year, quantity;
        string name, type, location;

        cout << "\nEnter details of Cafe " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Type: ";
        cin >> type;
        cout << "Rating: ";
        cin >> rating;
        cout << "Location: ";
        cin >> location;
        cout << "Establish Year: ";
        cin >> year;
        cout << "Staff Quantity: ";
        cin >> quantity;

        c[i] = Food(id, name, type, rating, location, year, quantity);
    }

    cout<< endl << " Cafe output"<<endl;
    for (int i = 0; i < numberOfFood; i++)
    {
        c[i].getData();
    }

    return 0;
}
