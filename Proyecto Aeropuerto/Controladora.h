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
	void control2();
	void control3();
	void control4();

	void control1_1();
	void control1_2();
	void control1_3();
	void control1_4();

	void control2_1();
	void control2_2();

	void control3_1();
	void control3_2();
	void control3_3();
	void control3_4();
	void control3_5();
	void control3_6();
	void control3_7();
	void control3_8();
	void control3_9();
	void control3_10();
	void control3_11();
	void control3_12();

	void control4_1();
	void control4_2();
	void control4_3();

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

	void controlEditarEmpleado();
	void controEditarAvion();
	void controlEditarContrato();

	void controlEditarNombre();
	void controlEditarEdad();
	void controlEditarOcupacion();
	void controlEditarAniosExp();
	void controlEditarTelefono();
	void controlEditarNacionalidad();
	void controlEditarTitulo();
	void controlEditarGradoesc();

	void controlEditarDistRecorrida();
	void controlEditarCategoria();
	void controlEditarTipo();
	void controlEditarAnchPuer();
	void controlEditarAltPuer();
	void controlEditarVelMaxima();

	void controlEditarSalario();
	void controlEditarHorario();
	void controlEditarAceptado();

	void controlEliminarEmpleado();
	void contolEliminarAvion();
	void controlEliminarContrato();


};