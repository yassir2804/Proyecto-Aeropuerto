#pragma once
#include "EmpTripulacion.h"

class Azafata : public Tripulacion {
private:

	string nacionalidad;

public:

	Azafata(string no, string ce, int ed, string pues, string nac);
	virtual ~Azafata();

	void setNacionalidad(string nac);

	string getNacionalidad();

	string toString();

	Empleado* copia();


};