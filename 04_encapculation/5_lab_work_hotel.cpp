#include <iostream>
using namespace std;

class Hotel
{

private:
    int hotel_id;
    string hotel_name;
    int hotel_type;
    int hotel_rating;
    string hotel_location;
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

    static int HotelCount;

public:
    void SetHotel()
    {

        cout << "Enter Hotel ID : " << endl;
        cin >> hotel_id;
        cin.ignore();

        cout << "Enter Hotel Name: " << endl;
        cin >> hotel_name;
        getline(cin, hotel_name);

        cout << "Enter Hotel Type : " << endl;
        cin >> hotel_type;
        cin.ignore();

        cout << "Enter Hotel Rating : " << endl;
        cin >> hotel_rating;
        cin.ignore();

        cout << "Enter Hotel Location : " << endl;
        cin >> hotel_location;
        getline(cin, hotel_location);

        cout << "Enter Hotel Establish Year: " << endl;
        cin >> hotel_establish_year;
        cin.ignore();

        cout << "Enter Hotel Staff Quantity : " << endl;
        cin >> hotel_staff_quantity;
        cin.ignore();

        cout << "Enter Hotel Room Quantity  : " << endl;
        cin >> hotel_room_quantity;
        cin.ignore();

        HotelCount++;
    }

    void GetHotel()
    {

        cout << "Hotel ID:" << hotel_id << endl;

        cout << "Hotel Name:" << hotel_name << endl;

        cout << "Hotel Type:" << hotel_type << endl;

        cout << "Hotel Rating:" << hotel_rating << endl;

        cout << "Hotel Location:" << hotel_location << endl;

        cout << "Hotel Establish Year:" << hotel_establish_year << endl;

        cout << "Hotel Staff Quantity:" << hotel_staff_quantity << endl;

        cout << "Hotel Room Quantity:" << hotel_room_quantity << endl;
    }

    static void AllTotal()
    {

        cout << "\n Total Hotels = " << HotelCount << endl;
    }
};

int Hotel::HotelCount = 0;

int main()
{

    int n;

    cout<<"Enter your hotels:"<<endl;
    cin>>n;

    Hotel h[n];

    for (int i = 0; i < n; i++)
    {
       h[i].SetHotel();
    }

        for (int i = 0; i < n; i++)
    {
       h[i].GetHotel();
    }
    
    Hotel::AllTotal();

    return 0;
}