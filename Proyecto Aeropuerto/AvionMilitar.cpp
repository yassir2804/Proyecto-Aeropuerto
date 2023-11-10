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
	s << left;
	s << "*-----INFORMACION DEL AVION-----*" << endl << endl;
	s << "   Numero de Placa:      " << setw(20) << numPlaca << "            " << endl;
	s << "   Fecha de creacion:    " << setw(20) << fCreado->toString() << "       " << endl;
	s << "   Distancia recorrida:  " << setw(0) << distanciaRecorrida << " Km         " << endl;
	s << "   Tipo de Avion:        " << setw(20) << tipo << "            " << endl;
	s << "   Numero de Categoria:  " << setw(20) << categoria << "            " << endl;
	s << "   Marca del avion:      " << setw(20) << Servicio::avionMilitarCategoria(categoria) << "  " << endl;
	s << "   Velocidad avion:      " << setw(20) << Servicio::avionMilitarAlcance(categoria) << "            " << endl;
	s << "   Carga:                " << setw(20) << Servicio::avionMilitarCarga(categoria) << "            " << endl;
	s << "   Velocidad maxima:     " << setw(0) << velocidadMaxima << " km/h        " << endl << endl;
	s << "*-------------------------------*" << endl;
	s << right;
	return s.str();
}

Avion* AvionMilitar::copia()
{
	return new AvionMilitar(*fCreado->copia(),distanciaRecorrida,categoria,tipo,numPlaca,velocidadMaxima);
}
