#pragma once
#include"ContratoBase.h"


class PlazoFijo : public ContratoBase {

private:

	bool aceptado;

public:
	//Constructor
	PlazoFijo(string desc, string cod, double sala, Avion& av, Empleado& emp, Fecha& fIng, Fecha& fCul);
	PlazoFijo(string desc, string cod, double sala, Empleado& emp, Fecha& fIng, Fecha& fCul);

	//Destructor
	virtual ~PlazoFijo();

	bool getAceptado();

	void setAceptado(bool ace);


	bool estaVencido(Fecha &actual);

	virtual string toString();

	string imrprimirContratoYEmpleado();

	void guardarContrato(ofstream& file);

	static ContratoBase* leerContrato(ifstream& file);


};

