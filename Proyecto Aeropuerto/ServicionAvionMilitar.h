#pragma once
#include <iostream>

using namespace std;

class ServicioAvionMilitar {
	static string avion(string codigo) {

		if (codigo == "M300") { return "AIRBUS 300-600"; }
		if (codigo == "M130") { return "ANTONOV"; }
	}
	static double avionMilitarVelocidad(string codigo) {

		if (codigo == "M300") { return 4630; }
		if (codigo == "M130") { return 4000; }
	}
};
