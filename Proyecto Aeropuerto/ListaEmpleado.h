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

	bool existePiloto();
	bool existeCopiloto();
	bool existeAzafata();
	bool existeAdministrativo();
	bool existeMiscelaneo();

	bool existePilotoConCed(string ced);
	bool existeCopilotoConCed(string ced);
	bool existeAzafataConCed(string ced);
	bool existeAdministrativoConCed(string ced);
	bool existeMiscelaneoConCed(string ced);

	Empleado* buscarEmpleadoPorCed(string ced);

	string imprimirMiscelaneos();
	string imprimirAdministrativos();
	string imprimirAzafatas();
	string imprimirCopilotos();
	string imprimirPilotos();
	string toString();

};