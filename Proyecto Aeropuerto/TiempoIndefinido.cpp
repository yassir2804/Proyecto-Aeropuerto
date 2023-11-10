#include "TiempoIndefinido.h"



TiempoIndefinido::TiempoIndefinido(string desc, string cod, double sala, Avion& av, Empleado& emp, Plaza& plaza, Fecha& fIng) :ContratoBase(desc, cod, sala,av,emp, fIng), ptrPlaza(plaza.copia())
{
}

TiempoIndefinido::TiempoIndefinido(string desc, string cod, double sala, Empleado& emp, Plaza& plaza, Fecha& fIng) :ContratoBase(desc, cod, sala, emp, fIng), ptrPlaza(plaza.copia())
{
}

TiempoIndefinido::~TiempoIndefinido()
{
	if (ptrPlaza != NULL)
		delete ptrPlaza;
}

void TiempoIndefinido::setPlaza(Plaza& plaza)
{
	ptrPlaza = &plaza;
}

Plaza* TiempoIndefinido::getPlaza()
{
	return ptrPlaza;
}

string TiempoIndefinido::toString()
{
	stringstream s;

	s << "-----INFORMACION DEL CONTRATO-----" << endl<<endl;
	s << "   Codigo del contrato: " << codContrato << endl;
	s << "   Descripcion del puesto: " << descPuesto << endl;
	s << "   Salario: " << salario << endl;
	if (fIngreso != NULL)
	{
		s << "   La fecha de ingreso es: " << fIngreso->toString()<<endl<<endl;
	}
	if (fCulminacion != NULL)
	{
		s << "   La fecha de cese de funciones es: " << fCulminacion->toString() << endl<<endl;
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

string TiempoIndefinido::imrprimirContratoYEmpleado()
{
	stringstream s;

	s << "-----INFORMACION DEL CONTRATO-----" << endl << endl;
	s << "   Codigo del contrato: " << codContrato << endl;
	s << "   Descripcion del puesto: " << descPuesto << endl;
	s << "   Salario: " << salario << endl;
	if (fIngreso != NULL)
	{
		s << "   La fecha de ingreso es: " << fIngreso->toString() << endl << endl;
	}
	if (fCulminacion != NULL)
	{
		s << "   La fecha de cese de funciones es: " << fCulminacion->toString() << endl << endl;
	}

	if (ptrPlaza != NULL)
	{
		s << ptrPlaza->toString();
	}

	if (empleado != NULL)
	{
		s << empleado->toString();
	}


	return s.str();
}

