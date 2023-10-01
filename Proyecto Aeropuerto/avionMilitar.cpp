#include "avionMilitar.h"

avionMilitar::avionMilitar()
	:velocidadMaxima(0.0), categoria(""), tipo(""), avion()
{
}

avionMilitar::avionMilitar(Fecha& fCreado, double dist, double velMax, string cat, string tip)
	:avion(fCreado, dist), velocidadMaxima(velMax), categoria(cat), tipo(tip)
{
}

avionMilitar::~avionMilitar()
{
}

void avionMilitar::setVelocidadMaxima(double velMax)
{
	velocidadMaxima = velMax;
}

void avionMilitar::setCategoria(string cat)
{
	categoria = cat;
}

void avionMilitar::setTipo(string tip)
{
	tipo = tip;
}

double avionMilitar::getVelocidadMaxima()
{
	return velocidadMaxima;
}

string avionMilitar::getCategoria()
{
	return categoria;
}

string avionMilitar::getTipo()
{
	return tipo;
}

string avionMilitar::toString()
{
	stringstream s;
	s << "-----INFORMACION DEL AVION MILITAR-----" << endl;
	s << "La fecha de creacion de este avion fue: " << avion::fCreado << endl; 
	s << "La distancia recorrida por este avion es de: " << avion::distanciaRecorrida << endl; 
	s << "La velocidad maxima de este avios es de: " << velocidadMaxima << endl;
	s << "La categoria de este avion es: " << categoria << endl;
	s << "El tipo de este avion militar es: " << tipo << endl;
	return string();
}
