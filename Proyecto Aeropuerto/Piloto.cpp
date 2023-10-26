#include "Piloto.h"

Piloto::Piloto(string no, string ce, int ed, string pues, int anExp) :Tripulacion(no, ce, ed, pues), aniosExp(anExp)
{
}

Piloto::~Piloto()
{
}

void Piloto::setAniosExp(int anExp)
{
	aniosExp = anExp;
}

int Piloto::getAnioExp()
{
	return aniosExp;
}

string Piloto::toString()
{
	stringstream s;

	s << "-----INFORMACION DEL PILOTO-----" << endl;
	s << "Nombre: " << nombre << endl;
	s << "Cedula: " << cedula<< endl;
	s << "Edad: " << edad<< endl;
	s << "Ocupacion: " << ocupacion << endl;
	s << "Anios Experiencia: " << aniosExp << endl;

	return s.str();
}




