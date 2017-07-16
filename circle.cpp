#include "circle.h"
#include <iostream>
/*
* Arya HajiTaheri - 1518105
*/
circle::circle(){
}
circle::~circle(){
}
double circle::Area(){
	double answer = r*r*PI;
	return answer;
}
void circle::getdata(){
	std::cout << "input the radius:\n";
	std::cin >> r;
}
double circle::volume(){
	return 0;
}