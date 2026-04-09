#include<iostream>
using namespace std;

class Customer
{
    private:

    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    int cust_mobile_number;
    int cust_simcard_validity;
    string cust_telecom_brand_name;

    public:

    void getcustomer()
    {
        cout << "Customer Id :\n" << cust_id << endl;
        cout << "Customer Name :\n" << cust_name << endl;
        cout << "Customer Age :\n" << cust_age << endl;
        cout << "Customer City :\n" << cust_city << endl;
        cout << "Customer Mobile Number :\n" << cust_mobile_number << endl;
        cout << "Customer Simcard Validity :\n" << cust_simcard_validity << endl;
        cout << "Customer Telecom Brand Name :\n" << cust_telecom_brand_name << endl;

    }

    void setcustomer()
    {
        cout << "Enter Customer Id :\n";
        cin >> cust_id;
        cin.ignore();
       
        cout << "Enter Customer Name :\n";
        cin >> cust_name;
        getline(cin, cust_name);

        cout << "Enter Customer age :\n";
        cin >> cust_age;
        cin.ignore();

        cout << "Enter Customer City :\n";
        cin >> cust_city;
        getline(cin, cust_city);

        cout << "Enter Customer Mobile Number :\n";
        cin >> cust_mobile_number;
        cin.ignore();

        cout << "Enter Customer Simcard Validity :\n";
        cin >> cust_simcard_validity;
        cin.ignore();

        cout << "Enter Customer Telecom Brand Name :\n";
        cin >> cust_telecom_brand_name;
        getline(cin, cust_telecom_brand_name);

    }





};

int main()
{

    Customer c[5];
    for(int i = 0; i < 5; i++){

        cout << "Enter details of Customer " << i + 1 << ":\n";
        c[i].setcustomer();

    }

    for(int i = 0; i < 5; i++){

        cout << "Details of Customer " << i + 1 << ":\n";
        c[i].getcustomer();

    }




    return 0;
}



