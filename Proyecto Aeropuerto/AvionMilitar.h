//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jim�nez Carballo 402630944

#pragma once
#include"Avion.h"
#include"Clase-Servicios.h"

class AvionMilitar : public Avion {
private:
	double velocidadMaxima;

public:
	//Constructores
	AvionMilitar(Fecha& fC, double dist, string cat,  string tip, string numPla, double velMax);

	//Destructores
	virtual ~AvionMilitar();

	//Set's
	void setVelocidadMaxima(double velMax);
	void setTipo(string tip);

	//Get's
	double getVelocidadMaxima();
	string getTipo();

	//toString
	string toString();

	Avion* copia();

	void guardarAvion(ofstream&);
	static Avion* leerAvion(ifstream&);
};
#pragma once
