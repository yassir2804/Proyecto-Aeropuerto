#pragma once
#include "ListaAvion.h"
#include "ListaEmpleado.h"
#include "ListaNodoContrato.h"
#include "ListasPlazas.h"


class Aeropuerto {

private:

	string nombreE;
	string cedulaJ;
	string telefono;
	ListaAvion* listA;
	ListaEmpleado* listE;
	ListaNodoContrato* listC;
	ListaPlaza* listP;

public:

	Aeropuerto(string nom, string ced, string tel);

	virtual ~Aeropuerto();


	//metodos de lista empleados
	bool ListaEmpleadoEstaVacio();
	bool ingresarEmpleado(Empleado& emp);
	bool existePiloto();
	bool existeCopiloto();
	bool existeAzafata();
	bool existeAdministrativo();
	bool existeMiscelaneo();
	bool existeEmpleadoConCed(string ced);
	bool existePilotoConCed(string ced);
	bool existeCopilotoConCed(string ced);
	bool existeAzafataConCed(string ced);
	bool existeAdministrativoConCed(string ced);
	bool existeMiscelaneoConCed(string ced);
	bool eliminarEmpleadoPorCedula(string ced);
	Empleado* buscarEmpleadoPorCed(string ced);
	string imprimirMiscelaneos();
	string imprimirAdministrativos();
	string imprimirAzafatas();
	string imprimirCopilotos();
	string imprimirPilotos();
	string imprimeEmpleados();


	//metodos de lista avion
	bool ListaAvionEstaVacio();
	bool ingresarAvion(Avion& avi);
	bool existeAvionCivil();
	bool existeAvionComercial();
	bool existeAvionCarga();
	bool existeAvionMilitar();
	bool existeAvionPorPlaca(string pla);
	bool existeAvionCivilPorPlaca(string pla);
	bool existeAvionComercialPorPlaca(string pla);
	bool existeAvionCargaPorPlaca(string pla);
	bool existeAvionMilitarPorPlaca(string pla);
	bool eliminarAvionPorPlaca(string pla);
	Avion* buscarAvionPorPlaca(string pla);
	Avion* buscarAvionConMayorArea();
	string imprimeAvionesMilitares();
	string imprimeAvionesCarga();
	string imprimeAvionesCiviles();
	string imprimeAvionesComerciales();
	string imprimeAviones();
	string imprimirAvionesConTripulacion();
	string imprimirTripulacionAvionComercial();
	string imprimirAvionesDeMasDe20(Fecha& act);

	//metodos de lista contrato

	bool ListaContratosEstaVacio();
	bool ingresarContrato(ContratoBase& con);
	bool ingresaContrato(ContratoBase& ptrContrato);
	bool existeContrato(string cod);
	bool existeContratoConEmpleado(string ced);
	bool existeAvionConPiloto(string pla);
	bool existeAvionConCopiloto(string pla);
	bool existeAvionConAzafata(string pla);
	bool existenContratosVencidos(Fecha& fech);
	bool existeContratoVencidoConCod(Fecha& fech, string cod);
	bool eliminaContratoPorCodigo(string cod);
	bool eliminarContratoPorCedula(string cod);
	Empleado* buscarEmpleadoPorAvi(string pla);
	ContratoBase* buscarContratoPorCod(string cod);
	ContratoBase* buscarContratoPorCed(string ced);
	string imprimirContratosVencidosAceptados(Fecha& act);
	string imprimirContratosVencidos(Fecha& act);
	string imprimeContratos();
	string imprimirServiciosProfesionales();
	string imprimirPlazosFijos();
	string imprimirTiempoIndefinido();
	string imprimirContratosConSuEmpleado();
	string imprimirEmpleadosContratados();
	string imprimirPilotosDeAvionesCarga();
	bool existeServicioProfesional();
	bool existePlazoFijo();
	bool existeTiempoIndefinido();
	bool existeServicioProfesionalConCod(string cod);
	bool existePlazoFijoConCod(string cod);
	bool existeTiempoIndefinidoConCod(string cod);
	

	//metodos de lista plazas

	bool ListaPlazaEstaVacio();
	bool ingresarPlaza(Plaza& pla);
	bool ingresaPlaza(Plaza& pla);
	bool existePlaza(string cod);
	bool existePlazaParaPuesto(string pues);
	bool existePlazaDisponible(string cod, string pues);
	Plaza* buscarPlazaPorCodigo(string cod);
	string imprimirPlazasDisponibles(string pues);
	string imprimePlazas();

};