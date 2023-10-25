#include "NodoEmpleado.h"

NodoEmpleado::NodoEmpleado(Empleado& ptrEmp, NodoEmpleado* ptrNodoEmp) :ptrEmpleado((Empleado*)&ptrEmp), ptrNodoEmpleado(ptrNodoEmp)
{
}

NodoEmpleado::~NodoEmpleado()
{
	if (ptrEmpleado != NULL) delete ptrEmpleado;
}

void NodoEmpleado::setEmpleado(Empleado& ptrEmp)
{
	ptrEmpleado = (Empleado*)&ptrEmp;
}

void NodoEmpleado::setSigEmpleado(NodoEmpleado* ptrNodoEmp)
{
	ptrNodoEmpleado = ptrNodoEmp;
}

Empleado* NodoEmpleado::getEmpleado()
{
	return ptrEmpleado;
}

NodoEmpleado* NodoEmpleado::getSigEmpleado()
{
	return ptrNodoEmpleado;
}
