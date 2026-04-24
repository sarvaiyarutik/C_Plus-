#include <iostream>
using namespace std;
class company
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
    company(int id, string name, int staff_quantity, double revenue, int import_raw_diamonds, int export_diamonds, string ceo)
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
        cout << "========== company Detail ===========" << endl;

        cout << "company ID                  :" << comp_id << endl;
        cout << "company Name                :" << comp_name << endl;
        cout << "company Staff Quantity      :" << comp_staff_quantity << endl;
        cout << "company Revenue             :" << comp_revenue << endl;
        cout << "company Import Raw Diamonds :" << comp_import_raw_diamonds << endl;
        cout << "company Export Diamonds     :" << comp_export_diamonds << endl;
        cout << "company Ceo                 :" << comp_ceo << endl;
    }
    ~company()
    {
        cout << "company object\n";
    }
};
int main()
{

    cout << "Enter company Details:";

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        int id, staff_quantity, import_raw_diamonds, export_diamonds;
        string name, ceo;
        double revenue;

        cout << "company " << i + 1 << " detail" << endl;
        cout << "Enter company ID:" << endl;
        cin >> id;
        cin.ignore();

        cout << "Enter  company Name:" << endl;
        getline(cin, name);

        cout << "Enter company Staff Quantity:" << endl;
        cin >> staff_quantity;
        cin.ignore();

        cout << "Enter company Revenue:" << endl;
        cin >> revenue;
        cin.ignore();

        cout << "Enter company Import Raw Diamonds:" << endl;
        cin >> import_raw_diamonds;
        cin.ignore();

        cout << "Enter company Export Diamonds:" << endl;
        cin >> export_diamonds;
        cin.ignore();

        cout << "Enter company Ceo:" << endl;
        getline(cin, ceo);

        company object(id, name, staff_quantity, revenue, import_raw_diamonds, export_diamonds, ceo);

        object.Display();
    }

    return 0;
}