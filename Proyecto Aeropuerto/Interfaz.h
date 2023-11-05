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

	static void msjErorrIngresar();
	static void msjExitoIngresar();
	static void msjSinEmpleados();
};
