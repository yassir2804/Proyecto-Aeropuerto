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
	bool existeAvionPorPlaca(string pla);
	bool existeAvionCivilPorPlaca(string pla);
	bool existeAvionComercialPorPlaca(string pla);


	Avion* buscarAvionPorPlaca(string pla);

	string imprimeAvionesCiviles();
	string imprimeAvionesComerciales();
	string toString();

};