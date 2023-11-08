#include "ContratoBase.h"



ContratoBase::ContratoBase(string desc, string cod, double sala, Avion& av, Empleado& emp, Fecha& fIng, Fecha& fCul) :descPuesto(desc), codContrato(cod), salario(sala), avion(av.copia()), empleado(emp.copia()), fIngreso(new Fecha(fIng)), fCulminacion(new Fecha(fCul))
{
}

ContratoBase::ContratoBase(string desc, string cod, double sala, Empleado& emp, Fecha& fIng, Fecha& fCul) :descPuesto(desc), codContrato(cod), salario(sala), avion(NULL), empleado(emp.copia()), fIngreso(new Fecha(fIng)), fCulminacion(new Fecha(fCul))
{
}

ContratoBase::ContratoBase(string desc, string cod, double sala, Avion& av, Empleado& emp, Fecha& fIng) :descPuesto(desc), codContrato(cod), salario(sala), avion(av.copia()), empleado(emp.copia()), fIngreso(new Fecha(fIng)), fCulminacion(NULL)
{

}

ContratoBase::ContratoBase(string desc, string cod, double sala, Empleado& emp, Fecha& fIng): descPuesto(desc), codContrato(cod), salario(sala), avion(NULL), empleado(emp.copia()), fIngreso(new Fecha(fIng)), fCulminacion(NULL)
{
}

ContratoBase::~ContratoBase()
{
	if (empleado != NULL) delete empleado;
	if (avion != NULL) delete avion;
	if (fIngreso != NULL) delete fIngreso;
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

void ContratoBase::setAceptado(bool ace)
{
}

void ContratoBase::setHorario(string hor)
{
}

bool ContratoBase::estaVencido(Fecha& actual)
{
	return false;
}

bool ContratoBase::getAceptado()
{
	return false;
}
