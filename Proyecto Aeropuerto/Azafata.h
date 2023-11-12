//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

#pragma once
#include "EmpTripulacion.h"

class Azafata : public Tripulacion {
private:

	string nacionalidad;

public:

	Azafata(string no, string ce, int ed, string pues, string nac);
	virtual ~Azafata();

	void setNacionalidad(string nac);

	string getNacionalidad();

	string toString();

	Empleado* copia();


	void guardarEmpleado(ofstream& file);
	static Empleado* leerEmpleado(ifstream& file);
};