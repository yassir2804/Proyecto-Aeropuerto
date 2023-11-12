//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

#pragma once
#include"EmpTripulacion.h"

class Copiloto : public Tripulacion {
private:

	string numTele;

public:
	Copiloto(string no, string ce, int ed, string pues, string num);
	virtual ~Copiloto();

	void setNumeroTelefono(string num);

	string getNumeroTelefono();

	string toString();

	Empleado* copia();

	void guardarEmpleado(ofstream& file);
	static Empleado* leerEmpleado(ifstream& file);

};