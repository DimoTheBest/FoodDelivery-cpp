#ifndef AUTO_H
#define AUTO_H

#include <iostream>
#include <string>
#include "MezziDiConsegna.h"

using namespace std;

class Auto:public MezziDiConsegna
{
public:
	Auto(string m) :MezziDiConsegna(m) {};
	virtual ~Auto() {};


private:
	int velocita = 60;//km/h
};

#endif // !AUTO_H
