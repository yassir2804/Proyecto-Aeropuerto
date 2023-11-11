#pragma once
#include"AvionCivil.h"


class AvionComercial : public AvionCivil {

public:
	//Constructor
	AvionComercial(Fecha& fC, double dist, string cat, string numPla, string tip);

	//Destructor
	virtual ~AvionComercial();


	//toString
	string toString();

	Avion* copia();

	void guardarAvion(ofstream&);
	static Avion* leerAvion(ifstream&);
};
#pragma once
