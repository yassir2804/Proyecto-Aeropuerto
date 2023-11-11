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

bool ListaNodoContrato::existeServicioProfesional()
{
	NodoContratoBase* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getContratoBase()) == typeid(ServiciosProfesionales)) {
			return true;
		}
		aux = aux->getNodoContratoBase();
	}

	return false;
}

bool ListaNodoContrato::existePlazoFijo()
{
	NodoContratoBase* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getContratoBase()) == typeid(PlazoFijo)) {
			return true;
		}
		aux = aux->getNodoContratoBase();
	}

	return false;
}

bool ListaNodoContrato::existeTiempoIndefinido()
{
	NodoContratoBase* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getContratoBase()) == typeid(TiempoIndefinido)) {
			return true;
		}
		aux = aux->getNodoContratoBase();
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

bool ListaNodoContrato::existeServicioProfesionalConCod(string cod)
{
	NodoContratoBase* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getContratoBase()) == typeid(ServiciosProfesionales) && aux->getContratoBase()->getCodContrato() == cod ) {
			return true;
		}
		aux = aux->getNodoContratoBase();
	}

	return false;
}

bool ListaNodoContrato::existePlazoFijoConCod(string cod)
{
	NodoContratoBase* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getContratoBase()) == typeid(PlazoFijo) && aux->getContratoBase()->getCodContrato() == cod) {
			return true;
		}
		aux = aux->getNodoContratoBase();
	}

	return false;
}

bool ListaNodoContrato::existeTiempoIndefinidoConCod(string cod)
{
	NodoContratoBase* aux = primero;


	while (aux != NULL) {
		if (typeid(*aux->getContratoBase()) == typeid(TiempoIndefinido) && aux->getContratoBase()->getCodContrato() == cod) {
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

		if (typeid(*aux->getContratoBase()->getEmpleado()) == typeid(Piloto) && aux->getContratoBase()->getAvion()->getNumeroDePlaca() == pla ){
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

		if ( typeid(*aux->getContratoBase()->getEmpleado()) == typeid(Copiloto) && aux->getContratoBase()->getAvion()->getNumeroDePlaca() == pla ) {
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

		if ( typeid(*aux->getContratoBase()->getEmpleado()) == typeid(Azafata)  && aux->getContratoBase()->getAvion()->getNumeroDePlaca() == pla) {
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

		if ( typeid(*aux->getContratoBase()) == typeid(PlazoFijo) &&  aux->getContratoBase()->estaVencido(fech)) {
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

bool ListaNodoContrato::eliminarContratoPorCedula(string ced)
{
	NodoContratoBase* aux = primero;
	NodoContratoBase* anterior = NULL;

	if (!estaVacio() && aux->getContratoBase()->getEmpleado()->getCedula() == ced) {
		NodoContratoBase* actual = primero;
		if (!estaVacio()) {
			primero = actual->getNodoContratoBase();
			delete actual;
			return true;
		}
	}
	else
		if (!estaVacio()) {
			while (aux != NULL && aux->getContratoBase()->getEmpleado()->getCedula() != ced) {
				anterior = aux;
				aux = aux->getNodoContratoBase();
			}
			anterior->setNodoContratoBase(aux->getNodoContratoBase());
			delete aux;
			return true;
		}
	return false;
}

bool ListaNodoContrato::eliminarContratosVencidosNoAceptados(Fecha& act)
{
	NodoContratoBase* aux = primero;
	NodoContratoBase* anterior = NULL;
	bool eliminado = false;

	while (aux != NULL) {
		if (typeid(*aux->getContratoBase()) == typeid(PlazoFijo) && aux->getContratoBase()->getAceptado() == false && aux->getContratoBase()->estaVencido(act)) {
			NodoContratoBase* actual = aux;

			if (anterior == NULL) {

				primero = actual->getNodoContratoBase();
				aux = primero;  
			}
			else {
				
				anterior->setNodoContratoBase(actual->getNodoContratoBase());
				aux = anterior->getNodoContratoBase();  
			}

			delete actual;
			eliminado = true;
		}
		else {
			
			anterior = aux;
			aux = aux->getNodoContratoBase();
		}
	}

	return eliminado;
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

ContratoBase* ListaNodoContrato::buscarContratoPorCed(string ced)
{
	NodoContratoBase* aux = primero;


	while (aux != NULL) {

		if (aux->getContratoBase()->getEmpleado()->getCedula() == ced) {
			return  aux->getContratoBase();
		}
		aux = aux->getNodoContratoBase();

	}

	return NULL;
}

Empleado* ListaNodoContrato::buscarEmpleadoPorAvi(string pla)
{
	NodoContratoBase* aux = primero;


	while (aux != NULL) {

		if (typeid(*aux->getContratoBase()->getEmpleado()) != typeid(Administrativo) && typeid(*aux->getContratoBase()->getEmpleado()) != typeid(Miscelaneo) && aux->getContratoBase()->getAvion()->getNumeroDePlaca() == pla) {
			return  aux->getContratoBase()->getEmpleado();
		}
		aux = aux->getNodoContratoBase();

	}

	return NULL;
}

string ListaNodoContrato::imprimirServiciosProfesionales()
{
	stringstream s;

	NodoContratoBase* aux = primero;
	s << "--------LISTA DE CONTRATOS--------" << endl << endl;

	while (aux != NULL) {
		if (typeid(*aux->getContratoBase()) == typeid(ServiciosProfesionales))s << aux->getContratoBase()->toString() << endl;
		aux = aux->getNodoContratoBase();
	}

	return s.str();
}

string ListaNodoContrato::imprimirPlazosFijos()
{
	stringstream s;

	NodoContratoBase* aux = primero;
	s << "--------LISTA DE CONTRATOS--------" << endl << endl;

	while (aux != NULL) {
		if (typeid(*aux->getContratoBase()) == typeid(PlazoFijo))s << aux->getContratoBase()->toString() << endl;
		aux = aux->getNodoContratoBase();
	}

	return s.str();
}

string ListaNodoContrato::imprimirTiempoIndefinido()
{
	stringstream s;

	NodoContratoBase* aux = primero;
	s << "--------LISTA DE CONTRATOS--------" << endl << endl;

	while (aux != NULL) {
		if (typeid(*aux->getContratoBase()) == typeid(TiempoIndefinido))s << aux->getContratoBase()->toString() << endl;
		aux = aux->getNodoContratoBase();
	}

	return s.str();
}

string ListaNodoContrato::imprimirContratosVencidosAceptados(Fecha& act)
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

string ListaNodoContrato::imprimirContratosVencidos(Fecha& act)
{
	stringstream s;
	bool hayVencidos = false;

	NodoContratoBase* aux = primero;
	s << "--------LISTA DE CONTRATOS VENCIDOS--------" << endl << endl;

	while (aux != NULL) {
		if (aux->getContratoBase()->estaVencido(act)) {
			s << aux->getContratoBase()->toString() << endl;
			hayVencidos = true;
		}
		aux = aux->getNodoContratoBase();
	}

	if (hayVencidos)return s.str();
	else return "   No hay contratos vencidos\n\n";;
}

string ListaNodoContrato::imprimirContratosConSuEmpleado()
{
	stringstream s;

	NodoContratoBase* aux = primero;
	s << "--------LISTA DE CONTRATOS CON SU EMPLEADO--------" << endl << endl;

	while (aux != NULL) {
		s << aux->getContratoBase()->imrprimirContratoYEmpleado();
		aux = aux->getNodoContratoBase();
		s << endl;
	}
	return s.str();
}

string ListaNodoContrato::imprimirEmpleadosContratados()
{
	stringstream s;

	NodoContratoBase* aux = primero;
	s << "--------LISTA DE EMPLEADOS CONTRATADOS--------" << endl << endl;

	while (aux != NULL) {
		s << aux->getContratoBase()->getEmpleado()->toString();
		aux = aux->getNodoContratoBase();
		s << endl;
	}
	return s.str();
}

string ListaNodoContrato::imprimirPilotosDeAvionesCarga()
{
	stringstream s;
	bool hayPilotos = false;
	NodoContratoBase* aux = primero;
	s << "--------LISTA DE PILOTOS DE AVIONES DE CARGA--------" << endl << endl;

	while (aux != NULL) {
		if (typeid(*aux->getContratoBase()->getAvion()) == typeid(AvionCarga) && typeid(*aux->getContratoBase()->getEmpleado()) == typeid(Piloto)) {
			s << aux->getContratoBase()->getEmpleado()->toString() << endl;
			hayPilotos = true;
		}
		aux = aux->getNodoContratoBase();
	}

	if (hayPilotos)return s.str();
	else return "   No hay ningun avion de carga con piloto asignado\n\n";
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

void ListaNodoContrato::guardarListaContratos()
{
	NodoContratoBase* aux = primero;
	ofstream file;
	file.open("../ListaContratos.txt", ios::out);

	if (file.good()) {

		while (aux != NULL) {


			aux->getContratoBase()->guardarContrato(file);
			aux = aux->getNodoContratoBase();

		}
	}

	file.close();
}

void ListaNodoContrato::leerListaContratos()
{
	ContratoBase* con = NULL;
	string tipo;
	ifstream file;
	file.open("../ListaContratos.txt", ios::in);

	if (file.good()) {
		while (!file.eof()) {
			getline(file, tipo, '\t');

			if (tipo == "ServiciosProfesionales") {
				con = ServiciosProfesionales::leerContrato(file);
			}
			if (tipo == "PlazoFijo") {
				con = PlazoFijo::leerContrato(file);
			}
			if (tipo == "TiempoIndefinido") {
				con = TiempoIndefinido::leerContrato(file);
			}
			if (file.eof()) {
				break;
			}
			if (con != NULL) {
				ingresaContrato(*con);
			}
		}
	}

	file.close();
}
