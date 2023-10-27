#include "AvionCivil.h"



AvionCivil::AvionCivil(Fecha& fC, double dist, string cat, string numPla, string tip)
	:Avion(fC, dist, cat, tip, numPla)
{
}

AvionCivil::~AvionCivil()
{

}
string AvionCivil::toString()
{
	return string();
}