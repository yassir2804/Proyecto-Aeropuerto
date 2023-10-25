#include "NodoContrato.h"

NodoContratoBase::NodoContratoBase()
{
	ptrContrato = NULL;
	ptrSiguente = NULL;
}

NodoContratoBase::NodoContratoBase(contratoBase& ptrCon, NodoContratoBase* ptrNodo)
{
	ptrContrato = (contratoBase*)&ptrCon;
	ptrSiguente = ptrNodo;
}

NodoContratoBase::~NodoContratoBase()
{
	if (ptrContrato != NULL)
		delete ptrContrato;
}

void NodoContratoBase::setContratoBase(contratoBase& ptrCon)
{

	ptrContrato = (contratoBase*)&ptrCon;
}

void NodoContratoBase::setNodoContratoBase(NodoContratoBase* ptrNodo)
{
	ptrSiguente = ptrNodo;
}

contratoBase* NodoContratoBase::getContratoBase()
{
	return ptrContrato;
}

NodoContratoBase* NodoContratoBase::getNodoContratoBase()
{
	return ptrSiguente;
}