#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Plaza {
private:
	string codigoPlaza;
	string nombrePlaza;
	bool ocupada;

public:
	//Constructor
	Plaza(string codPlaza, string nomPlaza,bool ocu);

	//Destructor
	virtual ~Plaza();

	//Set's

	void setCodigoPlaza(string codPla);
	void setNombrePlaza(string nomPla);
	void setOcupada(bool ocu);

	//Get's

	string getCodigoPlaza();
	string getNombrePlaza();
	bool getOcupada();

	//toString
	string toString();


	Plaza* copia();
};