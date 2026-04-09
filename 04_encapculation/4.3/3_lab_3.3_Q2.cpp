
#include <iostream>
using namespace std;

class Cafe
{

private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    Cafe()
    {

        cafe_id = 0;
        cafe_name = "no set";
        cafe_type = "no set";
        cafe_rating = 0;
        cafe_location = "no set";
        cafe_establish_year = 0;
        cafe_staff_quantity = 0;
    }

    void SetCafe()
    {

        cout << "\n===== Cafe Detail =====" << endl;
        cout << "Enter cafe id:" << endl;
        cin >> cafe_id;
        cin.ignore();

        cout << "Enter cafe name" << endl;
        getline(cin, cafe_name);

        cout << "Enter cafe type" << endl;
        getline(cin, cafe_type);

        cout << "Enter cafe rating:" << endl;
        cin >> cafe_rating;
        cin.ignore();

        cout << "Enter cafe location" << endl;
        getline(cin, cafe_location);

        cout << "Enter cafe establish year:" << endl;
        cin >> cafe_establish_year;
        cin.ignore();

        cout << "Enter cafe staff quantity:" << endl;
        cin >> cafe_staff_quantity;
        cin.ignore();
    }

    void GetCafe()
    {

        cout << "\n===== Cafe Detail =====" << endl;
        cout << "Cafe ID               :" << cafe_id << endl;

        cout << "Cafe Name             :" << cafe_name << endl;

        cout << "Cafe Type             :" << cafe_type << endl;

        cout << "Cafe Rating           :" << cafe_rating << endl;

        cout << "Cafe Location         :" << cafe_location << endl;

        cout << "Cafe Establish Year   :" << cafe_establish_year << endl;

        cout << "Cafe Staff Quantity   :" << cafe_staff_quantity << endl;
    }

    ~Cafe()
    {
        // cout << "Object Destroyed\n";
    }
};

int main()
{

    int n;

    cout << "Enter cafe number" << endl;

    cin >> n;
    cin.ignore();

    Cafe c[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter cafe " << i + 1 << endl;
        c[i].SetCafe();
    }

    for (int i = 0; i < n; i++)
    {
        c[i].GetCafe();
    }

    return 0;
}
