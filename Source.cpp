#include <iostream>
#include <string>
#include <iomanip>
// Arya HajiTaheri
#include "point.h"
#include "circle.h"
#include "cylinder.h"
using namespace std;


int main()
{
	cylinder cylinder1;
	circle circle1;

	int input;
	char input1;
	while (true) {
		cout << "\nWhat aspect of shape do you want to calculate? (1)Surface area circle ,(2) Volume of Cylinder (3) Surface area of Cylinder:"<<endl;
		cin >> input;
		switch (input){
		case 1:
			circle1.getdata();
			cout << setprecision(10) << "The  area of the circle is: " << circle1.Area() << endl << endl;
			break;
		case 2:
			cylinder1.getdata();
			cout << setprecision(10) << "The Volume of the Cylinder is: " << cylinder1.volume() << endl << endl;
			break;
		case 3:
			cylinder1.getdata();
			cout << setprecision(10) << "The Surface Area of the Cylinder is: " << cylinder1.Area() << endl << endl;
			break;
		default:
			"invalid input!";
			break;
		}

		cout << "would you like to calculate again?(y/n)"<< endl; 
		cin >> input1;
		switch (input1)
		{
		case 'N': case 'n':
			return false;
			break;
		}
	}
	system("pause");
	return 0;
}
