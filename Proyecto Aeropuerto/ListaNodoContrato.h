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
	bool estaVacio();
	bool ingresaContrato(contratoBase* ptrContrato);

	//Eliminar
	bool eliminaContratoPorCodigo(string cod);

	//toString
	string toString();
}; 
