#pragma once
#include"ContratoBase.h"
#include"Fecha.h"

class PlazoFijo : public contratoBase {
private:
	Fecha* fIngreso;
	Fecha* fCulminacion;
public:
	//Constructor
	PlazoFijo(string desc, string cod, double sala, Fecha& fIng, Fecha& fCul);

	//Destructor
	virtual ~PlazoFijo();

	//Get's
	Fecha* getFechaIngreso();
	Fecha* getFechaCulminacion();

	//Set's
	void setFechaIngreso(Fecha& fIng);
	void setFechaCulminacion(Fecha& fCulm);

	virtual string toString();


};
#pragma once
