#pragma once
#include<iostream>
#include<sstream>
#include<fstream>

using namespace std;

class Persona {
protected:
	string nombre;
	string cedula;
	int edad;
public:
	Persona();
	Persona(string nom, string ced, int ed);
	virtual ~Persona();

	string getNombre();
	string getCedula();
	int getEdad();

	void setNombre(string nom);
	void setCedula(string ced);
	void setEdad(int ed);

	virtual string toString() = 0;

};
