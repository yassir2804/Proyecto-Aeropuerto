//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

#pragma once
#include"ContratoBase.h"
#include"Fecha.h"

class ServiciosProfesionales : public ContratoBase {
private:
	string tipoServicio;
	string horario;

public:
	//Constructor
	ServiciosProfesionales(string desc, string cod, double sala, Avion& av, Empleado& emp, string tSer, string hor, Fecha& fIni, Fecha& fCul);
	ServiciosProfesionales(string desc, string cod, double sala, Empleado& emp, string tSer, string hor, Fecha& fIni, Fecha& fCul);

	//Destructor
	virtual ~ServiciosProfesionales();

	//Get's
	string getTipoServicio();
	string getHorario();


	//Set's
	void setTipoServicio(string tSer);
	void setHorario(string hor);


	virtual string toString();

	string imrprimirContratoYEmpleado();

	void guardarContrato(ofstream& );
	static ContratoBase* leerContrato(ifstream&);

};
