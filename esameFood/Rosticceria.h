#ifndef ROSTICCERIA_H
#define ROSTICCERIA_H
#include <iostream>
#include <string>
#include "FoodDelivery.h"
using namespace std;

class Rosticceria:public FoodDelivery
{
public:
	Rosticceria(string n, int x, int y, double p, string cibo, double prezzoC) :FoodDelivery(n, x, y, p, cibo) {
		prezzoConsegna = prezzoC;
	};
	virtual ~Rosticceria() {};

private:
	double prezzoConsegna;
};




#endif // !ROSTICCERIA_H
