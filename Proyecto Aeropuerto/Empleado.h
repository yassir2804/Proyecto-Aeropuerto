#pragma once
#include "Persona.h"

class Empleado :public Persona {
protected:
	string ocupacion;
public:
	Empleado(); 
	Empleado(string no, string ce, int ed, string ocu);
	virtual ~Empleado();
		
	string getOcupacion();

	void setOcupacion(string ocu);

	virtual string toString() = 0;
	virtual Empleado* copia() = 0;

};