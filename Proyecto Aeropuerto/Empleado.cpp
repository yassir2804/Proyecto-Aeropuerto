#include "Empleado.h"

Empleado::Empleado() : Persona(), ocupacion("")
{
}

Empleado::Empleado(string no, string ce, int ed, string ocu) : Persona(no, ce, ed), ocupacion(ocu)
{
}

Empleado::~Empleado()
{
}

string Empleado::getOcupacion()
{
	 return ocupacion; 
}

void Empleado::setOcupacion(string ocu)
{
	ocupacion = ocu;
}

string Empleado::toString()
{
	return string();
}
