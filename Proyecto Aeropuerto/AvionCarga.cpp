#include "AvionCarga.h"



AvionCarga::AvionCarga(Fecha& fC, double dist, string cat, string numPla, string tip, double ancPuer, double altPuer) : AvionCivil(fC, dist, cat, numPla, tip), anchoPuerta(ancPuer), alturaPuerta(altPuer)
{
}

AvionCarga::~AvionCarga()
{
}

void AvionCarga::setAnchoPuerta(double ancPuer)
{
	anchoPuerta = ancPuer;
}

void AvionCarga::setAlturaPuerta(double altPuer)
{
	alturaPuerta = altPuer;
}


double AvionCarga::getAnchoPuerta()
{
	return anchoPuerta;
}

double AvionCarga::getAlturaPuerta()
{
	return alturaPuerta;
}

string AvionCarga::toString()
{
	stringstream s;
	s << "-----INFORMACION DEL AVION DE CARGA-----" << endl;
	s << "Fecha de creacion del avion: " << fCreado->toString() << endl;
	s << "Distancia recorrida: " << distanciaRecorrida << " Kilometros" << endl;
	s << "Numero de Placa: " << numeroPlaca << endl;
	s << "Tipo de Avion: " << tipo << endl;
	s << "Numero de Categoria: " << categoria << endl;

	s << "El ancho de la puerta de carga es de: " << anchoPuerta << " metros" << endl;
	s << "La altura de la puerta de carga es de: " << alturaPuerta << " metros" << endl;
	return s.str();
}
