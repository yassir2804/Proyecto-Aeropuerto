#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Plaza {
private:
	string codigoPlaza;
	string nombrePlaza;
public:
	//Constructor
	Plaza(string codPlaza, string nomPlaza);

	//Destructor
	virtual ~Plaza();

	//Set's

	void setCodigoPlaza(string codPla);
	void setNombrePlaza(string nomPla);

	//Get's

	string getCodigoPlaza();
	string getNombrePlaza();

	//toString
	string toString();
};