#pragma once
#include "ListaAvion.h"
#include "ListaEmpleado.h"
#include "ListaNodoContrato.h"


class Aeropuerto {

private:

	string nombreE;
	string cedulaJ;
	string telefono;
	ListaAvion* listA;
	ListaEmpleado* listE;
	ListaNodoContrato* listC;

public:

	Aeropuerto(string nom, string ced, string tel);

	ListaEmpleado* getListaEmpleado();
	ListaAvion* getListaAvion();
	ListaNodoContrato* getListaNodoContrato();

	bool ingresarEmpleado(Empleado& emp);
	bool ingresarAvion(Avion& avi);
	bool ingresarNodoContrato(ContratoBase& con);

};