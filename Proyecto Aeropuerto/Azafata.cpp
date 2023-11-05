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

	s << "*-----INFORMACION DEL EMPLEADO-----*" << endl << endl;
	s << "   Nombre: " << nombre << endl;
	s << "   Cedula: " << cedula << endl;
	s << "   Edad: " << edad << endl;
	s << "   Ocupacion: " << ocupacion << endl;
	s << "   Nacionalidad: " << nacionalidad << endl << endl;
	s << "*----------------------------------*" << endl;

	return s.str();
}

Empleado* Azafata::copia()
{
	return new Azafata(nombre, cedula, edad, ocupacion, nacionalidad);
}
