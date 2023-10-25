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


	string toString();

};