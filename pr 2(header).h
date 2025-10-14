#pragma once
#include <iostream>

using namespace std;

class Abonent
{
private:
	string name;
	string init;
	int number;
	string address;

public:
	void SetData();
	void GetData();
	int GetNumber();
	
};
