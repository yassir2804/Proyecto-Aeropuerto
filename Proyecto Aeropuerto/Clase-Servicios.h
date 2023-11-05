#pragma once
#include <iostream>

using namespace std;

class servicio {
public:

	static string avionCarga(string codigo);
	static string avionCargaPasajeros(string codigo); 
	static string avionCargaVelocidades(string codigo);
	static string avionComercial(string codigo);
	static int avionComercialPasajeros(string codigo);
	static double avionComercialRango(string codigo);
	static double avionComercialVelocidad(string codigo); 
	static int avionComercialPrecio(string codigo);
	static string avionMilitarCategoria(string codigo); 
	static double avionMilitarVelocidad(string codigo);
};
