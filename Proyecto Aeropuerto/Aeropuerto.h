#pragma once
#include "ListaAvion.h"
#include "ListaEmpleado.h"
#include "ListaNodoContrato.h"


class Aeropueto {

private:

	string nombreE;
	string cedulaJ;
	string telefono;
	ListaAvion* listA;
	ListaEmpleado* listE;
	ListaNodoContrato* listC;

	Aeropueto(string nom, string ced, string tel, ListaAvion& lA, ListaEmpleado& lE, ListaNodoContrato& lNC );



};