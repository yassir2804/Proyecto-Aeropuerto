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
	static double avionComercialRango(string codigo); /*{

		if (codigo == "310") { return 8300; }
		if (codigo == "747") { return 6700; }
		if (codigo == "767") { return 123000; }
		if (codigo == "777") { return 7450; }
		if (codigo == "130") { return 6400; }
		if (codigo == "850") { return 14000; }
	}*/
	static double avionComercialVelocidad(string codigo); /*{

		if (codigo == "310") { return 895; }
		if (codigo == "747") { return 980; }
		if (codigo == "767") { return 885; }
		if (codigo == "777") { return 980; }
		if (codigo == "130") { return 2200; }
		if (codigo == "850") { return 875; }
	}*/
	static int avionComercialPrecio(string codigo); /*{

		if (codigo == "310") { return 120; }
		if (codigo == "747") { return 200; }
		if (codigo == "767") { return 120; }
		if (codigo == "777") { return 180; }
		if (codigo == "130") { return 350; }
		if (codigo == "850") { return 80; }
	}*/
	static string avionMilitarCategoria(string codigo); /*{

		if (codigo == "M300") { return "AIRBUS 300-600"; }
		if (codigo == "M130") { return "ANTONOV"; }
	}*/
	static double avionMilitarVelocidad(string codigo); /*{

		if (codigo == "M300") { return 4630; }
		if (codigo == "M130") { return 4000; }
	}*/
};
