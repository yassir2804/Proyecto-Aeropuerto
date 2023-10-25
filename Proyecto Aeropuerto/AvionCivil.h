#pragma once
#include"Avion.h"

class AvionCivil : public Avion {
protected:
	string numeroPlaca;

public:
	//Constructor
	AvionCivil();
	AvionCivil(Fecha& fC, double dist, string cat, string numPla, string tip);

	//Destructor
	virtual ~AvionCivil();

	//Set's
	void setNumeroPlaca(string numPla);
	void setTipo(string tip);

	//Get's
	string getNumeroPlaca();
	string getTipo();

	//toString
	virtual string toString();


};