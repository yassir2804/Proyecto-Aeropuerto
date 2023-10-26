#pragma once
#include"ContratoBase.h"


class PlazoFijo : public ContratoBase {

public:
	//Constructor
	PlazoFijo(string desc, string cod, double sala, Avion& av, Empleado& emp, Fecha& fIng, Fecha& fCul);

	//Destructor
	virtual ~PlazoFijo();

	virtual string toString();


};

