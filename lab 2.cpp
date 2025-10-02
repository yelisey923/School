#include <iostream>

using namespace std;

class Rectangle
{
private:
	int lenght;
	int width;

public:
	Rectangle()    ///1////
	{
		lenght = 1;
		width = 1;
	}

	Rectangle(int a)
	{
		lenght = a;
		width = 1;
	}

	Rectangle(int a, int b)
	{
		lenght = a;
		width = b;
	}

	Rectangle(const Rectangle& other)
	{
		lenght = other.lenght;
		width = other.width;
	}

	int Area()
	{
		int result = lenght * width;
		return result;
	}

	int Per()
	{
		int result = 2 * (lenght + width);
		return result;
	}

	void SetDataLenght(int a)
	{
		lenght = a;
	}

	void GetData()
	{
		cout << "\nlenght = " << lenght;
		cout << "\nwidth = " << width;
	}

	void GetSquareData(int Area, int Per)
	{
		cout << "\n\narea = " << Area;
		cout << "\nPer = " << Per;
	}

};

int main()
{
	Rectangle r1;
	int area_r1 = r1.Area();
	int per_r1 = r1.Per();

	Rectangle r2(7, 8);
	int area_r2 = r2.Area();
	int per_r2 = r2.Per();

	Rectangle r3 = r2;
	int area_r3 = r3.Area();
	int per_r3 = r3.Per();

	cout << "\nFirst print:" << "\n Area: " << area_r1 << "\n Per: " << per_r1;
	cout << "\n\nSecond print:" << "\n Area: " << area_r2 << "\n Per: " << per_r2;
	cout << "\n\nThird print:" << "\n Area: " << area_r3 << "\n Per: " << per_r3;

	int temp;
	cout << "\n\nEnter new lenght: "; cin >> temp;

	r2.SetDataLenght(temp);
	r3.GetData();


}
