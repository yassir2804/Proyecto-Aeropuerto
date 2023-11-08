#include "Avion.h"


Avion::Avion(Fecha& fC, double disRecorrida, string cat, string tip, string numPla) :fCreado(new Fecha(fC)), distanciaRecorrida(disRecorrida), categoria(cat), tipo(tip), numPlaca(numPla)
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

void Avion::setNumeroDePlaca(string numP)
{
	numPlaca = numP;
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

string Avion::getNumeroDePlaca()
{
	return numPlaca;
}

void Avion::setAnchoPuerta(double ancPuer)
{
}

void Avion::setAlturaPuerta(double altPuer)
{
}

void Avion::setVelocidadMaxima(double velMax)
{
}



