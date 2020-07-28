#ifndef FOODDELIVERY_H
#define FOODDELIVEY_H
#include <iostream>
#include <string>

using namespace std;

class FoodDelivery
{
public:
	FoodDelivery(string n, int x, int y, double p, string cibo) {
		nome = n;
		posX = x;
		posY = y;
		prezzoMedio = p;
		ciboTipico = cibo;
	};
	virtual ~FoodDelivery() {};
	void Ordina(int posPersonaX, int posPersonaY);
	void Ordina(int posPersonaX, int posPersonaY, int quantitaCibo);
	void Ordina(int posPersonaX, int posPersonaY, int quantitaCibo, string ciboRichiesto);
	string GetNome() { return nome; };
	int GetPosX() { return posX; };
	int GetPosY() { return posY; };
	string GetCiboTipico() { return ciboTipico; };
	void SetTempo(int var) { tempo = var; };
	int GetTempo() { return tempo; };
	void SetConsegnaPossibile(bool var) { consegnaPossibile = var; };
	bool GetConsegnaPossibile() { return consegnaPossibile; };
private:
	string nome;
	int posX, posY;
	double prezzoMedio;
	string ciboTipico;
	int tempo;
	bool consegnaPossibile = false;
};

#endif // !FOODDELIVERY_H
