#pragma once
#include"Fecha.h"
#include"Clase-Servicios.h"


class Avion {
protected:
	Fecha* fCreado;
	double distanciaRecorrida;
	string categoria;
	string tipo;
	string numPlaca;
public:
	//constructores

	Avion(Fecha& fC, double disRecorrida, string cat, string tip, string numPla);

	//Destructor
	virtual ~Avion();

	//Set's
	void setTipo(string tip);
	void setCategoria(string cat);
	void setFechaCreacion(Fecha& fC);
	void setDistanciaRecorrida(double dist);
	void setNumeroDePlaca(string numP);

	//Get's
	string getTipo();
	string getCategoria();
	Fecha* getFechaCreacion();
	double getDistanciaRecorrida();
	string getNumeroDePlaca();

	//toString
	virtual string toString() = 0;
	virtual Avion* copia() = 0;

};
