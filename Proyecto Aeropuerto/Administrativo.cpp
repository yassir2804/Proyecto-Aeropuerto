#include "Administrativo.h"

Administrativo::Administrativo(string no, string ce, int ed, string pues, string tit) :Planta(no, ce, ed, pues), titulo(tit)
{
}

Administrativo::~Administrativo()
{
}

void Administrativo::setTitulo(string tit)
{
	titulo = tit;
}

string Administrativo::getTitulo()
{
	return titulo;
}

string Administrativo::toString()
{
	stringstream s;

	s << "*-----INFORMACION DEL EMPLEADO-----*" << endl << endl;
	s << "   Nombre: " << nombre << endl;
	s << "   Cedula: " << cedula << endl;
	s << "   Edad: " << edad << endl;
	s << "   Ocupacion: " << ocupacion << endl;
	s << "   Titulo: " << titulo << endl << endl;
	s << "*----------------------------------*" << endl;

	return s.str();
}

Empleado* Administrativo::copia()
{
	return new Administrativo(nombre, cedula, edad, ocupacion, titulo);
}

void Administrativo::guardarEmpleado(ofstream& file)
{
	file << "Administrativo" << '\t' << nombre << '\t' << cedula << '\t' << edad << '\t' << ocupacion << '\t' << titulo << '\n';
}

Empleado* Administrativo::leerEmpleado(ifstream& file)
{
	string nom, ced, edS, ocu, tit;
	int ed;
	getline(file, nom, '\t');
	getline(file, ced, '\t');
	getline(file, edS, '\t');
	getline(file, ocu, '\t');
	getline(file, tit, '\n');

	stringstream e(edS);
	e >> ed;


	return new Administrativo(nom, ced, ed, ocu, tit);
}

