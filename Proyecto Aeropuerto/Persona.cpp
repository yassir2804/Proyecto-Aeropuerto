#include "Persona.h"

Persona::Persona():nombre(""),cedula(""),edad(0)
{
}

Persona::Persona(string nom, string ced, int ed) : nombre(nom), cedula(ced), edad(ed) 
{
}

Persona::~Persona()
{
}

string Persona::getNombre()
{
	 return nombre; 
}

string Persona::getCedula()
{
	return cedula; 
}

int Persona::getEdad()
{
	return edad; 
}

void Persona::setNombre(string nom)
{
	 nombre = nom; 
}

void Persona::setCedula(string ced)
{
	 cedula = ced; 
}

void Persona::setEdad(int ed)
{
	 edad = ed; 
}



