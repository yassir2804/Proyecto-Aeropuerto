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

bool ListaAvion::existeAvionCivil()
{
	NodoAvion* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getAvion()) == typeid(AvionCarga) || typeid(*aux->getAvion()) == typeid(AvionComercial)) {
			return true;
		}
		aux = aux->getSigAvion();
	}

	return false;
}

bool ListaAvion::existeAvionComercial()
{
	NodoAvion* aux = primero;


	while (aux != NULL) {
		if ( typeid(*aux->getAvion()) == typeid(AvionComercial)) {
			return true;
		}
		aux = aux->getSigAvion();
	}

	return false;
}

bool ListaAvion::existeAvionPorPlaca(string pla)
{
	NodoAvion* aux = primero;


	while (aux != NULL) {
		if (aux->getAvion()->getNumeroDePlaca() == pla) {
			return true;
		}
		aux = aux->getSigAvion();
	}

	return false;
}

bool ListaAvion::existeAvionCivilPorPlaca(string pla)
{
	NodoAvion* aux = primero;


	while (aux != NULL) {
		if (aux->getAvion()->getNumeroDePlaca() == pla && (typeid(*aux->getAvion()) == typeid(AvionCarga) || typeid(*aux->getAvion()) == typeid(AvionComercial))) {
			return true;
		}
		aux = aux->getSigAvion();
	}

	return false;
}

bool ListaAvion::existeAvionComercialPorPlaca(string pla)
{
	NodoAvion* aux = primero;

	while (aux != NULL) {
		if (aux->getAvion()->getNumeroDePlaca() == pla && ( typeid(*aux->getAvion()) == typeid(AvionComercial))) {
			return true;
		}
		aux = aux->getSigAvion();
	}

	return false;
}

Avion* ListaAvion::buscarAvionPorPlaca(string pla)
{

	NodoAvion* aux = primero;


	while (aux != NULL) {

		if (aux->getAvion()->getNumeroDePlaca() == pla) {
			return  aux->getAvion();
		}
		aux = aux->getSigAvion();

	}

	return NULL;
}




string ListaAvion::imprimeAvionesCiviles()
{
	NodoAvion* aux = primero;
	stringstream s;

	s << "\n--------LISTA DE AVIONES--------" << endl << endl;

	while (aux != NULL) {

		if(typeid(*aux->getAvion()) == typeid(AvionComercial) || typeid(*aux->getAvion()) == typeid(AvionCarga))s << aux->getAvion()->toString() << endl;;

		aux = aux->getSigAvion();

	}

	return s.str();
}

string ListaAvion::imprimeAvionesComerciales()
{
	NodoAvion* aux = primero;
	stringstream s;

	s << "\n--------LISTA DE AVIONES--------" << endl << endl;

	while (aux != NULL) {

		if (typeid(*aux->getAvion()) == typeid(AvionComercial))s << aux->getAvion()->toString() << endl;;

		aux = aux->getSigAvion();

	}

	return s.str();
}

string ListaAvion::toString()
{
	NodoAvion* aux = primero;
	stringstream s;

	s << "\n--------LISTA DE AVIONES--------" << endl << endl;

	while (aux != NULL) {

		s << aux->getAvion()->toString();
		aux = aux->getSigAvion();
		s << endl;

	}

	return s.str();
}