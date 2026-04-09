

#include <iostream>
using namespace std;

class Companies
{

private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    Companies(int id, string name, int staff_quantity, double revenue, int import_raw_diamonds, int export_diamonds, string ceo)
    {

        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff_quantity;
        comp_revenue = revenue;
        comp_import_raw_diamonds = import_raw_diamonds;
        comp_export_diamonds = export_diamonds;
        comp_ceo = ceo;
    }

    void Display()
    {
        cout << "========== Companies Detail ===========" << endl;

        cout << "Companies ID                  :" << comp_id << endl;
        cout << "Companies Name                :" << comp_name << endl;
        cout << "Companies Staff Quantity      :" << comp_staff_quantity << endl;
        cout << "Companies Revenue             :" << comp_revenue << endl;
        cout << "Companies Import Raw Diamonds :" << comp_import_raw_diamonds << endl;
        cout << "Companies Export Diamonds     :" << comp_export_diamonds << endl;
        cout << "Companies Ceo                 :" << comp_ceo << endl;
    }

    ~Companies()
    {
        cout << "company object\n";
    }
};

int main()
{

    cout << "Enter Companies Details:";

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        int id, staff_quantity, import_raw_diamonds, export_diamonds;
        string name, ceo;
        double revenue;

        cout << "Companies " << i + 1 << " detail" << endl;
        cout << "Enter Companies ID:" << endl;
        cin >> id;
        cin.ignore();

        cout << "Enter  Companies Name:" << endl;
        getline(cin, name);

        cout << "Enter Companies Staff Quantity:" << endl;
        cin >> staff_quantity;
        cin.ignore();

        cout << "Enter Companies Revenue:" << endl;
        cin >> revenue;
        cin.ignore();

        cout << "Enter Companies Import Raw Diamonds:" << endl;
        cin >> import_raw_diamonds;
        cin.ignore();

        cout << "Enter Companies Export Diamonds:" << endl;
        cin >> export_diamonds;
        cin.ignore();

        cout << "Enter Companies Ceo:" << endl;
        getline(cin, ceo);

        Companies object(id, name, staff_quantity, revenue, import_raw_diamonds, export_diamonds, ceo);

        object.Display();
    }

    return 0;
}