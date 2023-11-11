#pragma once
#include "EmpPlanta.h"

class Administrativo : public Planta {

protected:

	string titulo;

public:

	Administrativo(string no, string ce, int ed, string pues, string tit);
	virtual ~Administrativo();

	void setTitulo(string tit);

	string getTitulo();

	string toString();
	Empleado* copia();

	void guardarEmpleado(ofstream& file);
	static Empleado* leerEmpleado(ifstream& file);

};