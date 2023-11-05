#pragma once
#include"Empleado.h"

class Tripulacion : public Empleado {

public:

	Tripulacion(string no, string ce, int ed, string pues);
	virtual ~Tripulacion();

	virtual string toString() = 0;
	virtual Empleado* copia() = 0;

};