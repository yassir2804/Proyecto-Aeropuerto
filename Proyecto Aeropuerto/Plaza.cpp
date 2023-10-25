#include "Plaza.h"

Plaza::Plaza(string codPlaza, string nomPlaza) : codigoPlaza(codPlaza), nombrePlaza(nomPlaza)
{
}

Plaza::~Plaza()
{
}

void Plaza::setCodigoPlaza(string codPla)
{
	codigoPlaza = codPla;
}

void Plaza::setNombrePlaza(string nomPla)
{
	nombrePlaza = nomPla;
}

string Plaza::getCodigoPlaza()
{
	return codigoPlaza;
}

string Plaza::getNombrePlaza()
{
	return nombrePlaza;
}

string Plaza::toString()
{
	stringstream s;
	s <<"----------INFORMACION DE LA PLAZA----------\n"
		<< "Codigo de plaza: " << codigoPlaza << endl
		<< "Nombre de plaza: " << nombrePlaza << endl;
	return s.str();
}
