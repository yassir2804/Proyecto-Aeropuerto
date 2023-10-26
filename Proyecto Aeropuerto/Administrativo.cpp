#include "Administrativo.h"

Administrativo::Administrativo(string no, string ce, int ed, string pues, string tit) :Planta(no, ce, ed, pues), titulo(tit)
{
}

Administrativo::~Administrativo()
{
}

void Administrativo::setTitulo(string tit)
{
	titulo = tit;
}

string Administrativo::getTitulo()
{
	return titulo;
}

string Administrativo::toString()
{
	stringstream s;

	s << "-----INFORMACION DEL ADMINISTRATIVO-----" << endl;
	s << "Nombre: " << nombre << endl;
	s << "Cedula: " << cedula << endl;
	s << "Edad: " << edad << endl;
	s << "Ocupacion: " << ocupacion << endl;
	s << "Titulo: " << titulo << endl;

	return s.str();
}

