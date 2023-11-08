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

	bool existeServicioProfesional();
	bool existePlazoFijo();
	bool existeTiempoIndefinido();

	bool existeContrato(string cod);
	bool existeServicioProfesionalConCod(string cod);
	bool existePlazoFijoConCod(string cod);
	bool existeTiempoIndefinidoConCod(string cod);
	bool existeContratoConEmpleado(string ced);

	bool existeAvionConPiloto(string pla);
	bool existeAvionConCopiloto(string pla);
	bool existeAvionConAzafata(string pla);

	bool existenContratosVencidos(Fecha & fech);
	bool existeContratoVencidoConCod(Fecha& fech, string cod);

	bool eliminaContratoPorCodigo(string cod);
	bool eliminarContratoPorCedula(string ced);

	ContratoBase* buscarContratoPorCod(string cod);

	string imprimirServiciosProfesionales();
	string imprimirPlazosFijos();
	string imprimirTiempoIndefinido();
	string imprimirContratosVencidos(Fecha &act);

	string toString();
}; 
