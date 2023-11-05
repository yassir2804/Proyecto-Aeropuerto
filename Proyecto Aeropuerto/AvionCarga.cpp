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
	s << "-------INFORMACION DEL AVION DE CARGA-------" << endl;
	s << "Numero de Placa:	" << numPlaca << endl;
	s << "Fecha de creacion:	" << fCreado->toString() << endl;
	s << "Distancia recorrida:	" << distanciaRecorrida << " Km" << endl;
	s << "Tipo de Avion:		" << tipo << endl;
	s << "Numero de Categoria:	" << categoria << endl << endl;
	s << "Categoria del avion: " << Servicio::avionCarga(categoria) << endl;
	s << "Cantidad de pasajeros: " << Servicio::avionCargaPasajeros(categoria) << endl;
	s << "Velocidad el avion: " << Servicio::avionCargaVelocidades(categoria) << " km" << endl;
	s << "*Informacion de la puerta del avion de carga*" << endl;
	s << "Ancho de la puerta de carga: " << anchoPuerta << " mts" << endl;
	s << "Altura de la puerta de carga: " << alturaPuerta << " mts" << endl;
	return s.str();
}
