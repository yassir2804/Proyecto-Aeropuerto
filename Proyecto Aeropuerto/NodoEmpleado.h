#pragma once
#include "Piloto.h"
#include "Copiloto.h"
#include "Administrativo.h"
#include "Miscelaneo.h"
#include "Azafata.h"
#include "ListaNodoContrato.h"


class NodoEmpleado {

private:
	Empleado* ptrEmpleado;
	NodoEmpleado* ptrNodoEmpleado;

public:

	NodoEmpleado(Empleado& ptrEmp, NodoEmpleado* ptrNodoEmp);

	//destructor
	virtual ~NodoEmpleado();

	//sets

	void setEmpleado(Empleado& ptrEmp);
	void setSigEmpleado(NodoEmpleado* ptrNodoEmp);

	//gets
	Empleado* getEmpleado();
	NodoEmpleado* getSigEmpleado();

};