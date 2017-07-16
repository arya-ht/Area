#include "cylinder.h"
#include <iostream>
/*
* Arya HajiTaheri - 1518105
*/
cylinder::cylinder(){
}
cylinder::~cylinder(){
}
double cylinder::Area(){
	double answer = (2 * PI*r)*(r + h);
	return answer;
}
double cylinder::volume(){
	double answer= (r*r*PI*h);
	return answer;
}
void cylinder::getdata() {
	std::cout << "input the height and the radius:\n";
	std::cin >> h >> r;
}
