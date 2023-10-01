#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class contratoBase {
protected: 
	string descPuesto;
	string codContrato;
	double salario;

public:
	//Constructores
	contratoBase();
	contratoBase(string desc, string cod, double sala);

	//Destructor
	virtual ~contratoBase();

	//get's
	string getDescPuesto();
	string getCodContrato();
	double getSalario();

	//set's

	void setDescPuesto(string desc);
	void setCodContrato(string cod);
	void setSalario(double sal);

};
