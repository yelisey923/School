#include <iostream>
#include "abonent.h"

using namespace std;
int main()
{
    const int N = 2;
    Abonent* Telephone = new Abonent[N];

    for (int i = 0; i < N; ++i)
    {
        Telephone[i].SetData();
    }

    int a_number, check = -1, b = 0;
    cout << "\n\n\nEnter number: "; cin >> a_number; cin.ignore();
    for (int i = 0; i < N; ++i)
    {
        b = Telephone[i].GetNumber();
        if (b == a_number)
        {
            Telephone[i].GetData();
            check++;
        }
    }

    if (check == -1)
    {
        cout << "\n\nThere is no same number!";
    }

}

