
#include <iostream>
using namespace std;

class P
{

protected:
    float celsius;

public:
    void SetCelsius()
    {

        cout << "Enter temperature in celsius" << endl;
        cin >> celsius;
    }
};

class Q : public P
{

protected:
    float fahrenheit;

public:
    void ToFahrenheit()
    {

        fahrenheit = (celsius * 9 / 5) + 32;
        cout << "Fahrenheit:" << fahrenheit << endl;
    }
};

class R : public Q
{

private:
    float kelvin;

public:
    void TokKelvin()
    {

        kelvin = fahrenheit + 273.15;
        cout << "Kelvin:" << kelvin << endl;
    }
};

int main()
{

    R obj;

    obj.SetCelsius();
    obj.ToFahrenheit();
    obj.TokKelvin();

    return 0;
}