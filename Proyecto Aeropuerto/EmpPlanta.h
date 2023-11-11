#pragma once
#include"Empleado.h"

class Planta : public Empleado {

public:

	Planta(string no, string ce, int ed, string pues);
	virtual ~Planta();

	virtual string toString() = 0;
	virtual Empleado* copia() = 0;

	virtual void guardarEmpleado(ofstream& file) = 0;

};