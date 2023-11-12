//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

#pragma once
#include"EmpTripulacion.h"

class Piloto : public Tripulacion {
private:

	int aniosExp;

public:
	Piloto(string no, string ce, int ed, string pues, int anExp);
	virtual ~Piloto();

	void setAniosExp(int anExp);

	int getAnioExp();

	string toString();
	Empleado* copia();

	void guardarEmpleado(ofstream& file);
	static Empleado* leerEmpleado(ifstream& file);
};