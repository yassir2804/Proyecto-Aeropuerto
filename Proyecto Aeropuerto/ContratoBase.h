#pragma once
#include"Empleado.h"
#include"Avion.h"
#include"Fecha.h"


class ContratoBase {
protected:
	string descPuesto;
	string codContrato;
	double salario;
	Fecha* fIngreso;
	Fecha* fCulminacion;
	Empleado* empleado;
	Avion* avion;

public:
	//Constructor
	ContratoBase(string desc, string cod, double sala, Avion& av, Empleado& emp,Fecha& fIng, Fecha& fCul);
	ContratoBase(string desc, string cod, double sala, Empleado& emp, Fecha& fIng, Fecha& fCul);

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