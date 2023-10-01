#include "avionCivil.h"

avionCivil::avionCivil():numeroPlaca(""), tipo(""), avion()
{

}

avionCivil::avionCivil(Fecha& fCreado, double dist, string numPla, string tip)
	:avion(fCreado, dist), numeroPlaca(numPla), tipo(tip)
{
}

avionCivil::~avionCivil()
{
}

void avionCivil::setNumeroPlaca(string numPla)
{
	numeroPlaca = numPla;
}

void avionCivil::setTipo(string tip)
{
	tipo = tip;
}

string avionCivil::getNumeroPlaca()
{
	return numeroPlaca;
}

string avionCivil::getTipo()
{
	return tipo;
}

string avionCivil::toString()
{
	stringstream s;
	s << "-----INFORMACION DEL AVION DE CIVILES-----" << endl;
	s << "La fecha de creacion de este avion fue: " << avion::fCreado << endl;
	s << "La distancia recorrida por este avion es de: " << avion::distanciaRecorrida << endl;
	s << "El numero de placa de este avion es: " << numeroPlaca << endl;
	s << "El tipo de este avion es: " << tipo << endl;
	return s.str(); 
}
