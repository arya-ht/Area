#pragma once
#include "circle.h"
// Arya HajiTaheri

class cylinder :
	public circle
{
public:
	cylinder();
	~cylinder();
	double Area();
	double volume();
	void getdata();
protected:
	float h;
};

