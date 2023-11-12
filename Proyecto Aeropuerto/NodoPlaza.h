//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

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
