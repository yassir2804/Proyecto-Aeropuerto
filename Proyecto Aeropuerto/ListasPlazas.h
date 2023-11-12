//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

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

	void guardarListaPlazas();
	void leerListaPlazas();

};
