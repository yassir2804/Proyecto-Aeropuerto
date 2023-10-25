#pragma once
#include"ContratoBase.h"
class NodoContratoBase {
private:
	ContratoBase* ptrContrato;
	NodoContratoBase* ptrSiguente;
public:
	//Constructor
	NodoContratoBase();
	NodoContratoBase(ContratoBase& ptrCon, NodoContratoBase* ptrNodo);

	//Destructor
	virtual ~NodoContratoBase();

	//Set's
	void setContratoBase(ContratoBase& ptrCon);
	void setNodoContratoBase(NodoContratoBase* ptrNodo);

	//Get's
	ContratoBase* getContratoBase();
	NodoContratoBase* getNodoContratoBase();
}; 
