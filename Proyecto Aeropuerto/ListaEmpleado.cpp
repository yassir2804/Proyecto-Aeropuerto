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

bool ListaEmpleado::existeEmpleado(string ced)
{
	NodoEmpleado* aux = primero;
	

	while (aux != NULL) {
		if (aux->getEmpleado()->getCedula() == ced) {
			return true;
		}
		aux = aux->getSigEmpleado();
	}

	return false;
}

Empleado* ListaEmpleado::buscarEmpleadoPorCed(string ced)
{

	NodoEmpleado* aux = primero;


	while (aux != NULL) {

		if (aux->getEmpleado()->getCedula() == ced) {
			return  aux->getEmpleado();
		}
		aux = aux->getSigEmpleado();

	}

	return NULL;
	
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
