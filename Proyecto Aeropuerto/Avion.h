#pragma once
#include"Fecha.h"


class Avion {
protected:
	Fecha* fCreado;
	double distanciaRecorrida;
	string categoria;
	string tipo;

public:
	//constructores
	Avion();
	Avion(Fecha& fC, double disRecorrida, string cat, string tip);

	//Destructor
	virtual ~Avion();

	//Set's
	void setCategoria(string cat);
	void setFechaCreacion(Fecha& fC);
	void setDistanciaRecorrida(double dist);

	//Get's
	string getCategoria();
	Fecha* getFechaCreacion();
	double getDistanciaRecorrida();

	//toString
	virtual string toString() = 0;

};
