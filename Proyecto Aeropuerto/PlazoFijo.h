#pragma once
#include"ContratoBase.h"


class PlazoFijo : public ContratoBase {
private:
	Fecha* fIngreso;
	Fecha* fCulminacion;
public:
	//Constructor
	PlazoFijo(string desc, string cod, double sala, Avion& av, Empleado& emp, Fecha& fIng, Fecha& fCul);

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

