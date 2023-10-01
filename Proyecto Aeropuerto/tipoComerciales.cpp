#include "tipoComerciales.h"

tipoComerciales::tipoComerciales(Fecha& fCreado, double dist, string numPla, string tip, string numCat)
	:avionCivil(fCreado,dist,numPla,tip), numeroCategoria(numCat)
{

}

tipoComerciales::~tipoComerciales()
{
}

void tipoComerciales::setNumeroCategoria(string numCat)
{
	numeroCategoria = numCat;
}

string tipoComerciales::getNumeroCategoria()
{
	return numeroCategoria;
}

string tipoComerciales::toString()
{
	stringstream s; 
	s << "-----INFORMACION DEL AVION DE CIVILES-----" << endl; 

	s << avionCivil::toString() << endl;

	s << "El numero de la categoria es: " << numeroCategoria << endl;
	return s.str(); 
}
