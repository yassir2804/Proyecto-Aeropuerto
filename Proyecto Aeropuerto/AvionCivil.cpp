#include "AvionCivil.h"

AvionCivil::AvionCivil() :numeroPlaca(""), Avion()
{

}

AvionCivil::AvionCivil(Fecha& fC, double dist, string cat, string numPla, string tip)
	:Avion(fC, dist, cat, tip), numeroPlaca(numPla)
{
}

AvionCivil::~AvionCivil()
{
}

void AvionCivil::setNumeroPlaca(string numPla)
{
	numeroPlaca = numPla;
}

void AvionCivil::setTipo(string tip)
{
	tipo = tip;
}

string AvionCivil::getNumeroPlaca()
{
	return numeroPlaca;
}

string AvionCivil::getTipo()
{
	return tipo;
}

string AvionCivil::toString()
{
	return string();
}