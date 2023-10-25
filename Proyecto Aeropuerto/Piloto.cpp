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
	return string();
}




