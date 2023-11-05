#include "ListaNodoContrato.h"

ListaNodoContrato::ListaNodoContrato()
{
	primero = NULL;
}

ListaNodoContrato::~ListaNodoContrato()
{
	NodoContratoBase* aux = primero;
	while (aux != NULL) {
		primero = primero->getNodoContratoBase();
		delete aux;
		aux = primero;
	}
}


bool ListaNodoContrato::estaVacio()
{
	return (primero == NULL);
}

bool  ListaNodoContrato::ingresaContrato(ContratoBase& ptrContrato)
{
	NodoContratoBase* nuevoNodo = primero;

	if (estaVacio()) {
		primero = new NodoContratoBase(ptrContrato, NULL);
		return true;
	}
	else {
		while (nuevoNodo->getNodoContratoBase() != nullptr) {
			nuevoNodo = nuevoNodo->getNodoContratoBase();
		}
		nuevoNodo->setNodoContratoBase(new NodoContratoBase(ptrContrato, NULL));
		return true;
	}
	return false;
}

bool ListaNodoContrato::existeContrato(string cod)
{
	NodoContratoBase* aux = primero;


	while (aux != NULL) {
		if (aux->getContratoBase()->getCodContrato() == cod) {
			return true;
		}
		aux = aux->getNodoContratoBase();
	}

	return false;
}

bool ListaNodoContrato::existeContratoConEmpleado(string ced)
{
	NodoContratoBase* aux = primero;


	while (aux != NULL) {

		if (aux->getContratoBase()->getEmpleado()->getCedula() == ced) {
			return true;
		}
		aux = aux->getNodoContratoBase();

	}

	return false;
}

bool ListaNodoContrato::existeAvionConPiloto(string pla)
{
	NodoContratoBase* aux = primero;


	while (aux != NULL) {

		if (aux->getContratoBase()->getAvion()->getNumeroDePlaca() == pla && typeid(*aux->getContratoBase()->getEmpleado()) == typeid(Piloto)){
			return true;
		}
		aux = aux->getNodoContratoBase();

	}

	return false;
}

bool ListaNodoContrato::existeAvionConCopiloto(string pla)
{
	NodoContratoBase* aux = primero;


	while (aux != NULL) {

		if (aux->getContratoBase()->getAvion()->getNumeroDePlaca() == pla && typeid(*aux->getContratoBase()->getEmpleado()) == typeid(Copiloto)) {
			return true;
		}
		aux = aux->getNodoContratoBase();

	}

	return false;
}

bool ListaNodoContrato::existeAvionConAzafata(string pla)
{
	NodoContratoBase* aux = primero;


	while (aux != NULL) {

		if (aux->getContratoBase()->getAvion()->getNumeroDePlaca() == pla && typeid(*aux->getContratoBase()->getEmpleado()) == typeid(Azafata)) {
			return true;
		}
		aux = aux->getNodoContratoBase();

	}

	return false;
}

bool ListaNodoContrato::existenContratosVencidos(Fecha& fech)
{
	NodoContratoBase* aux = primero;


	while (aux != NULL) {

		if (aux->getContratoBase()->estaVencido(fech)) {
			return true;
		}
		aux = aux->getNodoContratoBase();

	}

	return false;
}

bool ListaNodoContrato::eliminaContratoPorCodigo(string cod)
{
	NodoContratoBase* aux = primero;
	NodoContratoBase* anterior = NULL;

	if (!estaVacio() && aux->getContratoBase()->getCodContrato() == cod) {
		NodoContratoBase* actual = primero;
		if (!estaVacio()) {
			primero = actual->getNodoContratoBase();
			delete actual;
			return true;
		}
	}
	else
		if (!estaVacio()) {
			while (aux != NULL && aux->getContratoBase()->getCodContrato() != cod) {
				anterior = aux;
				aux = aux->getNodoContratoBase();
			}
			anterior->setNodoContratoBase(aux->getNodoContratoBase());
			delete aux;
			return true;
		}
	return false;
}

bool ListaNodoContrato::existeContratoVencidoConCod(Fecha& fech, string cod)
{
	NodoContratoBase* aux = primero;

	while (aux != NULL) {

		if (aux->getContratoBase()->getCodContrato() == cod && aux->getContratoBase()->estaVencido(fech) && aux->getContratoBase()->getAceptado()) {
			return true;
		}
		aux = aux->getNodoContratoBase();

	}

	return false;
}

ContratoBase* ListaNodoContrato::buscarContratoPorCod(string cod)
{
	NodoContratoBase* aux = primero;


	while (aux != NULL) {

		if (aux->getContratoBase()->getCodContrato() == cod) {
			return  aux->getContratoBase();
		}
		aux = aux->getNodoContratoBase();

	}

	return NULL;
}

string ListaNodoContrato::imprimirContratosVencidos(Fecha& act)
{
	stringstream s;

	NodoContratoBase* aux = primero;
	s << "--------LISTA DE CONTRATOS VENCIDOS--------" << endl << endl;

	while (aux != NULL) {
		if(aux->getContratoBase()->estaVencido(act) && aux->getContratoBase()->getAceptado())s << aux->getContratoBase()->toString() << endl;
		aux = aux->getNodoContratoBase();
	}

	return s.str();
}

string ListaNodoContrato::toString()
{
	stringstream s;

	NodoContratoBase* aux = primero;
	s << "--------LISTA DE CONTRATOS--------" << endl << endl;

	while (aux != NULL) {
		s << aux->getContratoBase()->toString();
		aux = aux->getNodoContratoBase();
		s << endl;
	}
	return s.str();

}