#pragma once
#include "Persona.h"

class Empleado :public Persona {
private:
	string puesto;
	double salarioBase;
public:
	Empleado(); 
	Empleado(string no, string ce, int ed, string pues);
	virtual ~Empleado();
		
	string getPuesto();

	void setPuesto(string pues);

	virtual string toString();

};