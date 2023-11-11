#include "Azafata.h"

Azafata::Azafata(string no, string ce, int ed, string pues, string nac) :Tripulacion(no, ce, ed, pues), nacionalidad(nac)
{
}

Azafata::~Azafata()
{
}

void Azafata::setNacionalidad(string nac)
{
	nacionalidad = nac;
}

string Azafata::getNacionalidad()
{
	return nacionalidad;
}

string Azafata::toString()
{
	stringstream s;

	s << "*-----INFORMACION DEL EMPLEADO-----*" << endl << endl;
	s << "   Nombre: " << nombre << endl;
	s << "   Cedula: " << cedula << endl;
	s << "   Edad: " << edad << endl;
	s << "   Ocupacion: " << ocupacion << endl;
	s << "   Nacionalidad: " << nacionalidad << endl << endl;
	s << "*----------------------------------*" << endl;

	return s.str();
}

Empleado* Azafata::copia()
{
	return new Azafata(nombre, cedula, edad, ocupacion, nacionalidad);
}

void Azafata::guardarEmpleado(ofstream& file)
{
	file << "Azafata" << '\t' << nombre << '\t' << cedula << '\t' << edad << '\t' << ocupacion << '\t' << nacionalidad << '\n';
}

Empleado* Azafata::leerEmpleado(ifstream& file)
{
	string nom, ced, edS, ocu, nac;
	int ed;
	getline(file, nom, '\t');
	getline(file, ced, '\t');
	getline(file, edS, '\t');
	getline(file, ocu, '\t');
	getline(file, nac, '\n');

	stringstream e(edS);
	e >> ed;


	return new Azafata(nom, ced, ed, ocu, nac);
}
