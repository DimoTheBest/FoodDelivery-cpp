#ifndef MOTORINI_H
#define MOTORINI_H
#include <iostream>
#include <string>
#include "MezziDiConsegna.h"

using namespace std;

class Motorini:public MezziDiConsegna
{
public:
	Motorini(string m, int max) :MezziDiConsegna(m) { maxPorzioniTrasportabili = max; };
	virtual ~Motorini() {};


private:
	int velocita = 30;//km/h
	int maxPorzioniTrasportabili;
};
#endif // !MOTORINI_H
