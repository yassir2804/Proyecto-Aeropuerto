//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

#pragma once
#include "NodoAvion.h"

class ListaAvion {

private:

	NodoAvion* primero;

public:


	ListaAvion();

	virtual ~ListaAvion();

	bool estaVacio();
	bool ingresaAvion(Avion& av);
	bool existeAvionCivil();
	bool existeAvionComercial();
	bool existeAvionCarga();
	bool existeAvionMilitar();
	bool existeAvionPorPlaca(string pla);
	bool existeAvionCivilPorPlaca(string pla);
	bool existeAvionComercialPorPlaca(string pla);
	bool existeAvionCargaPorPlaca(string pla);
	bool existeAvionMilitarPorPlaca(string pla);
	bool eliminarAvionPorPlaca(string pla);

	Avion* buscarAvionPorPlaca(string pla);
	Avion* buscarAvionConMayorArea();

	string imprimeAvionesMilitares();
	string imprimeAvionesCarga();
	string imprimeAvionesCiviles();
	string imprimeAvionesComerciales();
	string imprimirAvionesConTripulacion(ListaNodoContrato& list);
	string imprimirTripulacionAvionComercial(ListaNodoContrato& list);
	string imprimirAvionesDeMasDe20(Fecha& act);
	string toString();

	void guardarListaAvion();
	void leerListaAvion();
};