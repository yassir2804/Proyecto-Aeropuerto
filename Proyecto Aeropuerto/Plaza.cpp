#include "Plaza.h"



Plaza::Plaza(string codPlaza, string nomPlaza, bool ocu) : codigoPlaza(codPlaza), nombrePlaza(nomPlaza),ocupada(ocu)
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

void Plaza::setOcupada(bool ocu)
{
	ocupada = ocu;
}

string Plaza::getCodigoPlaza()
{
	return codigoPlaza;
}

string Plaza::getNombrePlaza()
{
	return nombrePlaza;
}

bool Plaza::getOcupada()
{
	return ocupada;
}

string Plaza::toString()
{
	stringstream s;
	s <<"----------INFORMACION DE LA PLAZA----------\n\n"
		<<   "   Codigo de plaza:	" << codigoPlaza << endl
		<<   "   Nombre de plaza:	" << nombrePlaza << endl
		<<   "   Condicion:		";

	if (ocupada)s << "Ocupada" << endl<<endl;
	else s << "Libre" << endl<<endl;

	return s.str();
}

Plaza* Plaza::copia()
{
	return new Plaza(codigoPlaza, nombrePlaza, ocupada);
}
