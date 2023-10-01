#include "Plaza.h"

Plaza::Plaza(string codPlaza, string nomPlaza, string desc, string cod, double sala): codigoPlaza(codPlaza), nombrePlaza(nomPlaza)
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
	s << "El codigo de la plaza es el siguiente: " << codigoPlaza << endl
		<< "El nombre de la plaza es el siguiente: " << nombrePlaza << endl;
	return s.str();
}
