#pragma once
#include"NodoContrato.h"
#include "TiempoIndefinido.h"
#include "PlazoFijo.h"
#include "ServiciosProfesionales.h"

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
	bool ingresaContrato(ContratoBase& ptrContrato);

	//Eliminar
	bool eliminaContratoPorCodigo(string cod);

	//toString
	string toString();
}; 
