//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

#pragma once
#include"AvionCivil.h"


class AvionCarga : public AvionCivil {
private:

	double anchoPuerta;
	double alturaPuerta;

public:
	//Constructor
	AvionCarga(Fecha& fC, double dist, string cat, string numPla, string tip, double ancPuer, double altPuer);

	//Destructor
	virtual ~AvionCarga();

	//Set's

	void setAnchoPuerta(double ancPuer);
	void setAlturaPuerta(double altPuer);




	//Get's
	double getAnchoPuerta();
	double getAlturaPuerta();

	double areaPuerta();

	//toString
	string toString();
	Avion* copia();

	void guardarAvion(ofstream&);
	static Avion* leerAvion(ifstream&);
}; 
