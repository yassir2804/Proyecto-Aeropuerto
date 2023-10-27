#pragma once
#include"Avion.h"

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
};
#pragma once
