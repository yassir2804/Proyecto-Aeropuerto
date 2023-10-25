#pragma once
#include "NodoEmpleado.h"

class ListaEmpleado {

private:

	NodoEmpleado* primero;

public:


	ListaEmpleado();

	virtual ~ListaEmpleado();

	bool estaVacio();
	bool ingresaEmpleado(Empleado& emp);


	string toString();

};