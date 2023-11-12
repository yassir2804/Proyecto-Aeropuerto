//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jim�nez Carballo 402630944

#pragma once
#include"ContratoBase.h"
#include"Plaza.h"

class TiempoIndefinido : public ContratoBase {
private:
	Plaza* ptrPlaza;

public:
	//Constructor
	TiempoIndefinido(string desc, string cod, double sala, Avion& av, Empleado& emp, Plaza& plaza, Fecha& fIng);
	TiempoIndefinido(string desc, string cod, double sala, Empleado& emp, Plaza& plaza, Fecha& fIng);

	//Destructor
	virtual ~TiempoIndefinido();

	//Set's
	void setPlaza(Plaza& plaza);


	//Get's
	Plaza* getPlaza();


	//toString

	virtual string toString();
	string imrprimirContratoYEmpleado();

	void guardarContrato(ofstream& file);

	static ContratoBase* leerContrato(ifstream& file);

}; 
