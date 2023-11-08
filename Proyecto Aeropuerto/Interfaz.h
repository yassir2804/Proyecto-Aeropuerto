#pragma once
#include <iostream>
#include "Aeropuerto.h"
using namespace std;

class Interfaz {

public:

	static int menuPrincipal();

	static int menuIngresar();

	static int menuIngresarEmpleado();
	static int menuIngresarAvion();
	static int menuIngresaContrato();
	static int menuTiempoIndefinido();

	static int menuMantenimiento();

	static int menuEditar();
	static int menuEliminar();
	
	static int menuEditarEmpleado();
	static int menuEditarAvion();
	static int menuEditarContrato();

	static int menuDeReportes();

	static void ingresarPiloto(Aeropuerto* ar);
	static void ingresarCopiloto(Aeropuerto* ar);
	static void ingresarAzafata(Aeropuerto* ar);
	static void ingresarAdministrativo(Aeropuerto* ar);
	static void ingresarMiscelaneo(Aeropuerto* ar);

	static void ingresarAvionComercial(Aeropuerto* ar);
	static void ingresarAvionCarga(Aeropuerto* ar);
	static void ingresaAvionMilitar(Aeropuerto* ar);

	static void ingresarPlaza(Aeropuerto* ar);

	static void ingresarServiciosProfesionales(Aeropuerto* ar);
	static void ingresarPlazoFijo(Aeropuerto* ar);
	static void ingresarTiempoIndefinido(Aeropuerto* ar);

	static void editarNombre(Aeropuerto* ar);
	static void editarEdad(Aeropuerto* ar);
	static void editarOcupacion(Aeropuerto* ar);
	static void editarAniosExperiencia(Aeropuerto* ar);
	static void editarTelefono(Aeropuerto* ar);
	static void editarNacionalidad(Aeropuerto* ar);
	static void editarTitulo(Aeropuerto* ar);
	static void editarGradoEscolaridad(Aeropuerto* ar);

	static void editarDisRecorrida(Aeropuerto* ar);
	static void editarCategoria(Aeropuerto* ar);
	static void editarTipo(Aeropuerto* ar);
	static void editarAnchoPuerta(Aeropuerto* ar);
	static void editarAltoPuerta(Aeropuerto* ar);
	static void editarVelocidadMaxima(Aeropuerto* ar);

	static void editarSalario(Aeropuerto* ar);
	static void editarHorario(Aeropuerto* ar);
	static void editarAceptado(Aeropuerto* ar);

	static void msjErorrIngresar();
	static void msjExitoIngresar();
	static void msjSinEmpleados();
	static void msjNoExisteCedula();
	static void msjEmpleadoAsociado();
	static void msjAvionNoDisponible();
	static void msjNoAvionPlaca();
	static void msjAvionConPiloto();
	static void msjNoAvionCivil();
	static void msjNoAvionCivilPlaca();
	static void msjAvionCopiloto();
	static void msjNoAvionComercial();
	static void msjNoAvionComercialPlaca();
	static void msjAvionComercialAzafata();
	static void msjNoAvionesDisponibles();
	static void msjNoContratosDispobibles();
	static void msjNoContratosCod();
	static void msjNoContratosVencidos();
	static void msjNoRenovarContratoCodigo();
	static void msjPlaza();
	static void msjPlazaCodigo();
	static void msjErrorEliminar();
	static void msjExitoEliminar();

};