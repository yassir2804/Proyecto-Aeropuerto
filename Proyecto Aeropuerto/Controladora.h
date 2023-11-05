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
	void control1_2();
	void control1_3();
	void control1_4();

	void controlPiloto();
	void controlCopiloto();
	void controlAzafata();
	void controlAdministrativo();
	void controlMiscelaneo();

	void controlAvionComercial();
	void controlAvionCarga();
	void controlAvionMilitar();

	void controlServiciosProfesionales();
	void controlPlazoFijo();
	void controlTiempoIndefinido();


};