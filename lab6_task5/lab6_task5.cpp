
#include <iostream>
using namespace std;

class Car {
public:
	string brand;
	int year;
};

int main()
{
	Car c[3];
	c[0].brand = "mercedes";
	c[0].year = 2017;

	c[1].brand = "audi";
	c[1].year = 2016;

	c[2].brand = "bmw";
	c[2].year = 2025;

	for (int i = 0; i < 3;i++) {
		cout<<" brand: "<<c[i].brand<<" year: "<<c[i].year<<"|";
	}
}


