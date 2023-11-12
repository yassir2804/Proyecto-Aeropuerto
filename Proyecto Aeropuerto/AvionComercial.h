//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

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
