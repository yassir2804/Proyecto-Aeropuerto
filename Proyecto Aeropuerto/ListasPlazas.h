#pragma once
#include "NodoPlaza.h"

class ListaPlaza {

private:

	NodoPlaza* primero;

public:


	ListaPlaza(); 

	virtual ~ListaPlaza(); 

	bool estaVacio();
	bool ingresaPlaza(Plaza& pla);


	string toString();

};
