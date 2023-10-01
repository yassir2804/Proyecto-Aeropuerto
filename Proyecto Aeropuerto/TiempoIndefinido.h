#pragma once
#include"ContratoBase.h"
#include"Fecha.h"
#include"Plaza.h"

class tiempoIndefinido : public contratoBase {
private:
	Plaza* ptrPlaza;
	Fecha* ptrFechaIngreso;
	Fecha* ptrFechaCulminacion;
public:
	//Constructor
	tiempoIndefinido(Plaza& plaza, Fecha& fIngreso, Fecha& fCulmina, string desc, string cod, double sala);

	//Destructor
	virtual ~tiempoIndefinido();

	//Set's
	void setPlaza(Plaza& plaza);
	void setFechaIngreso(Fecha& fI);
	void setFechaCulmina(Fecha& fC);

	//Get's
	Plaza* getPlaza();
	Fecha* getFechaIngreso();
	Fecha* getFechaCulmina();

	//toString

	virtual string toString();
};
