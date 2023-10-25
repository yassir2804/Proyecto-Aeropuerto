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

NodoContratoBase* ListaNodoContrato::getPrimero()
{
	return primero;
}

bool ListaNodoContrato::estaVacio()
{
	return (primero == NULL);
}

bool  ListaNodoContrato::ingresaContrato(ContratoBase* ptrContrato)
{
	NodoContratoBase* nuevoNodo = primero;

	if (estaVacio()) {
		primero = new NodoContratoBase(*ptrContrato, NULL);
		return true;
	}
	else {
		while (nuevoNodo->getNodoContratoBase() != nullptr) {
			nuevoNodo = nuevoNodo->getNodoContratoBase();
		}
		nuevoNodo->setNodoContratoBase(new NodoContratoBase(*ptrContrato, NULL));
		return true;
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