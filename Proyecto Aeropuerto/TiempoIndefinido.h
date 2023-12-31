#pragma once
#include"ContratoBase.h"
#include"Plaza.h"

class TiempoIndefinido : public ContratoBase {
private:
	Plaza* ptrPlaza;

public:
	//Constructor
	TiempoIndefinido(string desc, string cod, double sala, Avion& av, Empleado& emp, Plaza& plaza, Fecha& fIng, Fecha& fCes);

	//Destructor
	virtual ~TiempoIndefinido();

	//Set's
	void setPlaza(Plaza& plaza);


	//Get's
	Plaza* getPlaza();


	//toString

	virtual string toString();
}; 
