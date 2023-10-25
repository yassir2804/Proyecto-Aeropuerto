#pragma once
#include"AvionCivil.h"

class AvionComercial : public AvionCivil {
private:

public:
	//Constructor
	AvionComercial(Fecha& fC, double dist, string cat, string numPla, string tip);

	//Destructor
	virtual ~AvionComercial();


	//toString
	string toString();
};
#pragma once
