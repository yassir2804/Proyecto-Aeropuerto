//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

#pragma once
#include"Fecha.h"
#include"Clase-Servicios.h"
#include <iomanip>
#include <fstream>


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

	virtual void setAnchoPuerta(double ancPuer);
	virtual void setAlturaPuerta(double altPuer);
	virtual void setVelocidadMaxima(double velMax);

	virtual double areaPuerta();

	bool masDe20Anios(Fecha& act);

	virtual void guardarAvion(ofstream&) = 0;
};
