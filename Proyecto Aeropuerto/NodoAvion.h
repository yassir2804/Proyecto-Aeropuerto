#pragma once
#include "AvionComercial.h"
#include "AvionCarga.h"
#include "AvionMilitar.h"

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