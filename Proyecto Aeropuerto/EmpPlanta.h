#pragma once
#include"Empleado.h"

class Planta : public Empleado {

public:

	Planta(string no, string ce, int ed, string pues);
	virtual ~Planta();

	virtual string toString();

};