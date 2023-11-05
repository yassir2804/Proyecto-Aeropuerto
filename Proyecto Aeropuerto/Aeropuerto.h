#pragma once
#include "ListaAvion.h"
#include "ListaEmpleado.h"
#include "ListaNodoContrato.h"
#include "ListasPlazas.h"


class Aeropuerto {

private:

	string nombreE;
	string cedulaJ;
	string telefono;
	ListaAvion* listA;
	ListaEmpleado* listE;
	ListaNodoContrato* listC;
	ListaPlaza* listP;

public:

	Aeropuerto(string nom, string ced, string tel);

	virtual ~Aeropuerto();

	ListaEmpleado* getListaEmpleado();
	ListaAvion* getListaAvion();
	ListaNodoContrato* getListaNodoContrato();
	ListaPlaza* getListaPlaza();

	bool ingresarEmpleado(Empleado& emp);
	bool ingresarAvion(Avion& avi);
	bool ingresarContrato(ContratoBase& con);
	bool ingresarPlaza(Plaza& pla);

};