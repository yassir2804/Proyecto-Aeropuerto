#pragma once
#include"Empleado.h"
#include"Avion.h"
#include"Fecha.h"
#include"Piloto.h"
#include"Copiloto.h"
#include"Azafata.h"
#include"Administrativo.h"
#include "Miscelaneo.h"
#include "AvionComercial.h"
#include "AvionCarga.h"
#include "AvionMilitar.h"

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
	ContratoBase(string desc, string cod, double sala, Avion& av, Empleado& emp,Fecha& fIng, Fecha& fCul);//Constructor con avion para empleados de tripulacion
	ContratoBase(string desc, string cod, double sala, Empleado& emp, Fecha& fIng, Fecha& fCul);//Constructuro sin avion para empleados de planta

	//Cosntrctores sin fecha de cese para los contratos de tiempo indefinido

	ContratoBase(string desc, string cod, double sala, Avion& av, Empleado& emp, Fecha& fIng);
	ContratoBase(string desc, string cod, double sala, Empleado& emp, Fecha& fIng);

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
	void setAvion(Avion& av);
	void setFechaIngreso(Fecha& fech);
	void setFechaCulminacion(Fecha& fech);

	virtual bool estaVencido(Fecha& actual);
	virtual bool getAceptado();

	virtual void setAceptado(bool ace);

	virtual void setHorario(string hor);


	//toString
	virtual string imrprimirContratoYEmpleado()=0;
	virtual string toString() = 0;


	virtual void guardarContrato(ofstream& file)=0;

};