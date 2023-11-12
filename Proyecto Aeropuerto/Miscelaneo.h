//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

#pragma once
#include "EmpPlanta.h"

class Miscelaneo : public Planta {

protected:

	string gradoEsc;

public:

	Miscelaneo(string no, string ce, int ed, string pues, string gra);
	virtual ~Miscelaneo();

	void setGradoEsc(string gra);

	string getGradoEsc();

	string toString();

	Empleado* copia();

	void guardarEmpleado(ofstream& file);

	static Empleado* leerEmpleado(ifstream& file);

};