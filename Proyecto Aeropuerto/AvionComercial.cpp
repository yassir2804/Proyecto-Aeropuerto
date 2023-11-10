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

	s << left;
	s << "*-----INFORMACION DEL AVION-----*" << endl << endl;
	s << "   Numero de Placa:         " << setw(20) << numPlaca << endl;
	s << "   Fecha de creacion:       " << setw(20) << fCreado->toString() << endl;
	s << "   Distancia recorrida:     " << setw(0) << distanciaRecorrida << " Km" << endl;
	s << "   Tipo de Avion:           " << setw(10) << tipo << endl;
	s << "   Numero de Categoria:     " << setw(10) << categoria << endl;
	s << "   Marca del avion:         " << setw(20) << Servicio::avionComercial(categoria) << endl;
	s << "   Cantidad de pasajeros:   " << setw(10) << Servicio::avionComercialPasajeros(categoria) << endl;
	s << "   Rango del avion:         " << setw(0) << Servicio::avionComercialRango(categoria) << " kms" << endl;
	s << "   Velocidad del avion:     " << setw(0) << Servicio::avionComercialVelocidad(categoria) << " kms/h" << endl;
	s << "   Precio de cada avion:    " << Servicio::avionComercialPrecio(categoria) << ".000.000$" << endl << endl;
	s << "*-------------------------------*" << endl;
	s << right;

	return s.str();

}

Avion* AvionComercial::copia()
{
	return new AvionComercial(*fCreado->copia(), distanciaRecorrida, categoria, tipo, numPlaca);
}
