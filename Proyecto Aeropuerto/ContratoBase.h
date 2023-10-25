#pragma once
#include"Empleado.h"
#include"Avion.h"
#include"Fecha.h"


class ContratoBase {
protected:
	string descPuesto;
	string codContrato;
	double salario;
	Empleado* empleado;
	Avion* avion;

public:
	//Constructores
	ContratoBase();
	ContratoBase(string desc, string cod, double sala, Avion& av, Empleado& emp );

	//Destructor
	virtual ~ContratoBase();

	//Get's
	string getDescPuesto();
	string getCodContrato();
	double getSalario();
	Empleado* getEmpleado();
	Avion* getAvion();

	//Set's
	void setDescPuesto(string desc);
	void setCodContrato(string cod);
	void setSalario(double sal);
	void setEmpleado(Empleado& emp);
	void getAvion(Avion& av);

	//toString
	virtual string toString() = 0;

};