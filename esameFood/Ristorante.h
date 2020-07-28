#ifndef RISTORANTE_H
#define RISTORANTE_H
#include <iostream>
#include <string>
#include "FoodDelivery.h"
#include "Auto.h"
using namespace std;

class Ristorante:public FoodDelivery
{
public:
	Ristorante(string n, int x, int y, double p, string cibo, int tempo) :FoodDelivery(n, x, y, p, cibo) {
		tempoMedioPreparazione = tempo;
	};
	virtual ~Ristorante() {};
	void mezzo(string modello) { Auto car(modello); };

private:
	int tempoMedioPreparazione;
};



#endif // !RISTORANTE_H
