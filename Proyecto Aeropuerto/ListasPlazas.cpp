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
		return true;

	}
	return false;
}

bool ListaPlaza::existePlaza(string cod)
{
	NodoPlaza* aux = primero;


	while (aux != NULL) {
		if (aux->getPlaza()->getCodigoPlaza() == cod) {
			return true;
		}
		aux = aux->getSiguienteNodoPlaza();
	}

	return false;
}

bool ListaPlaza::existePlazaParaPuesto(string pues)
{
	NodoPlaza* aux = primero;

	while (aux != NULL) {
		if (aux->getPlaza()->getNombrePlaza() == pues && aux->getPlaza()->getOcupada()== false) {
			return true;
		}
		aux = aux->getSiguienteNodoPlaza();
	}

	return false;
}

bool ListaPlaza::existePlazaDisponible(string cod, string pues)
{
	NodoPlaza* aux = primero;

	while (aux != NULL) {
		if (aux->getPlaza()->getCodigoPlaza() == cod && aux->getPlaza()->getOcupada() == false && aux->getPlaza()->getNombrePlaza() == pues) {
			return true;
		}
		aux = aux->getSiguienteNodoPlaza();
	}

	return false;
}

Plaza* ListaPlaza::buscarPlazaPorCodigo(string cod)
{
	NodoPlaza* aux = primero;


	while (aux != NULL) {

		if (aux->getPlaza()->getCodigoPlaza() == cod) {
			return  aux->getPlaza();
		}
		aux = aux->getSiguienteNodoPlaza();

	}

	return NULL;
}

string ListaPlaza::imprimirPlazasDisponibles(string pues)
{
	NodoPlaza* aux = primero;
	stringstream s;
	s << "--------LISTA DE PLAZAS DISPONIBLES--------" << endl << endl;

	while (aux != NULL) {
		
		if(aux->getPlaza()->getNombrePlaza() == pues && aux->getPlaza()->getOcupada()== false)s << aux->getPlaza()->toString() << endl;
		aux = aux->getSiguienteNodoPlaza();

	}
	return s.str();
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

void ListaPlaza::guardarListaPlazas()
{
	NodoPlaza* aux = primero;
	ofstream file;
	file.open("../ListaPlazas.txt", ios::out);

	if (file.good()) {
		while (aux != NULL) {

			aux->getPlaza()->guardarPlaza(file);
			aux = aux->getSiguienteNodoPlaza();

		}
	}

	file.close();

}

void ListaPlaza::leerListaPlazas()
{
	Plaza* pla = NULL;
	ifstream file;
	file.open("../ListaPlazas.txt", ios::in);

	if (file.good()) {
		while (!file.eof()) {

			pla = Plaza::leerPlaza(file);

			if (file.eof()) {
				break;
			}

			if (pla != NULL) {
				ingresaPlaza(*pla);
			}
		}
	}

	file.close();
}

