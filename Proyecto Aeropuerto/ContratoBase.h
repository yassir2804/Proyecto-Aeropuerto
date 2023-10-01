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

	//Get's
	string getDescPuesto();
	string getCodContrato();
	double getSalario();

	//Set's
	void setDescPuesto(string desc);
	void setCodContrato(string cod);
	void setSalario(double sal);

	//toString
	virtual string toString() = 0;

};
