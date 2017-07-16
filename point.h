#pragma once
// Arya HajiTaheri

class point
{
public:
	point();
	~point();
	virtual double Area() = 0; //pure virtual function is used so the class containing a pure virtual method will be abstract and cannot be instantiated.
	virtual double volume() = 0;  //pure virtual function is used so the class containing a pure virtual method will be abstract and cannot be instantiated.
protected:
	float x, y;
	const double PI = 3.14159265359;
};

