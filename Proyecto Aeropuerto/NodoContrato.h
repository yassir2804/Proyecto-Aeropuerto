//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jim�nez Carballo 402630944

#pragma once
#include"ContratoBase.h"
#include "TiempoIndefinido.h"
#include "PlazoFijo.h"
#include "ServiciosProfesionales.h"
#include "Azafata.h"
#include "Piloto.h"
#include "Copiloto.h"
#include "Administrativo.h"
#include "Miscelaneo.h"
#include "AvionCarga.h"



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
