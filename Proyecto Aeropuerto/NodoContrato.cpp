#include "NodoContrato.h"

NodoContratoBase::NodoContratoBase()
{
	ptrContrato = NULL;
	ptrSiguente = NULL;
}

NodoContratoBase::NodoContratoBase(ContratoBase& ptrCon, NodoContratoBase* ptrNodo)
{
	ptrContrato = (ContratoBase*)&ptrCon;
	ptrSiguente = ptrNodo;
}

NodoContratoBase::~NodoContratoBase()
{
	if (ptrContrato != NULL)
		delete ptrContrato;
}

void NodoContratoBase::setContratoBase(ContratoBase& ptrCon)
{

	ptrContrato = (ContratoBase*)&ptrCon;
}

void NodoContratoBase::setNodoContratoBase(NodoContratoBase* ptrNodo)
{
	ptrSiguente = ptrNodo;
}

ContratoBase* NodoContratoBase::getContratoBase()
{
	return ptrContrato;
}

NodoContratoBase* NodoContratoBase::getNodoContratoBase()
{
	return ptrSiguente;
}