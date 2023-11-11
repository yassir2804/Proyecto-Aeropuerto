#include "Aeropuerto.h"

Aeropuerto::Aeropuerto(string nom, string ced, string tel): nombreE(nom),cedulaJ(ced),telefono(tel)
{
	listA = new ListaAvion();
	listE = new ListaEmpleado();
	listC = new ListaNodoContrato();
	listP = new ListaPlaza();

	leerListaEmpleado();
	leerListaAvion();
	leerListaPlazas();
	leerListaContratos();

	cout << imprimeContratos();

	cout << "{";

}

Aeropuerto::~Aeropuerto()
{
	if (listA != NULL)delete listA;
	if (listE != NULL)delete listE;
	if (listC != NULL)delete listC;
	if (listP != NULL)delete listP;
}


bool Aeropuerto::ListaEmpleadoEstaVacio()
{
	return listE->estaVacio();
}

bool Aeropuerto::ingresarEmpleado(Empleado& emp)
{
	return listE->ingresaEmpleado(emp);

}

bool Aeropuerto::existePiloto()
{
	return listE->existePiloto();
}

bool Aeropuerto::existeCopiloto()
{
	return listE->existeCopiloto();
}

bool Aeropuerto::existeAzafata()
{
	return listE->existeAzafata();
}

bool Aeropuerto::existeAdministrativo()
{
	return listE->existeAdministrativo();
}

bool Aeropuerto::existeMiscelaneo()
{
	return listE->existeMiscelaneo();
}

bool Aeropuerto::existeEmpleadoConCed(string ced)
{
	return listE->existeEmpleadoConCed(ced);
}

bool Aeropuerto::existePilotoConCed(string ced)
{
	return listE->existePilotoConCed(ced);
}

bool Aeropuerto::existeCopilotoConCed(string ced)
{
	return listE->existeCopilotoConCed(ced);
}

bool Aeropuerto::existeAzafataConCed(string ced)
{
	return listE->existeAzafataConCed(ced);
}

bool Aeropuerto::existeAdministrativoConCed(string ced)
{
	return listE->existeAdministrativoConCed(ced);
}

bool Aeropuerto::existeMiscelaneoConCed(string ced)
{
	return listE->existeMiscelaneoConCed(ced);
}

bool Aeropuerto::eliminarEmpleadoPorCedula(string ced)
{
	return listE->eliminarEmpleadoPorCedula(ced);
}

Empleado* Aeropuerto::buscarEmpleadoPorCed(string ced)
{
	return listE->buscarEmpleadoPorCed(ced);
}

string Aeropuerto::imprimirMiscelaneos()
{
	return listE->imprimirMiscelaneos();
}

string Aeropuerto::imprimirAdministrativos()
{
	return listE->imprimirAdministrativos();
}

string Aeropuerto::imprimirAzafatas()
{
	return listE->imprimirAzafatas();
}

string Aeropuerto::imprimirCopilotos()
{
	return listE->imprimirCopilotos();
}

string Aeropuerto::imprimirPilotos()
{
	return listE->imprimirPilotos();
}

string Aeropuerto::imprimeEmpleados()
{
	return listE->toString();
}

string Aeropuerto::imprimirEmpleadoConSuAvion(string ced)
{
	return listE->imprimirEmpleadoConSuAvion(*listC,ced);
}

void Aeropuerto::guardarListaEmpleado()
{
	listE->guardarListaEmpleado();
}

void Aeropuerto::leerListaEmpleado()
{
	listE->leerListaEmpleado();
}

bool Aeropuerto::ingresarAvion(Avion& avi)
{
	return listA->ingresaAvion(avi);
}

bool Aeropuerto::ingresarContrato(ContratoBase& con)
{
	return listC->ingresaContrato(con);
}

bool Aeropuerto::ingresarPlaza(Plaza& pla)
{
	return listP->ingresaPlaza(pla);
}

bool Aeropuerto::ListaAvionEstaVacio()
{
	return listA->estaVacio();
}
bool Aeropuerto::existeAvionCivil()
{
	return listA->existeAvionCivil();
}

bool Aeropuerto::existeAvionComercial()
{
	return listA->existeAvionComercial();
}

bool Aeropuerto::existeAvionCarga()
{
	return listA->existeAvionCarga();
}

bool Aeropuerto::existeAvionMilitar()
{
	return listA->existeAvionMilitar();
}

bool Aeropuerto::existeAvionPorPlaca(string pla)
{
	return listA->existeAvionPorPlaca(pla);
}

bool Aeropuerto::existeAvionCivilPorPlaca(string pla)
{
	return listA->existeAvionCivilPorPlaca(pla);
}

bool Aeropuerto::existeAvionComercialPorPlaca(string pla)
{
	return listA->existeAvionComercialPorPlaca(pla);
}

bool Aeropuerto::existeAvionCargaPorPlaca(string pla)
{
	return listA->existeAvionCargaPorPlaca(pla);
}

bool Aeropuerto::existeAvionMilitarPorPlaca(string pla)
{
	return listA->existeAvionMilitarPorPlaca(pla);
}

bool Aeropuerto::eliminarAvionPorPlaca(string pla)
{
	return listA->eliminarAvionPorPlaca(pla);
}

Avion* Aeropuerto::buscarAvionPorPlaca(string pla)
{
	return listA->buscarAvionPorPlaca(pla);
}

Avion* Aeropuerto::buscarAvionConMayorArea()
{
	return listA->buscarAvionConMayorArea();
}

string Aeropuerto::imprimeAvionesMilitares()
{
	return listA->imprimeAvionesMilitares();
}

string Aeropuerto::imprimeAvionesCarga()
{
	return listA->imprimeAvionesCarga();
}

string Aeropuerto::imprimeAvionesCiviles()
{
	return listA->imprimeAvionesCiviles();
}

string Aeropuerto::imprimeAvionesComerciales()
{
	return listA->imprimeAvionesComerciales();
}

string Aeropuerto::imprimeAviones()
{
	return listA->toString();
}

string Aeropuerto::imprimirAvionesConTripulacion()
{
	return listA->imprimirAvionesConTripulacion(*listC);
}

string Aeropuerto::imprimirTripulacionAvionComercial()
{
	return listA->imprimirTripulacionAvionComercial(*listC);
}

string Aeropuerto::imprimirAvionesDeMasDe20(Fecha& act)
{
	return listA->imprimirAvionesDeMasDe20(act);
}

void Aeropuerto::guardarListaAvion()
{
	listA->guardarListaAvion();
}

void Aeropuerto::leerListaAvion()
{
	listA->leerListaAvion();
}

bool Aeropuerto::ListaContratosEstaVacio()
{
	return listC->estaVacio();
}

bool Aeropuerto::ingresaContrato(ContratoBase& ptrContrato)
{
	return listC->ingresaContrato(ptrContrato);
}

bool Aeropuerto::existeContrato(string cod)
{
	return listC->existeContrato(cod);
}

bool Aeropuerto::existeContratoConEmpleado(string ced)
{
	return listC->existeContratoConEmpleado(ced);
}

bool Aeropuerto::existeAvionConPiloto(string pla)
{
	return listC->existeAvionConPiloto(pla);
}

bool Aeropuerto::existeAvionConCopiloto(string pla)
{
	return listC->existeAvionConCopiloto(pla);
}

bool Aeropuerto::existeAvionConAzafata(string pla)
{
	return listC->existeAvionConAzafata(pla);
}

bool Aeropuerto::existenContratosVencidos(Fecha& fech)
{
	return listC->existenContratosVencidos(fech);
}

bool Aeropuerto::existeContratoVencidoConCod(Fecha& fech, string cod)
{
	return listC->existeContratoVencidoConCod(fech, cod);
}

bool Aeropuerto::eliminaContratoPorCodigo(string cod)
{
	return listC->eliminaContratoPorCodigo(cod);
}

bool Aeropuerto::eliminarContratoPorCedula(string cod)
{
	return listC->eliminarContratoPorCedula(cod);
}

bool Aeropuerto::eliminarContratosVencidosNoAceptados(Fecha& act)
{
	return listC->eliminarContratosVencidosNoAceptados(act);
}

Empleado* Aeropuerto::buscarEmpleadoPorAvi(string pla)
{
	return listC->buscarEmpleadoPorAvi(pla);
}



ContratoBase* Aeropuerto::buscarContratoPorCod(string cod)
{
	return listC->buscarContratoPorCod(cod);
}

ContratoBase* Aeropuerto::buscarContratoPorCed(string ced)
{
	return listC->buscarContratoPorCed(ced);
}


string Aeropuerto::imprimirContratosVencidosAceptados(Fecha& act)
{
	return listC->imprimirContratosVencidosAceptados(act);
}

string Aeropuerto::imprimirContratosVencidos(Fecha& act)
{
	return listC->imprimirContratosVencidos(act);
}

string Aeropuerto::imprimeContratos()
{
	return listC->toString();
}

string Aeropuerto::imprimirServiciosProfesionales()
{
	return listC->imprimirServiciosProfesionales();
}

string Aeropuerto::imprimirPlazosFijos()
{
	return listC->imprimirPlazosFijos();
}

string Aeropuerto::imprimirTiempoIndefinido()
{
	return listC->imprimirTiempoIndefinido();
}

string Aeropuerto::imprimirContratosConSuEmpleado()
{
	return 	listC->imprimirContratosConSuEmpleado();
}

string Aeropuerto::imprimirEmpleadosContratados()
{
	return listC->imprimirEmpleadosContratados();
}

string Aeropuerto::imprimirPilotosDeAvionesCarga()
{
	return listC->imprimirPilotosDeAvionesCarga();
}
bool Aeropuerto::existeServicioProfesional()
{
	return listC->existeServicioProfesional();
}

bool Aeropuerto::existePlazoFijo() 
{
	return listC->existePlazoFijo();
}

bool Aeropuerto::existeTiempoIndefinido()
{
	return listC->existeTiempoIndefinido();
}


bool Aeropuerto::existeServicioProfesionalConCod(string cod) 
{

	return listC->existeServicioProfesionalConCod(cod);
}

bool Aeropuerto::existePlazoFijoConCod(string cod) 
{
	return listC->existePlazoFijoConCod(cod);
}
bool Aeropuerto::existeTiempoIndefinidoConCod(string cod)
{
	return listC->existeTiempoIndefinidoConCod(cod);
}
void Aeropuerto::guardarListaContratos()
{
	listC->guardarListaContratos();
}
void Aeropuerto::leerListaContratos()
{
	listC->leerListaContratos();
}
bool Aeropuerto::ListaPlazaEstaVacio()
{
	return listP->estaVacio();
}


bool Aeropuerto::ingresaPlaza(Plaza& pla)
{
	return listP->ingresaPlaza(pla);
}

bool Aeropuerto::existePlaza(string cod)
{
	return listP->existePlaza(cod);
}

bool Aeropuerto::existePlazaParaPuesto(string pues)
{
	return listP->existePlazaParaPuesto(pues);
}

bool Aeropuerto::existePlazaDisponible(string cod, string pues)
{
	return listP->existePlazaDisponible(cod, pues);
}

Plaza* Aeropuerto::buscarPlazaPorCodigo(string cod)
{
	return listP->buscarPlazaPorCodigo(cod);
}

string Aeropuerto::imprimirPlazasDisponibles(string pues)
{
	return listP->imprimirPlazasDisponibles(pues);
}

string Aeropuerto::imprimePlazas()
{
	return listP->toString();
}

void Aeropuerto::guardarListaPlazas()
{
	listP->guardarListaPlazas();
}

void Aeropuerto::leerListaPlazas()
{
	listP->leerListaPlazas();
}
