#pragma once
#include "point.h"
// Arya HajiTaheri

class circle :
	public point
{
public:
	circle();
	~circle();
	double volume();
	double Area();
	void getdata();

protected:
	float r;
};

