#pragma once
#include"Avion.h"
#include"Clase-Servicios.h"

class AvionCivil : public Avion {

public:
	//Constructor

	AvionCivil(Fecha& fC, double dist, string cat, string numPla, string tip);

	//Destructor
	virtual ~AvionCivil();


	//toString
	virtual string toString();


};