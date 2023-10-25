#include "ListaAvion.h"

ListaAvion::ListaAvion()
{
	primero = NULL;
}

ListaAvion::~ListaAvion()
{
	NodoAvion* aux = primero;

	while (aux != NULL) {
		primero = primero->getSigAvion();
		delete aux;
		aux = primero;
	}
}

bool ListaAvion::estaVacio()
{
	return (primero == NULL);
}

bool ListaAvion::ingresaAvion(Avion& av)
{
	NodoAvion* aux = primero;

	if (estaVacio()) {

		primero = new NodoAvion(av, NULL);
		return true;
	}
	else {

		while (aux->getSigAvion() != NULL) {

			aux = aux->getSigAvion();

		}

		aux->setSigAvion(new NodoAvion(av, NULL));

	}
	return false;
}

string ListaAvion::toString()
{
	NodoAvion* aux = primero;
	stringstream s;

	s << "--------LISTA DE AVIONES--------" << endl << endl;

	while (aux != NULL) {

		s << aux->getAvion()->toString();
		aux = aux->getSigAvion();
		s << endl;

	}

	return s.str();
}