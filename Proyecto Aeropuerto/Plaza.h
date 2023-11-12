//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

#pragma once
#include<iostream>
#include<sstream>
#include<fstream>

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

	void guardarPlaza(ofstream&);
	static Plaza* leerPlaza(ifstream&);
};