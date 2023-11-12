//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

#pragma once
#include"Empleado.h"

class Tripulacion : public Empleado {

public:

	Tripulacion(string no, string ce, int ed, string pues);
	virtual ~Tripulacion();

	virtual string toString() = 0;
	virtual Empleado* copia() = 0;

	virtual void guardarEmpleado(ofstream& file) = 0;

};