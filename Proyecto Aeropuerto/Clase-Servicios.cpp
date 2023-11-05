#include "Clase-Servicios.h"

string servicio::avionCarga(string codigo)
{
	if (codigo == "A319") { return "AIRBUS 319"; }
	if (codigo == "A320") { return "AIRBUS 320"; }
	if (codigo == "A321") { return "AIRBUS 321"; }
	if (codigo == "A330") { return "AIRBUS 330"; }
	if (codigo == "A340") { return "AIRBUS 340"; }
	if (codigo == "B737") { return "AIRBUS 737"; }
	if (codigo == "B777") { return "AIRBUS 777"; }
}

string servicio::avionCargaPasajeros(string codigo)
{
	if (codigo == "A319") { return "156"; }
	if (codigo == "A320") { return "220"; }
	if (codigo == "A321") { return "220"; }
	if (codigo == "A330") { return "293-335"; }
	if (codigo == "A340") { return "261-419"; }
	if (codigo == "B737") { return "215"; }
	if (codigo == "B777") { return "550"; }
}

string servicio::avionCargaVelocidades(string codigo)
{
	if (codigo == "A319") { return "27.7"; }
	if (codigo == "A320") { return "37.40"; }
	if (codigo == "A321") { return "51.70"; }
	if (codigo == "A330") { return "132.4-158.4"; }
	if (codigo == "A340") { return "168.4-207.6"; }
	if (codigo == "B737") { return "52.5"; }
	if (codigo == "B777") { return "162.0-653.0"; }
}

string servicio::avionComercial(string codigo)
{
	if (codigo == "310") { return "Airbus A310"; }
	if (codigo == "747") { return "Boeing 747"; }
	if (codigo == "767") { return "Boeing 767"; }
	if (codigo == "777") { return "Boeing 777"; }
	if (codigo == "130") { return "Concorde"; }
	if (codigo == "850") { return "DC-8-50"; }
}

int servicio::avionComercialPasajeros(string codigo)
{
	if (codigo == "310") { return 250; }
	if (codigo == "747") { return 470; }
	if (codigo == "767") { return 250; }
	if (codigo == "777") { return 375; }
	if (codigo == "130") { return 130; }
	if (codigo == "850") { return 145; }
}

double servicio::avionComercialRango(string codigo)
{
	return 0.0;
}

double servicio::avionComercialVelocidad(string codigo)
{
	return 0.0;
}

int servicio::avionComercialPrecio(string codigo)
{
	return 0;
}

string servicio::avionMilitarCategoria(string codigo)
{
	return string();
}

double servicio::avionMilitarVelocidad(string codigo)
{
	return 0.0;
}
