#include "Empleado.h"

Empleado::Empleado() : Persona(), puesto(""), salarioBase(0.0)
{
}

Empleado::Empleado(string no, string ce, int ed, string pues) : Persona(no, ce, ed), puesto(pues)
{
}

Empleado::~Empleado()
{
}

string Empleado::getPuesto()
{
	 return puesto; 
}

void Empleado::setPuesto(string pues)
{
	 puesto = pues; 
}

string Empleado::toString()
{
	return string();
}
