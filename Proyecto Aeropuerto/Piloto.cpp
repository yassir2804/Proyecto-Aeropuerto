#include "Piloto.h"

Piloto::Piloto(string no, string ce, int ed, string pues, int anExp) :Tripulacion(no, ce, ed, pues), aniosExp(anExp)
{
}

Piloto::~Piloto()
{
}

void Piloto::setAniosExp(int anExp)
{
	aniosExp = anExp;
}

int Piloto::getAnioExp()
{
	return aniosExp;
}

string Piloto::toString()
{
	stringstream s;

	s << "*-----INFORMACION DEL EMPLEADO-----*" << endl<<endl;
	s << "   Nombre: " << nombre << endl;
	s << "   Cedula: " << cedula<< endl;
	s << "   Edad: " << edad<< endl;
	s << "   Ocupacion: " << ocupacion << endl;
	s << "   Anios de experiencia: " << aniosExp << endl<<endl;
	s << "*----------------------------------*" << endl;

	return s.str();
}

Empleado* Piloto::copia()
{
	return new Piloto(nombre,cedula,edad,ocupacion,aniosExp);
}

void Piloto::guardarEmpleado(ofstream& file)
{
	file << "Piloto" << '\t' << nombre << '\t' << cedula << '\t' << edad << '\t' << ocupacion << '\t' << aniosExp << '\n';
}

Empleado* Piloto::leerEmpleado(ifstream& file)
{
	string nom, ced, edS, ocu, anExpS;
	int ed, anExp;
	getline(file, nom, '\t');
	getline(file, ced, '\t');
	getline(file, edS, '\t');
	getline(file, ocu, '\t');
	getline(file, anExpS, '\n');

	ed = stoi(edS);
	anExp = stoi(anExpS);

	return new Piloto(nom, ced, ed, ocu, anExp);
}






