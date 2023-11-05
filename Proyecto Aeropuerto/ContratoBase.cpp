#include "ContratoBase.h"



ContratoBase::ContratoBase(string desc, string cod, double sala, Avion& av, Empleado& emp, Fecha& fIng, Fecha& fCul) :descPuesto(desc), codContrato(cod), salario(sala), avion((Avion*)&av), empleado((Empleado*)&emp), fIngreso(new Fecha(fIng)), fCulminacion(new Fecha(fCul))
{
}

ContratoBase::ContratoBase(string desc, string cod, double sala, Empleado& emp, Fecha& fIng, Fecha& fCul) :descPuesto(desc), codContrato(cod), salario(sala), avion(NULL), empleado((Empleado*)&emp), fIngreso(new Fecha(fIng)), fCulminacion(new Fecha(fCul))
{
}

ContratoBase::~ContratoBase()
{

}

string ContratoBase::getDescPuesto()
{
	return descPuesto;
}

string ContratoBase::getCodContrato()
{
	return codContrato;
}

double ContratoBase::getSalario()
{
	return salario;
}

Empleado* ContratoBase::getEmpleado()
{
	return empleado;
}

Avion* ContratoBase::getAvion()
{
	return avion;
}

void ContratoBase::setDescPuesto(string desc)
{
	descPuesto = desc;
}

void ContratoBase::setCodContrato(string cod)
{
	codContrato = cod;
}

void ContratoBase::setSalario(double sal)
{
	salario = sal;
}

void ContratoBase::setEmpleado(Empleado& emp)
{
	empleado = (Empleado*)&emp;

}

void ContratoBase::getAvion(Avion& av)
{
	avion = (Avion*)&av;
}
