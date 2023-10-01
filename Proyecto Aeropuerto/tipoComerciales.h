#pragma once
#include"avionCivil.h"

class tipoComerciales : public avionCivil {
private:
	string numeroCategoria;
public:
	//Constructor
	tipoComerciales(Fecha& fCreado, double dist, string numPla, string tip, string numCat);

	//Destructor
	virtual ~tipoComerciales();

	//Set's
	void setNumeroCategoria(string numCat);

	//Get's
	string getNumeroCategoria();

	//toString
	string toString();
};
