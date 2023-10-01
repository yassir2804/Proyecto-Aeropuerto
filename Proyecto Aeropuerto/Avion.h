#pragma once
#include"Fecha.h"

class avion {
protected:
	Fecha* fCreado;
	double distanciaRecorrida;
public:
	//constructores
	avion();
	avion(Fecha& fC, double disRecorrida);

	//Destructor
	virtual ~avion();

	//Set's
	void setFechaCreacion(Fecha& fCrea);
	void setDistanciaRecorrida(double dist);

	//Get's
	Fecha* getFechaCreacion();
	double getDistanciaRecorrida();

	//toString
	virtual string toString() = 0;

};
