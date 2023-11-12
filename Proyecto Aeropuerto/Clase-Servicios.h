//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

#pragma once
#include <iostream>

using namespace std;

class Servicio {
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
	static double avionMilitarAlcance(string codigo);
	static double avionMilitarCarga(string codigo);
};
