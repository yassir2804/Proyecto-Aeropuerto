#include "NodoPlaza.h"

NodoPlaza::NodoPlaza()
{
	ptrPlaza = NULL;
	ptrSiguente = NULL;
}

NodoPlaza::NodoPlaza(Plaza& ptrPla, NodoPlaza* ptrNodo)
{
	ptrPlaza = (Plaza*)&ptrPla;
	ptrSiguente = ptrNodo;
}

NodoPlaza::~NodoPlaza()
{
	if (ptrPlaza != NULL)
		delete ptrPlaza;
}

void NodoPlaza::setPlaza(Plaza& ptrPla) 
{
	ptrPlaza = (Plaza*)&ptrPlaza;
}

void NodoPlaza::setSiguienteNodoPlaza(NodoPlaza* ptrNodo)
{
	ptrSiguente = ptrNodo;
}

Plaza* NodoPlaza::getPlaza()
{
	return ptrPlaza;
}

NodoPlaza* NodoPlaza::getSiguienteNodoPlaza()
{
	return ptrSiguente;
}
