//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

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

	bool existePiloto();
	bool existeCopiloto();
	bool existeAzafata();
	bool existeAdministrativo();
	bool existeMiscelaneo();

	bool existeEmpleadoConCed(string ced);
	bool existePilotoConCed(string ced);
	bool existeCopilotoConCed(string ced);
	bool existeAzafataConCed(string ced);
	bool existeAdministrativoConCed(string ced);
	bool existeMiscelaneoConCed(string ced);

	bool eliminarEmpleadoPorCedula(string ced);

	Empleado* buscarEmpleadoPorCed(string ced);

	string imprimirEmpleadoConSuAvion(ListaNodoContrato& list, string ced);
	string imprimirMiscelaneos();
	string imprimirAdministrativos();
	string imprimirAzafatas();
	string imprimirCopilotos();
	string imprimirPilotos();
	string toString();


	void guardarListaEmpleado();
	void leerListaEmpleado();

};