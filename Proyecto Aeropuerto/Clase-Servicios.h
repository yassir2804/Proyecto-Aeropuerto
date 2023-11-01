#pragma once
#include <iostream>

using namespace std;

class servicio {
public:

	static string avionCarga(string codigo) {

		if (codigo == "A319") { return "AIRBUS 319"; }
		if (codigo == "A320") { return "AIRBUS 320"; }
		if (codigo == "A321") { return "AIRBUS 321"; }
		if (codigo == "A330") { return "AIRBUS 330"; }
		if (codigo == "A340") { return "AIRBUS 340"; }
		if (codigo == "B737") { return "AIRBUS 737"; }
		if (codigo == "B777") { return "AIRBUS 777"; }
	}
	static string avionCargaPasajeros(string codigo) {
		if (codigo == "A319") { return "156"; }
		if (codigo == "A320") { return "220"; }
		if (codigo == "A321") { return "220"; }
		if (codigo == "A330") { return "293-335"; }
		if (codigo == "A340") { return "261-419"; }
		if (codigo == "B737") { return "215"; }
		if (codigo == "B777") { return "550"; }
	}

	static string avionCargaVelocidades(string codigo) {
		if (codigo == "A319") { return "27.7"; }
		if (codigo == "A320") { return "37.40"; }
		if (codigo == "A321") { return "51.70"; }
		if (codigo == "A330") { return "132.4-158.4"; }
		if (codigo == "A340") { return "168.4-207.6"; }
		if (codigo == "B737") { return "52.5"; }
		if (codigo == "B777") { return "162.0-653.0"; }

	}
	static string avionComercial(string codigo) {

		if (codigo == "310") { return "Airbus A310"; }
		if (codigo == "747") { return "Boeing 747"; }
		if (codigo == "767") { return "Boeing 767"; }
		if (codigo == "777") { return "Boeing 777"; }
		if (codigo == "130") { return "Concorde"; }
		if (codigo == "850") { return "DC-8-50"; }
	}
	static int avionComercialPasajeros(string codigo) { 

		if (codigo == "310") { return 250; }
		if (codigo == "747") { return 470; }
		if (codigo == "767") { return 250; }
		if (codigo == "777") { return 375; }
		if (codigo == "130") { return 130; }
		if (codigo == "850") { return 145; }
	} 
	static double avionComercialRango(string codigo) { 

		if (codigo == "310") { return 8300; }
		if (codigo == "747") { return 6700; }
		if (codigo == "767") { return 123000; }
		if (codigo == "777") { return 7450; }
		if (codigo == "130") { return 6400; }
		if (codigo == "850") { return 14000; }
	}
	static double avionComercialVelocidad(string codigo) { 

		if (codigo == "310") { return 895; }
		if (codigo == "747") { return 980; }
		if (codigo == "767") { return 885; }
		if (codigo == "777") { return 980; }
		if (codigo == "130") { return 2200; }
		if (codigo == "850") { return 875; }
	}
	static int avionComercialPrecio(string codigo) {  

		if (codigo == "310") { return 120; }
		if (codigo == "747") { return 200; }
		if (codigo == "767") { return 120; }
		if (codigo == "777") { return 180; }
		if (codigo == "130") { return 350; }
		if (codigo == "850") { return 80; }
	}
	static string avionMilitarCategoria(string codigo) { 

		if (codigo == "M300") { return "AIRBUS 300-600"; }
		if (codigo == "M130") { return "ANTONOV"; }
	}
	static double avionMilitarVelocidad(string codigo) {

		if (codigo == "M300") { return 4630; }
		if (codigo == "M130") { return 4000; }
	}
};
