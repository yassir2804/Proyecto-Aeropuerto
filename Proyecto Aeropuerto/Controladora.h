#pragma once
#include "Aeropuerto.h"
#include "Interfaz.h"

class Controladora {

private:

	Aeropuerto* aeropuerto;

public:

	Controladora();
	virtual ~Controladora();
	void control0();
	int controlMenu();
	void control1();
	void control1_1();
	void controlPiloto();

};