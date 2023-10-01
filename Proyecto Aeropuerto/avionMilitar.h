#pragma once
#include"Avion.h"

class avionMilitar : public avion {
private:
	double velocidadMaxima;
	string categoria;
	string tipo;
public:
	//Constructores
	avionMilitar();
	avionMilitar(Fecha& fCreado, double dist, double velMax, string cat, string tip);

	//Destructores
	virtual ~avionMilitar();

	//Set's
	void setVelocidadMaxima(double velMax);
	void setCategoria(string cat);
	void setTipo(string tip);

	//Get's
	double getVelocidadMaxima();
	string getCategoria();
	string getTipo();

	//toString
	string toString();
};
