#pragma once
#include"ContratoBase.h"
#include"Fecha.h"

class ServiciosProfesionales : public ContratoBase {
private:
	string tipoServicio;
	string horario;
	Fecha* fInicio;
	Fecha* fCulminacion;
public:
	//Constructor
	ServiciosProfesionales(string desc, string cod, double sala, Avion& av, Empleado& emp, string tSer, string hor, Fecha& fIni, Fecha& fCul);

	//Destructor
	virtual ~ServiciosProfesionales();

	//Get's
	string getTipoServicio();
	string getHorario();
	Fecha* getFechaIngreso();
	Fecha* getFechaCulminacion();

	//Set's
	void setTipoServicio(string tSer);
	void setHorario(string hor);
	void setFechaIngreso(Fecha& fIni);
	void setFechaCulminacion(Fecha& fCulm);

	virtual string toString();


};
