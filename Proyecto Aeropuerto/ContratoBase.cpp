#include "ContratoBase.h"

contratoBase::contratoBase():codContrato(""),descPuesto(""), salario(0.0)
{
}

contratoBase::contratoBase(string desc, string cod, double sala):descPuesto(desc), codContrato(cod), salario(sala)
{
}

contratoBase::~contratoBase()
{
}

string contratoBase::getDescPuesto()
{
	return descPuesto;
}

string contratoBase::getCodContrato()
{
	return codContrato;
}

double contratoBase::getSalario()
{
	return salario;
}

void contratoBase::setDescPuesto(string desc) 
{
	descPuesto = desc;
}

void contratoBase::setCodContrato(string cod)
{
	codContrato = cod;
}

void contratoBase::setSalario(double sal)
{
	salario = sal;
}
