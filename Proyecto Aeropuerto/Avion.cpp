#include "Avion.h"

avion::avion()
{
	fCreado = NULL;
	distanciaRecorrida = 0.0;
}

avion::avion(Fecha& fC, double disRecorrida): distanciaRecorrida(disRecorrida)
{
	fCreado = (Fecha*)&fC;
}

avion::~avion()
{
	if (fCreado != NULL)
		delete fCreado;
}

void avion::setFechaCreacion(Fecha& fCrea)
{
	fCreado = &fCrea;
}

void avion::setDistanciaRecorrida(double dist)
{
	distanciaRecorrida = dist;
}

Fecha* avion::getFechaCreacion()
{
	return fCreado;
}

double avion::getDistanciaRecorrida()
{
	return distanciaRecorrida;
}

