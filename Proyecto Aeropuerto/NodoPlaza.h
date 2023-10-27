#pragma once
#include"Plaza.h"
class NodoPlaza {
private:
	Plaza* ptrPlaza;
	NodoPlaza* ptrSiguente;
public:
	//Constructor

	NodoPlaza(Plaza& ptrPla, NodoPlaza* ptrNodo);

	//Destructor
	virtual ~NodoPlaza();

	//Set's
	void setPlaza(Plaza& ptrPla); 
	void setSiguienteNodoPlaza(NodoPlaza* ptrNodo);

	//Get's
	Plaza* getPlaza();
	NodoPlaza* getSiguienteNodoPlaza();
};
