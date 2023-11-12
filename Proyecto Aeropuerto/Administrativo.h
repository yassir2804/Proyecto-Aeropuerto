//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

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