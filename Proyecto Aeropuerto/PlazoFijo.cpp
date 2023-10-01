#include "PlazoFijo.h"

PlazoFijo::PlazoFijo(string desc, string cod, double sala, Fecha& fIng, Fecha& fCul) : contratoBase(desc,cod,sala)
{
	fIngreso = (Fecha*)&fIng;
	fCulminacion = (Fecha*)&fCul;
}

PlazoFijo::~PlazoFijo() 
{
	if (fIngreso != NULL)
		delete fIngreso;
	if (fCulminacion != NULL)
		delete fCulminacion;
}

void PlazoFijo::setFechaIngreso(Fecha& fIng)
{
	fIngreso = &fIng;
}

void PlazoFijo::setFechaCulminacion(Fecha& fCulm)
{
	fCulminacion = &fCulm;
}

Fecha* PlazoFijo::getFechaIngreso()
{
	return fIngreso;
}

Fecha* PlazoFijo::getFechaCulminacion()
{
	return fCulminacion;
}

string PlazoFijo::toString()
{
	stringstream s;
	return s.str();
}
