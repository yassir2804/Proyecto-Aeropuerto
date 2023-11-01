#pragma once
#include <iostream>

using namespace std;

class ServicioComercial{

public:
	static string avion(string codigo){

		if (codigo == "310") { return "Airbus A310"; }
		if (codigo == "747") { return "Boeing 747"; }
		if (codigo == "767") { return "Boeing 767"; }
		if (codigo == "777") { return "Boeing 777"; }
		if (codigo == "130") { return "Concorde"; }
		if (codigo == "850") { return "DC-8-50"; }
	}
	static int AvionPasajeros(string codigo){

		if (codigo == "310") { return 250; }
		if (codigo == "747") { return 470; }
		if (codigo == "767") { return 250; }
		if (codigo == "777") { return 375; }
		if (codigo == "130") { return 130; }
		if (codigo == "850") { return 145; }
	}
	static double Rango(string codigo) {

		if (codigo == "310") { return 8300; }
		if (codigo == "747") { return 6700; }
		if (codigo == "767") { return 123000; }
		if (codigo == "777") { return 7450; }
		if (codigo == "130") { return 6400; }
		if (codigo == "850") { return 14000; }
	}
	static double Velocidad(string codigo) {

		if (codigo == "310") { return 895; }
		if (codigo == "747") { return 980; }
		if (codigo == "767") { return 885; }
		if (codigo == "777") { return 980; }
		if (codigo == "130") { return 2200; }
		if (codigo == "850") { return 875; }
	}
	static int Precio(string codigo) {

		if (codigo == "310") { return 120; }
		if (codigo == "747") { return 200; }
		if (codigo == "767") { return 120; }
		if (codigo == "777") { return 180; }
		if (codigo == "130") { return 350; }
		if (codigo == "850") { return 80; }
	}

};