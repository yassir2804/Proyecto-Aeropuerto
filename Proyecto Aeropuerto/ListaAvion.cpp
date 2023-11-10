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

Avion* ListaAvion::buscarAvionConMayorArea()
{
	NodoAvion* aux = primero;
	Avion* mayor = NULL;

	if (!estaVacio()) {
		mayor = primero->getAvion();

		while (aux != NULL) {

			if (typeid(*aux->getAvion()) == typeid(AvionCarga)) {
				if (aux->getAvion()->areaPuerta() > mayor->areaPuerta()) {
					mayor = aux->getAvion();
				}
			}
			aux = aux->getSigAvion();
		}
		if (typeid(*mayor) != typeid(AvionCarga)) {
			mayor = NULL;
		}

		return mayor;
	}
	return NULL;
}

string ListaAvion::imprimeAvionesMilitares()
{
	NodoAvion* aux = primero;
	stringstream s;

	s << "\n--------LISTA DE AVIONES--------" << endl << endl;

	while (aux != NULL) {

		if (typeid(*aux->getAvion()) == typeid(AvionMilitar))s << aux->getAvion()->toString() << endl;

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

		if ( typeid(*aux->getAvion()) == typeid(AvionCarga))s << aux->getAvion()->toString() << endl;

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

		if(typeid(*aux->getAvion()) == typeid(AvionComercial) || typeid(*aux->getAvion()) == typeid(AvionCarga))s << aux->getAvion()->toString() << endl;

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

		if (typeid(*aux->getAvion()) == typeid(AvionComercial))s << aux->getAvion()->toString() << endl;

		aux = aux->getSigAvion();

	}

	return s.str();
}

string ListaAvion::imprimirAvionesConTripulacion(ListaNodoContrato& list)
{
	stringstream s;
	NodoAvion* aux = primero;
	NodoContratoBase* aux2 = NULL;
	bool tripulacion = false;
	int contador = 0;

	s << "----------AVIONES CON SU TRIPULACION--------------" << endl;

	while (aux != NULL) {

		contador = 1;
		tripulacion = false;

		s << aux->getAvion()->toString();
		aux2 = list.getPrimero();

		while (aux2 != NULL) {
			if (aux2->getContratoBase()->getAvion()->getNumeroDePlaca() == aux->getAvion()->getNumeroDePlaca()) {
				s << "*----------TRIPULANTE "<<contador++<<"--------------*" << endl << endl
					<< aux2->getContratoBase()->getEmpleado()->toString();
				tripulacion = true; 
			}
			aux2 = aux2->getNodoContratoBase();
		}

		if (!tripulacion) {
			s <<endl<< "   No tiene tripulacion." <<endl<< endl;
		}

		aux = aux->getSigAvion();
	}

	return s.str();

}

string ListaAvion::imprimirTripulacionAvionComercial(ListaNodoContrato& list)
{
	stringstream s;
	NodoAvion* aux = primero;
	NodoContratoBase* aux2 = NULL;
	bool tripulacion = false;
	int contador = 0;

	s << "----------AVIONES COMERCIALES CON SU TRIPULACION--------------" << endl;

	while (aux != NULL) {

		if (typeid(*aux->getAvion()) == typeid(AvionComercial)) {

			contador = 1;
			tripulacion = false;
			s << aux->getAvion()->toString();
			aux2 = list.getPrimero();

			while (aux2 != NULL) {
				if (aux2->getContratoBase()->getAvion()->getNumeroDePlaca() == aux->getAvion()->getNumeroDePlaca()) {
					s << "*----------TRIPULANTE " << contador++ << "--------------*" << endl << endl
						<< aux2->getContratoBase()->getEmpleado()->toString();
					tripulacion = true;
				}
				aux2 = aux2->getNodoContratoBase();
			}

			if (!tripulacion) {
				s << endl << "   No tiene tripulacion." << endl << endl;
			}
		}

		aux = aux->getSigAvion();
	}

	return s.str();
}

string ListaAvion::imprimirAvionesDeMasDe20(Fecha& act)
{
	NodoAvion* aux = primero;
	stringstream s;

	s << "\n--------LISTA DE AVIONES DE MAS DE 20 ANIOS--------" << endl << endl;

	while (aux != NULL) {

		if (aux->getAvion()->masDe20Anios(act))s << aux->getAvion()->toString() << endl;;

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