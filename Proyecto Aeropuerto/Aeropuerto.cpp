#include "Aeropuerto.h"

Aeropuerto::Aeropuerto(string nom, string ced, string tel): nombreE(nom),cedulaJ(ced),telefono(tel)
{
	listA = new ListaAvion();
	listE = new ListaEmpleado();
	listC = new ListaNodoContrato();
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

bool Aeropuerto::ingresarNodoContrato(ContratoBase& con)
{
	if (listC->ingresaContrato(con))return true;
	else return false;
}




