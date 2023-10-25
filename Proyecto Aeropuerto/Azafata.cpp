#include "Azafata.h"

Azafata::Azafata(string no, string ce, int ed, string pues, string nac) :Tripulacion(no, ce, ed, pues), nacionalidad(nac)
{
}

Azafata::~Azafata()
{
}

void Azafata::setNacionalidad(string nac)
{
	nacionalidad = nac;
}

string Azafata::getNacionalidad()
{
	return nacionalidad;
}

string Azafata::toString()
{
	stringstream s;

	s << "-----INFORMACION DE LA AZFATA-----" << endl;
	s << "Nombre: " << nombre << endl;
	s << "Cedula: " << cedula << endl;
	s << "Edad: " << edad << endl;
	s << "Puesto: " << puesto << endl;
	s << "Nacionalidad: " << nacionalidad << endl;

	return s.str();
}