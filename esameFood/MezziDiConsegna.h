#ifndef MEZZIDICONSEGNA_H
#define MEZZIDICONSEGNA_H

#include <iostream>
#include <string>

using namespace std;

class MezziDiConsegna
{
public:
	MezziDiConsegna(string m) { modello = m; disponibile = true; };
	virtual ~MezziDiConsegna() {};
	string GetModello() { return modello; };
	void SetDisponibile(bool var) { disponibile = var; };
	bool GetDisponibile() { return disponibile; };

private:
	string modello;
	bool disponibile;
};



#endif // !MEZZIDICONSEGNA_H
