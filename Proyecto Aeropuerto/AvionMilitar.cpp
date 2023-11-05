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

	s << "*-----INFORMACION DEL AVION-----*" << endl<<endl;
	s << "Numero de Placa:	" << numPlaca << "            " << endl;
	s << "Fecha de creacion:	" << fCreado->toString() << "       " << endl;
	s << "Distancia recorrida:	" << distanciaRecorrida << " Km         " << endl;
	s << "Tipo de Avion:		" << tipo << "            " << endl;
	s << "Numero de Categoria:	" << categoria << "            " << endl;
	s << "Categoria del avion:	" << Servicio::avionMilitarCategoria(categoria) << "  " << endl;
	s << "Velocidad avion:	" << Servicio::avionMilitarAlcance(categoria) << "            " << endl;
	s << "Velocidad maxima:	" << velocidadMaxima << " km/h        " << endl<<endl;
	s << "*-------------------------------*" << endl;
	return s.str();
}

Avion* AvionMilitar::copia()
{
	return new AvionMilitar(*fCreado->copia(),distanciaRecorrida,categoria,tipo,numPlaca,velocidadMaxima);
}
