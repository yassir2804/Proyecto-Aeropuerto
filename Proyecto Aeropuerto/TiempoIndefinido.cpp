#include "TiempoIndefinido.h"

tiempoIndefinido::tiempoIndefinido(Plaza& plaza, Fecha& fIngreso, Fecha& fCulmina, string desc, string cod, double sala)
	:contratoBase(desc, cod, sala)
{
	ptrPlaza = (Plaza*)&plaza;
	ptrFechaIngreso = (Fecha*)&fIngreso;
	ptrFechaCulminacion = (Fecha*)&fCulmina;
}

tiempoIndefinido::~tiempoIndefinido()
{
	if (ptrPlaza != NULL)
		delete ptrPlaza;
	if (ptrFechaIngreso != NULL)
		delete ptrFechaIngreso;
	if (ptrFechaCulminacion != NULL)
		delete ptrFechaCulminacion;
}

void tiempoIndefinido::setPlaza(Plaza& plaza)
{
	ptrPlaza = &plaza;
}

void tiempoIndefinido::setFechaIngreso(Fecha& fI)
{
	ptrFechaIngreso = &fI;
}

void tiempoIndefinido::setFechaCulmina(Fecha& fC)
{
	ptrFechaCulminacion = &fC;
}

Plaza* tiempoIndefinido::getPlaza()
{
	return ptrPlaza;
}

Fecha* tiempoIndefinido::getFechaIngreso()
{
	return ptrFechaIngreso;
}

Fecha* tiempoIndefinido::getFechaCulmina()
{
	return ptrFechaCulminacion;
}

string tiempoIndefinido::toString()
{
	stringstream s;
	s << "----TIEMPO INDEFINIDO----" << endl
		/*<<"Informacion del contrato base: "<<endl<<descPuesto<<endl*/
		<< "La informacion de la plaza es: " << endl << ptrPlaza->toString() << endl
		<< "La fecha en la que ingreso fue: " << ptrFechaIngreso << endl
		<< "La fecha en la que culmino fue: " << ptrFechaCulminacion << endl;
	return s.str(); 
}
