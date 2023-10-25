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

	s << "-----INFORMACION DEL AVION COMERCIAL-----" << endl;
	s << "Fecha de creacion del avion: " << fCreado->toString() << endl;
	s << "Distancia recorrida: " << distanciaRecorrida << " Kilometros" << endl;
	s << "Numero de Placa: " << numeroPlaca << endl;
	s << "Tipo de Avion: " << tipo << endl;
	s << "Numero de Categoria: " << categoria << endl;

	return s.str();

}
