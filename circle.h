#pragma once
#include "point.h"
/*
* Arya HajiTaheri - 1518105
*/
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

