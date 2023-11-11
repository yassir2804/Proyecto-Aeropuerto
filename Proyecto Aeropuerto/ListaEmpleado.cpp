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

bool ListaEmpleado::existeEmpleadoConCed(string ced)
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

bool ListaEmpleado::existePiloto()
{
	NodoEmpleado* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getEmpleado())== typeid(Piloto) ) {
			return true;
		}
		aux = aux->getSigEmpleado();
	}

	return false;
}

bool ListaEmpleado::existeCopiloto()
{
	NodoEmpleado* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getEmpleado()) == typeid(Copiloto)) {
			return true;
		}
		aux = aux->getSigEmpleado();
	}

	return false;
}

bool ListaEmpleado::existeAzafata()
{
	NodoEmpleado* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getEmpleado()) == typeid(Azafata)) {
			return true;
		}
		aux = aux->getSigEmpleado();
	}

	return false;
}

bool ListaEmpleado::existeAdministrativo()
{
	NodoEmpleado* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getEmpleado()) == typeid(Administrativo)) {
			return true;
		}
		aux = aux->getSigEmpleado();
	}

	return false;
}

bool ListaEmpleado::existeMiscelaneo()
{
	NodoEmpleado* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getEmpleado()) == typeid(Miscelaneo)) {
			return true;
		}
		aux = aux->getSigEmpleado();
	}

	return false;
}

bool ListaEmpleado::existePilotoConCed(string ced)
{
	NodoEmpleado* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getEmpleado()) == typeid(Piloto) && aux->getEmpleado()->getCedula() == ced) {
			return true;
		}
		aux = aux->getSigEmpleado();
	}

	return false;
}

bool ListaEmpleado::existeCopilotoConCed(string ced)
{
	NodoEmpleado* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getEmpleado()) == typeid(Copiloto) && aux->getEmpleado()->getCedula() == ced) {
			return true;
		}
		aux = aux->getSigEmpleado();
	}

	return false;
}


bool ListaEmpleado::existeAzafataConCed(string ced)
{
	NodoEmpleado* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getEmpleado()) == typeid(Azafata) && aux->getEmpleado()->getCedula() == ced) {
			return true;
		}
		aux = aux->getSigEmpleado();
	}

	return false;
}

bool ListaEmpleado::existeAdministrativoConCed(string ced)
{
	NodoEmpleado* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getEmpleado()) == typeid(Administrativo) && aux->getEmpleado()->getCedula() == ced) {
			return true;
		}
		aux = aux->getSigEmpleado();
	}

	return false;
}

bool ListaEmpleado::existeMiscelaneoConCed(string ced)
{
	NodoEmpleado* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getEmpleado()) == typeid(Miscelaneo) && aux->getEmpleado()->getCedula() == ced) {
			return true;
		}
		aux = aux->getSigEmpleado();
	}

	return false;
}

bool ListaEmpleado::eliminarEmpleadoPorCedula(string ced)
{
	NodoEmpleado* aux = primero;
	NodoEmpleado* anterior = NULL;

	if (!estaVacio() && aux->getEmpleado()->getCedula() == ced) {
		NodoEmpleado* actual = primero;
		if (!estaVacio()) {
			primero = actual->getSigEmpleado();
			delete actual;
			return true;
		}
	}
	else
		if (!estaVacio()) {
			while (aux != NULL && aux->getEmpleado()->getCedula() != ced) {
				anterior = aux;
				aux = aux->getSigEmpleado();
			}
			anterior->setSigEmpleado(aux->getSigEmpleado());
			delete aux;
			return true;
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

string ListaEmpleado::imprimirEmpleadoConSuAvion(ListaNodoContrato& list, string ced)
{
	stringstream s;
	NodoEmpleado* aux = primero;
	NodoContratoBase* aux2 = NULL;



	s << "----------EMPLEADO CON SU AVION--------------" << endl<<endl;

	while (aux != NULL) {


		s << buscarEmpleadoPorCed(ced)->toString();
		aux2 = list.getPrimero();

		while (aux2 != NULL) {
			if (typeid(*aux2->getContratoBase()->getEmpleado()) != typeid(Miscelaneo) && typeid(*aux2->getContratoBase()->getEmpleado()) != typeid(Administrativo) && aux2->getContratoBase()->getEmpleado()->getCedula() == ced) {
				s << aux2->getContratoBase()->getAvion()->toString();
				return s.str();
			}
			aux2 = aux2->getNodoContratoBase();
		}
			s << endl << "   No tiene avion." << endl << endl;
		
			return s.str();

		aux = aux->getSigEmpleado();
	}

	return s.str();
}

string ListaEmpleado::imprimirMiscelaneos()
{
	NodoEmpleado* aux = primero;
	stringstream s;

	s << "--------LISTA DE EMPLEADOS--------" << endl << endl;

	while (aux != NULL) {

		if (typeid(*aux->getEmpleado()) == typeid(Miscelaneo))s << aux->getEmpleado()->toString() << endl;
		aux = aux->getSigEmpleado();
	}

	return s.str();

}

string ListaEmpleado::imprimirAdministrativos()
{
	NodoEmpleado* aux = primero;
	stringstream s;

	s << "--------LISTA DE EMPLEADOS--------" << endl << endl;

	while (aux != NULL) {

		if (typeid(*aux->getEmpleado()) == typeid(Administrativo))s << aux->getEmpleado()->toString() << endl;
		aux = aux->getSigEmpleado();
	}

	return s.str();

}

string ListaEmpleado::imprimirAzafatas()
{
	NodoEmpleado* aux = primero;
	stringstream s;

	s << "--------LISTA DE EMPLEADOS--------" << endl << endl;

	while (aux != NULL) {

		if (typeid(*aux->getEmpleado()) == typeid(Azafata))s << aux->getEmpleado()->toString() << endl;
		aux = aux->getSigEmpleado();
	}

	return s.str();

}

string ListaEmpleado::imprimirCopilotos()
{
	NodoEmpleado* aux = primero;
	stringstream s;

	s << "--------LISTA DE EMPLEADOS--------" << endl << endl;

	while (aux != NULL) {

		if (typeid(*aux->getEmpleado()) == typeid(Copiloto))s << aux->getEmpleado()->toString() << endl;
		aux = aux->getSigEmpleado();
	}

	return s.str();

}

string ListaEmpleado::imprimirPilotos()
{
	NodoEmpleado* aux = primero;
	stringstream s;

	s << "--------LISTA DE EMPLEADOS--------" << endl << endl;

	while (aux != NULL) {

		if(typeid(*aux->getEmpleado()) == typeid(Piloto))s << aux->getEmpleado()->toString()<< endl;
		aux = aux->getSigEmpleado();
	}

	return s.str();
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

void ListaEmpleado::guardarListaEmpleado()
{
	NodoEmpleado* aux = primero;
	ofstream file;
	file.open("../ListaEmpleados.txt", ios::out);

	if (file.good()) {
		while (aux != NULL) {


			aux->getEmpleado()->guardarEmpleado(file);
			aux = aux->getSigEmpleado();

		}
	}

	file.close();

}

void ListaEmpleado::leerListaEmpleado()
{
	Empleado* emp = NULL;
	string tipo;
	ifstream file;
	file.open("../ListaEmpleados.txt", ios::in);

	if (file.good()) {
		while (!file.eof()) {
			getline(file, tipo, '\t');

			if (tipo == "Piloto") {
				emp = Piloto::leerEmpleado(file);
			}
			if (tipo == "Copiloto") {
				emp = Copiloto::leerEmpleado(file);
			}
			if (tipo == "Azafata") {
				emp = Azafata::leerEmpleado(file);
			}
			if (tipo == "Administrativo") {
				emp = Administrativo::leerEmpleado(file);
			}
			if (tipo == "Miscelaneo") {
				emp = Miscelaneo::leerEmpleado(file);
			}
			if (file.eof()) {
				break;
			}

			if (emp != NULL) {
				ingresaEmpleado(*emp);
			}
		}
	}

	file.close();
}
