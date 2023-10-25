#include "TiempoIndefinido.h"



TiempoIndefinido::TiempoIndefinido(string desc, string cod, double sala, Avion& av, Empleado& emp, Plaza& plaza, Fecha& fIng, Fecha& fCes) :ContratoBase(desc, cod, sala,av,emp), ptrPlaza((Plaza*)&plaza), fIngreso((Fecha*)&fIng), fCese((Fecha*)&fCes)
{
}

TiempoIndefinido::~TiempoIndefinido()
{
	if (ptrPlaza != NULL)
		delete ptrPlaza;
	if (fIngreso != NULL)
		delete fIngreso;
	if (fCese != NULL)
		delete fCese;
}

void TiempoIndefinido::setPlaza(Plaza& plaza)
{
	ptrPlaza = &plaza;
}

void TiempoIndefinido::setFechaIngreso(Fecha& fI)
{
	fIngreso = &fI;
}

void TiempoIndefinido::setFechaCese(Fecha& fC)
{
	fCese = &fC;
}

Plaza* TiempoIndefinido::getPlaza()
{
	return ptrPlaza;
}

Fecha* TiempoIndefinido::getFechaIngreso()
{
	return fIngreso;
}

Fecha* TiempoIndefinido::getFechaCese()
{
	return fCese;
}

string TiempoIndefinido::toString()
{
	stringstream s;

	s << "-----INFORMACION DEL CONTRATO DE TIEMPO INDEFINIDO-----" << endl<<endl;
	s << "Codigo del contrato: " << codContrato << endl;
	s << "Descripcion del puesto: " << descPuesto << endl;
	s << "Salario: " << salario << endl;
	if (fIngreso != NULL)
	{
		s << "La fecha de ingreso es:" << fIngreso->toString()<<endl;
	}
	if (fCese != NULL)
	{
		s << "La fecha de cese de funciones es:" << fCese->toString() << endl;
	}

	if (ptrPlaza != NULL)
	{
		s << ptrPlaza->toString();
	}

	if (empleado != NULL)
	{
		s << empleado->toString();
	}

	if (avion != NULL)
	{
		s << avion->toString();
	}




	return s.str();
}
