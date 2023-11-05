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
	bool existeEmpleado(string ced);
	Empleado* buscarEmpleadoPorCed(string ced);


	string toString();

};