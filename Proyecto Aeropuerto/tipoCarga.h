#pragma once
#include"avionCivil.h"

class tipoCarga : public avionCivil {
private:
	string tipoCar; 
	double anchoPuerta;
	double alturaPuerta;
public:
	//Constructor
	tipoCarga(Fecha& fCreado, double dist, string numPla, string tip, string ti, double ancPuer, double altPuer); 

	//Destructor
	virtual ~tipoCarga();

	//Set's
	void setTipo(string tip);
	void setAnchoPuerta(double ancPuer);
	void setAlturaPuerta(double altPuer);

	//Get's
	string getTipoCarga();
	double getAnchoPuerta();
	double getAlturaPuerta();

	//toString
	string toString();
};