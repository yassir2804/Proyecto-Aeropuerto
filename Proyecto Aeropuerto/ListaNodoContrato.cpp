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

bool ListaNodoContrato::esVacio()
{
	return (primero == NULL);
}

bool  ListaNodoContrato::ingresaContrato(NodoContratoBase* ptrContrato) 
{
	NodoContratoBase* nuevoNodo = new NodoContratoBase(ptrContrato, nullptr);

	if (esVacio()) {
		primero = nuevoNodo;
	}
	else {
		NodoContratoBase* aux = primero;
		while (aux->getNodoContratoBase() != nullptr) {
			aux = aux->getNodoContratoBase();
		}
		aux->setNodoContratoBase(nuevoNodo);
	}
}

bool ListaNodoContrato::eliminaContrato()
{
	return false;
}

string ListaNodoContrato::toString()
{
	return string();
}
