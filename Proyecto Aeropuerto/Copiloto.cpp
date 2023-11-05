#include "Copiloto.h"

Copiloto::Copiloto(string no, string ce, int ed, string pues, string num) : Tripulacion(no, ce, ed, pues), numTele(num)
{
}

Copiloto::~Copiloto()
{
}

void Copiloto::setNumeroTelefono(string num)
{
	numTele = num;
}

string Copiloto::getNumeroTelefono()
{
	return numTele;
}

string Copiloto::toString()
{
	stringstream s;

	s << "*-----INFORMACION DEL EMPLEADO-----*" << endl << endl;
	s << "   Nombre: " << nombre << endl;
	s << "   Cedula: " << cedula << endl;
	s << "   Edad: " << edad << endl;
	s << "   Ocupacion: " << ocupacion << endl;
	s << "   Telefono: " << numTele << endl << endl;
	s << "*----------------------------------*" << endl;
	return s.str();
}

Empleado* Copiloto::copia()
{
	return new Copiloto(nombre, cedula, edad, ocupacion, numTele);
}
