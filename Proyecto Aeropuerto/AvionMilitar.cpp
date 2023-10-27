#include "AvionMilitar.h"


AvionMilitar::AvionMilitar(Fecha& fC, double dist, string cat, string tip, string numPla, double velMax ) :Avion(fC, dist, cat, tip, numPla), velocidadMaxima(velMax)
{
}

AvionMilitar::~AvionMilitar()
{
}

void AvionMilitar::setVelocidadMaxima(double velMax)
{
	velocidadMaxima = velMax;
}


void AvionMilitar::setTipo(string tip)
{
	tipo = tip;
}

double AvionMilitar::getVelocidadMaxima()
{
	return velocidadMaxima;
}

string AvionMilitar::getTipo()
{
	return tipo;
}

string AvionMilitar::toString()
{
	stringstream s;

	s << "-----INFORMACION DEL AVION MILITAR-----" << endl;
	s << "Fecha de creacion del avion: " << fCreado->toString() << endl;
	s << "Distancia recorrida: " << distanciaRecorrida << " Kilometros" << endl;
	s << "Tipo de Avion: " << tipo << endl;
	s << "Numero de Categoria: " << categoria << endl;
	s << "Velocidad maxima: " << velocidadMaxima << " km/h" << endl;

	return s.str();
}