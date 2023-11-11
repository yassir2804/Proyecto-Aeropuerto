#include "Fecha.h"

Fecha::Fecha() : dia(0), mes(0), anio(0)
{
}

Fecha::Fecha(int d, int m, int a) :dia(d), mes(m), anio(a)
{
}

Fecha::~Fecha()
{
}

void Fecha::setDia(int d)
{
	dia = d;
}

void Fecha::setMes(int m)
{
	mes = m;
}

void Fecha::setAnio(int a)
{
	anio = a;
}

int Fecha::getDia()
{
	return dia;
}

int Fecha::getMes()
{
	return mes;
}

int Fecha::getAnio()
{
	return anio;
}

string Fecha::toString()
{
	stringstream s;
	s << dia << "/" << mes << "/" << anio;
	return s.str();
}

Fecha* Fecha::copia()
{
	return new Fecha(dia, mes, anio);
}

void Fecha::guardarFecha(ofstream& file)
{
	file << dia << '\t' << mes << '\t' << anio << '\n';
}

Fecha* Fecha::leerFecha(ifstream& file)
{
	string diaS, mesS, anioS;
	int dia, mes, anio;
	getline(file, diaS, '\t');
	getline(file, mesS, '\t');
	getline(file, anioS, '\n');

	dia = stoi(diaS);
	mes = stoi(mesS);
	anio = stoi(anioS);

	return new Fecha(dia, mes, anio);

}