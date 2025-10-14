#include <iostream>
#include "abonent.h"

using namespace std;

void Abonent::SetData()
{
	cout << "\n\nenter name: "; cin >> name;
	cout << "enter init: "; cin >> init;
	cout << "enter number: "; cin >> number; cin.ignore();
	cout << "enter address: "; cin >> address;

}

void Abonent::GetData()
{
	cout << "\n\n" << name;
	cout << "\n" << init;
	cout << "\n" << number;
	cout << "\n" << address;
}

int Abonent::GetNumber()
{
	return number;
}
