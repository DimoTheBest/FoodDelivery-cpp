#include <iostream>
#include <string>
#include "Ristorante.h"
#include "Rosticceria.h"


using namespace std;

void main() {
	Ristorante giggino("Da Giggino", 2, 5, 20.5, "pizza", 10/*minuti*/);
	
	giggino.GetCiboTipico();
}