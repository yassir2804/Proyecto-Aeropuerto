#include "AvionComercial.h"

AvionComercial::AvionComercial(Fecha& fC, double dist, string cat, string numPla, string tip)
	:AvionCivil(fC, dist, cat, numPla, tip)
{

}

AvionComercial::~AvionComercial()
{
}



string AvionComercial::toString()
{
	stringstream s;

	s << "*-----INFORMACION DEL AVION COMERCIAL-----*" << endl;
	s << "|Numero de Placa:	" << numPlaca << "		  |" << endl;
	s << "|Fecha de creacion:	" << fCreado->toString() <<"|" << endl;
	s << "|Distancia recorrida:	" << distanciaRecorrida << " Km		  |" << endl;
	s << "|Tipo de Avion:		" << tipo << "	  |" << endl;
	s << "|Numero de Categoria:	" << categoria << "		  |" << endl;
	s << "|Categoria del avion:	" << Servicio::avionComercial(categoria) << "	  |" << endl;
	s << "|Cantidad de pasajeros:	" << Servicio::avionComercialPasajeros(categoria) << "		  |" << endl;
	s << "|Rango del avion:	" << Servicio::avionComercialRango(categoria) << " kms	  |" << endl;
	s << "|Velocidad del avion:	" << Servicio::avionComercialVelocidad(categoria) << " kms/h	  |" << endl;
	s << "|Precion de cada avion:	" << Servicio::avionComercialPrecio(categoria) << ".000.000$	  |" << endl;
	s << "*-----------------------------------------*" << endl;
	return s.str();

}
