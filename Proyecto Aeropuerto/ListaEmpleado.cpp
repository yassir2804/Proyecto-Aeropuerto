#include "ListaEmpleado.h"

ListaEmpleado::ListaEmpleado()
{
	primero = NULL;
}

ListaEmpleado::~ListaEmpleado()
{
	NodoEmpleado* aux = NULL;

	aux = primero;

	while (aux != NULL)
	{
		primero = primero->getSigEmpleado();
		delete aux;
		aux = primero;

	}

}

bool ListaEmpleado::estaVacio()
{
	return (primero == NULL);
}

bool ListaEmpleado::ingresaEmpleado(Empleado& emp)
{
	NodoEmpleado* aux = primero;

	if (estaVacio()) {

		primero = new NodoEmpleado(emp, NULL);
		return true;
	}
	else {

		while (aux->getSigEmpleado() != NULL) {

			aux = aux->getSigEmpleado();

		}

		aux->setSigEmpleado(new NodoEmpleado(emp, NULL));
		return true;
	}
	return false;
}

string ListaEmpleado::toString()
{
	NodoEmpleado* aux = primero;
	stringstream s;

	s << "--------LISTA DE EMPLEADOS--------" << endl << endl;

	while (aux != NULL) {

		s << aux->getEmpleado()->toString();
		aux = aux->getSigEmpleado();
		s << endl;

	}


	return s.str();
}
