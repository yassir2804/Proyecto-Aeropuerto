#pragma once
#include <iostream>

using namespace std;

class ServicioComercial{

public:
	static string avion(string codigo);
	static int Pasajeros(string codigo);
	static double Rango(string codigo);
	static double Velocidad(string codigo);
	static int Precio(string codigo);

};