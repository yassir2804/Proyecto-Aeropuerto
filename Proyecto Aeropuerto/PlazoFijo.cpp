#include "PlazoFijo.h"


PlazoFijo::PlazoFijo(string desc, string cod, double sala, Avion& av, Empleado& emp, Fecha& fIng, Fecha& fCul):ContratoBase(desc, cod, sala,av,emp,fIng,fCul), aceptado(true)
	{
	}

PlazoFijo::PlazoFijo(string desc, string cod, double sala, Empleado& emp, Fecha& fIng, Fecha& fCul) :ContratoBase(desc, cod, sala, emp, fIng, fCul), aceptado(true)
{
}


PlazoFijo::~PlazoFijo()
{

}

bool PlazoFijo::getAceptado()
{
	return aceptado;
}

void PlazoFijo::setAceptado(bool ace)
{
	aceptado = ace;
}

bool PlazoFijo::estaVencido(Fecha& actual)
{
	if (fCulminacion->getAnio() < actual.getAnio()) return true;
	if (fCulminacion->getAnio() == actual.getAnio() && fCulminacion->getMes() < actual.getMes()) return true;
	if (fCulminacion->getAnio() == actual.getAnio() && fCulminacion->getMes() == actual.getMes() && fCulminacion->getDia() < actual.getDia()) return true;

	return false;
}


string PlazoFijo::toString()
{
	stringstream s;

	s << "-----INFORMACION DEL CONTRATO-----" <<endl <<endl;
	s << "	Codigo del contrato:	" << codContrato << endl;
	s << "	Descripcion del puesto:	" << descPuesto << endl;
	s << "	Salario:	" << salario << endl;
	s << "	Condicion:	";

	if (aceptado)s << "Aceptado" << endl;
	else s << "Rechazado" << endl;

	if (fIngreso != NULL)
	{
		s << "La fecha de ingreso es:" << fIngreso->toString()<<endl;
	}
	if (fCulminacion != NULL)
	{
		s << "La fecha de culminacion es:" << fCulminacion->toString()<<endl;
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
