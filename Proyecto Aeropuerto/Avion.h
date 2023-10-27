#pragma once
#include"Fecha.h"


class Avion {
protected:
	Fecha* fCreado;
	double distanciaRecorrida;
	string categoria;
	string tipo;
	string numPlaca;
public:
	//constructores
	Avion();
	Avion(Fecha& fC, double disRecorrida, string cat, string tip);

	//Destructor
	virtual ~Avion();

	//Set's
	void setTipo(string tip);
	void setCategoria(string cat);
	void setFechaCreacion(Fecha& fC);
	void setDistanciaRecorrida(double dist);

	//Get's
	string getTipo();
	string getCategoria();
	Fecha* getFechaCreacion();
	double getDistanciaRecorrida();

	//toString
	virtual string toString() = 0;

};
