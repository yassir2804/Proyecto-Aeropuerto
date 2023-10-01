#pragma once
#include"ContratoBase.h"
class NodoContratoBase {
private:
	contratoBase* ptrContrato;
	NodoContratoBase* ptrSiguente;
public:
	//Constructor
	NodoContratoBase();
	NodoContratoBase(contratoBase& ptrCon, NodoContratoBase* ptrNodo);

	//Destructor
	virtual ~NodoContratoBase();

	//Set's
	void setContratoBase(contratoBase& ptrCon);
	void setNodoContratoBase(NodoContratoBase* ptrNodo);

	//Get's
	contratoBase* getContratoBase();
	NodoContratoBase* getNodoContratoBase();
};
