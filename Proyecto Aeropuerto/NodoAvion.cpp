#include "NodoAvion.h"

NodoAvion::NodoAvion(Avion& ptrAv, NodoAvion* ptrNodoAv) :ptrAvion((Avion*)&ptrAv), ptrNodoAvion(ptrNodoAv)
{
}

NodoAvion::~NodoAvion()
{
	if (ptrAvion != NULL) delete ptrAvion;
}

void NodoAvion::setAvion(Avion& ptrAv)
{
	ptrAvion = (Avion*)&ptrAv;
}

void NodoAvion::setSigAvion(NodoAvion* ptrNodoAv)
{
	ptrNodoAvion = ptrNodoAv;
}

Avion* NodoAvion::getAvion()
{
	return ptrAvion;
}

NodoAvion* NodoAvion::getSigAvion()
{
	return ptrNodoAvion;
}
