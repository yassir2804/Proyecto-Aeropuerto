#include "tipoCarga.h"

tipoCarga::tipoCarga(Fecha& fCreado, double dist, string numPla, string tip, string ti, double ancPuer, double altPuer)
	:avionCivil(fCreado, dist, numPla, tip), tipoCar(ti), anchoPuerta(ancPuer), alturaPuerta(altPuer)
{
}

tipoCarga::~tipoCarga()
{
}

void tipoCarga::setTipo(string tip)
{
	tipo = tip;
}

void tipoCarga::setAnchoPuerta(double ancPuer)
{
	anchoPuerta = ancPuer;
}

void tipoCarga::setAlturaPuerta(double altPuer)
{
	alturaPuerta = altPuer;
}

string tipoCarga::getTipoCarga()
{
	return tipoCar;
}

double tipoCarga::getAnchoPuerta()
{
	return anchoPuerta;
}

double tipoCarga::getAlturaPuerta()
{
	return alturaPuerta;
}

string tipoCarga::toString()
{
	stringstream s;
	s << "-----INFORMACION DEL AVION DE CIVILES-----" << endl;

	s << avionCivil::toString() << endl;

	s << "El tipo de carga de este avion es: " << tipoCar << endl;
	s << "El ancho de la puerta de carga es de: " << anchoPuerta << endl;
	s << "La altura de la puerta de carga es de: " << alturaPuerta << endl;
	return s.str();
}
