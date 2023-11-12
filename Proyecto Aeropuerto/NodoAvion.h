//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

#pragma once
#include "AvionComercial.h"
#include "AvionCarga.h"
#include "AvionMilitar.h"
#include "ListaNodoContrato.h"

class NodoAvion {

private:
	Avion* ptrAvion;
	NodoAvion* ptrNodoAvion;

public:

	NodoAvion(Avion& ptrAv, NodoAvion* ptrNodoAv);

	//destructor
	virtual ~NodoAvion();

	//sets

	void setAvion(Avion& ptrAvi);
	void setSigAvion(NodoAvion* ptrNodoAvion);

	//gets
	Avion* getAvion();
	NodoAvion* getSigAvion();

};