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
	bool existePlaza(string cod);
	bool existePlazaParaPuesto(string pues);
	bool existePlazaDisponible(string cod, string pues);

	Plaza* buscarPlazaPorCodigo(string cod);

	string imprimirPlazasDisponibles(string pues);
	string toString();

};
