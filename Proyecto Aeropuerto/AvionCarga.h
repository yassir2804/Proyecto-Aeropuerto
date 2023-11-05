#pragma once
#include"AvionCivil.h"


class AvionCarga : public AvionCivil {
private:

	double anchoPuerta;
	double alturaPuerta;

public:
	//Constructor
	AvionCarga(Fecha& fC, double dist, string cat, string numPla, string tip, double ancPuer, double altPuer);

	//Destructor
	virtual ~AvionCarga();

	//Set's

	void setAnchoPuerta(double ancPuer);
	void setAlturaPuerta(double altPuer);




	//Get's
	double getAnchoPuerta();
	double getAlturaPuerta();


	//toString
	string toString();
}; 
