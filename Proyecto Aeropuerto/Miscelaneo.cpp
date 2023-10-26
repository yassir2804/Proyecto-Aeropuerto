#include "Miscelaneo.h"

Miscelaneo::Miscelaneo(string no, string ce, int ed, string pues, string gra) :Planta(no, ce, ed, pues), gradoEsc(gra)
{
}

Miscelaneo::~Miscelaneo()
{
}

void Miscelaneo::setGradoEsc(string gra)
{
	gradoEsc = gra;
}

string Miscelaneo::getGradoEsc()
{
	return gradoEsc;
}

string Miscelaneo::toString()
{
	stringstream s;

	s << "-----INFORMACION DEL MISCELANEO-----" << endl;
	s << "Nombre: " << nombre << endl;
	s << "Cedula: " << cedula << endl;
	s << "Edad: " << edad << endl;
	s << "ocupacion: " << ocupacion << endl;
	s << "Grado de Escolaridad: " << gradoEsc << endl;

	return s.str();
}
