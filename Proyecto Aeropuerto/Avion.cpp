#include "Avion.h"


Avion::Avion(Fecha& fC, double disRecorrida, string cat, string tip) :fCreado(new Fecha(fC)), distanciaRecorrida(disRecorrida), categoria(cat), tipo(tip)
{
}

Avion::~Avion()
{
	if (fCreado != NULL)
		delete fCreado;
}

void Avion::setTipo(string tip)
{
	tipo = tip;
}

void Avion::setCategoria(string cat)
{
	categoria = cat;
}

void Avion::setFechaCreacion(Fecha& fC)
{
	fCreado = &fC;
}

void Avion::setDistanciaRecorrida(double dist)
{
	distanciaRecorrida = dist;
}

string Avion::getTipo()
{
	return tipo;
}

string Avion::getCategoria()
{
	return categoria;
}

Fecha* Avion::getFechaCreacion()
{
	return fCreado;
}

double Avion::getDistanciaRecorrida()
{
	return distanciaRecorrida;
}