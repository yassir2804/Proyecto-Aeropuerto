#include "Aeropuerto.h"

Aeropuerto::Aeropuerto(string nom, string ced, string tel): nombreE(nom),cedulaJ(ced),telefono(tel)
{
	listA = new ListaAvion();
	listE = new ListaEmpleado();
	listC = new ListaNodoContrato();
	listP = new ListaPlaza();
}

Aeropuerto::~Aeropuerto()
{
	if (listA != NULL)delete listA;
	if (listE != NULL)delete listE;
	if (listC != NULL)delete listC;
	if (listP != NULL)delete listP;
}

ListaEmpleado* Aeropuerto::getListaEmpleado()
{
	return listE;
}

ListaAvion* Aeropuerto::getListaAvion()
{
	return listA;
}

ListaNodoContrato* Aeropuerto::getListaNodoContrato()
{
	return listC;
}

ListaPlaza* Aeropuerto::getListaPlaza()
{
	return listP;
}

bool Aeropuerto::ingresarEmpleado(Empleado& emp)
{
	if (listE->ingresaEmpleado(emp))return true;
	else return false;

}

bool Aeropuerto::ingresarAvion(Avion& avi)
{
	if (listA->ingresaAvion(avi))return true;
	else return false;
}

bool Aeropuerto::ingresarContrato(ContratoBase& con)
{
	if (listC->ingresaContrato(con))return true;
	else return false;
}

bool Aeropuerto::ingresarPlaza(Plaza& pla)
{
	if (listP->ingresaPlaza(pla))return true;
	else return false;
}




