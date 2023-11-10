#pragma once
#include"NodoContrato.h"


class ListaNodoContrato {
private:
	NodoContratoBase* primero;
public:

	ListaNodoContrato();

	//Destructor
	virtual ~ListaNodoContrato();

	NodoContratoBase* getPrimero();

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
	bool eliminarContratosVencidosNoAceptados(Fecha& act);

	ContratoBase* buscarContratoPorCod(string cod);
	ContratoBase* buscarContratoPorCed(string ced);
	Empleado* buscarEmpleadoPorAvi(string pla);

	string imprimirServiciosProfesionales();
	string imprimirPlazosFijos();
	string imprimirTiempoIndefinido();
	string imprimirContratosVencidosAceptados(Fecha &act);
	string imprimirContratosVencidos(Fecha& act);
	string imprimirContratosConSuEmpleado();
	string imprimirEmpleadosContratados();
	string imprimirPilotosDeAvionesCarga();

	string toString();
}; 
