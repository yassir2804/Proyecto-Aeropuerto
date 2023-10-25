#pragma once
#include"ContratoBase.h"
#include"Fecha.h"
#include"Plaza.h"

class TiempoIndefinido : public ContratoBase {
private:
	Plaza* ptrPlaza;
	Fecha* fIngreso;
	Fecha* fCese;
public:
	//Constructor
	TiempoIndefinido(string desc, string cod, double sala, Avion& av, Empleado& emp, Plaza& plaza, Fecha& fIng, Fecha& fCes);

	//Destructor
	virtual ~TiempoIndefinido();

	//Set's
	void setPlaza(Plaza& plaza);
	void setFechaIngreso(Fecha& fI);
	void setFechaCese(Fecha& fC);

	//Get's
	Plaza* getPlaza();
	Fecha* getFechaIngreso();
	Fecha* getFechaCese();

	//toString

	virtual string toString();
}; 
