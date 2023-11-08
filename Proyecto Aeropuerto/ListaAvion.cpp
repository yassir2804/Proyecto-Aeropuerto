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
		return true;
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

bool ListaAvion::existeAvionCarga()
{
	NodoAvion* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getAvion()) == typeid(AvionCarga)) {
			return true;
		}
		aux = aux->getSigAvion();
	}

	return false;
}

bool ListaAvion::existeAvionMilitar()
{
	NodoAvion* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getAvion()) == typeid(AvionMilitar)) {
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

bool ListaAvion::existeAvionCargaPorPlaca(string pla)
{
	NodoAvion* aux = primero;

	while (aux != NULL) {
		if ( aux->getAvion()->getNumeroDePlaca() == pla && typeid(*aux->getAvion()) == typeid(AvionCarga)) {
			return true;
		}
		aux = aux->getSigAvion();
	}

	return false;
}

bool ListaAvion::existeAvionMilitarPorPlaca(string pla)
{
	NodoAvion* aux = primero;

	while (aux != NULL) {
		if (aux->getAvion()->getNumeroDePlaca() == pla && typeid(*aux->getAvion()) == typeid(AvionMilitar)) {
			return true;
		}
		aux = aux->getSigAvion();
	}

	return false;
}
bool ListaAvion::eliminarAvionPorPlaca(string pla)
{
	NodoAvion* aux = primero;
	NodoAvion* anterior = NULL;

	if (!estaVacio() && aux->getAvion()->getNumeroDePlaca() == pla) {
		NodoAvion* actual = primero;
		if (!estaVacio()) {
			primero = actual->getSigAvion();
			delete actual;
			return true;
		}
	}
	else
		if (!estaVacio()) {
			while (aux != NULL && aux->getAvion()->getNumeroDePlaca() != pla) {
				anterior = aux;
				aux = aux->getSigAvion();
			}
			anterior->setSigAvion(aux->getSigAvion());
			delete aux;
			return true;
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




string ListaAvion::imprimeAvionesMilitares()
{
	NodoAvion* aux = primero;
	stringstream s;

	s << "\n--------LISTA DE AVIONES--------" << endl << endl;

	while (aux != NULL) {

		if (typeid(*aux->getAvion()) == typeid(AvionMilitar))s << aux->getAvion()->toString() << endl;;

		aux = aux->getSigAvion();

	}

	return s.str();
}

string ListaAvion::imprimeAvionesCarga()
{
	NodoAvion* aux = primero;
	stringstream s;

	s << "\n--------LISTA DE AVIONES--------" << endl << endl;

	while (aux != NULL) {

		if ( typeid(*aux->getAvion()) == typeid(AvionCarga))s << aux->getAvion()->toString() << endl;;

		aux = aux->getSigAvion();

	}

	return s.str();
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