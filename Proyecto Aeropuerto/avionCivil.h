#pragma once
#include"Avion.h"

class avionCivil : public avion {
protected:
	string numeroPlaca;
	string tipo;
public:
	//Constructor
	avionCivil();
	avionCivil(Fecha& fCreado,double dist, string numPla, string tip);

	//Destructor
	virtual ~avionCivil();

	//Set's
	void setNumeroPlaca(string numPla);
	void setTipo(string tip);

	//Get's
	string getNumeroPlaca();
	string getTipo();

	//toString
	string toString();
};
