#include "ListasPlazas.h"

ListaPlaza::ListaPlaza()
{
	primero = NULL;
}

ListaPlaza::~ListaPlaza()
{
	NodoPlaza* aux = primero;
	
	while (aux != NULL)
	{
		primero = primero->getSiguienteNodoPlaza();
		delete aux;
		aux = primero;
	}
}

bool ListaPlaza::estaVacio()
{
	return (primero == NULL);
}

bool ListaPlaza::ingresaPlaza(Plaza& pla) 
{

	NodoPlaza* aux = primero;

	if (estaVacio()) {

		primero = new NodoPlaza(pla, NULL);
		return true;
	}
	else {

		while (aux->getSiguienteNodoPlaza() != NULL) {

			aux = aux->getSiguienteNodoPlaza();

		}

		aux->setSiguienteNodoPlaza(new NodoPlaza(pla, NULL));

	}
	return false;
}

string ListaPlaza::toString()
{
	NodoPlaza* aux = primero;
	stringstream s;
	s << "--------LISTA DE PLAZAS--------" << endl << endl;
	while (aux != NULL) {
		s << aux->getPlaza()->toString(); 
		aux = aux->getSiguienteNodoPlaza();
		s << endl;
	}
	return s.str();
}
