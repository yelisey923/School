#include <iostream>
#include <cmath>
using namespace std;

class RightAngle
{
private:
    int katet1;
    int katet2;

public:

    RightAngle()
    {
        katet1 = 1;
        katet2 = 1;
    }

    RightAngle(int a)
    {
        katet1 = a;
        katet2 = 1;
    }

    RightAngle(int a, int b)
    {
        katet1 = a;
        katet2 = b;
    }

    RightAngle(const RightAngle& other)
    {
        katet1 = other.katet1;
        katet2 = other.katet2;
    }

    float Square()
    {
        float a = 0.5 * katet1 * katet2;
        return a;
    }

    float Hypot()
    {
        float a = sqrt(katet1 * katet1 + katet2 * katet2);
        return a;
    }

    int SetData(int a, int b)
    {
        katet1 = a;
        katet2 = b;
    }

    void GetData()
    {
        cout << "\n\n" << "RightAngle's info: ";
        cout << "\nsquare = " << 0.5 * katet1 * katet2;
        cout << "\nhypotenuse = " << sqrt(katet1 * katet1 + katet2 * katet2);
    }
};


int main()
{
    int r_katet1 = 0, r_katet2 = 0;

    cout << "Enter first katet's size: "; cin >> r_katet1;
    cout << "\nEnter second katet's size: "; cin >> r_katet2;

    RightAngle angle1;

    angle1.SetData(r_katet1, r_katet2);
    angle1.GetData();

    cout << "\n\nmetods test: ";
    cout << "\nsquare = " << angle1.Square();
    cout << 

}


