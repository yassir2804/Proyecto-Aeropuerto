#pragma once
#include"NodoContrato.h"


class ListaNodoContrato {
private:
	NodoContratoBase* primero;
public:

	ListaNodoContrato();

	//Destructor
	virtual ~ListaNodoContrato();

	bool estaVacio();
	bool ingresaContrato(ContratoBase& ptrContrato);

	bool existeContrato(string cod);
	bool existeContratoConEmpleado(string ced);

	bool existeAvionConPiloto(string pla);
	bool existeAvionConCopiloto(string pla);
	bool existeAvionConAzafata(string pla);

	bool existenContratosVencidos(Fecha & fech);

	bool eliminaContratoPorCodigo(string cod);

	bool existeContratoVencidoConCod(Fecha& fech, string cod);

	ContratoBase* buscarContratoPorCod(string cod);


	string imprimirContratosVencidos(Fecha &act);
	string toString();
}; 
