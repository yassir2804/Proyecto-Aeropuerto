#pragma once
#include"NodoContrato.h"

class ListaNodoContrato {
private:
	NodoContratoBase* primero;
public:
	//Constructor
	ListaNodoContrato();

	//Destructor
	virtual ~ListaNodoContrato();

	//Get
	NodoContratoBase* getPrimero();

	//Ingresar
	bool esVacio();
	bool ingresaContrato(NodoContratoBase* ptrContrato);

	//Eliminar
	bool eliminaContrato();

	//toString
	string toString();
};
