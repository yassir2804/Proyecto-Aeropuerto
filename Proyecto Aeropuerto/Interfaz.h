#pragma once
#include <iostream>
#include "Aeropuerto.h"
using namespace std;

class Interfaz {

public:

	static int menuPrincipal();
	static int menuIngresar();
	static int menuImngresarEmpleado();
	static void ingresarPiloto(Aeropuerto* ar);
	static void msjErorrIngresar();
	static void msjExitoIngresar();
};
