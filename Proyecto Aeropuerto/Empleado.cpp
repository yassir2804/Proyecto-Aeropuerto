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

void Empleado::setAniosExp(int anExp)
{
}

void Empleado::setNumeroTelefono(string num)
{
}

void Empleado::setNacionalidad(string num)
{
}

void Empleado::setTitulo(string num)
{
}

void Empleado::setGradoEsc(string gra)
{
}
