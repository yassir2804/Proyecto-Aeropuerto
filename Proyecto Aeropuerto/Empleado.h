#pragma once
#include "Persona.h"

class Empleado :public Persona {
protected:
	string ocupacion;
public:
	Empleado(); 
	Empleado(string no, string ce, int ed, string ocu);
	virtual ~Empleado();
		
	string getOcupacion();

	void setOcupacion(string ocu);

	virtual string toString() = 0;
	virtual Empleado* copia() = 0;

	virtual void setAniosExp(int anExp);
	virtual void setNumeroTelefono(string num);
	virtual void setNacionalidad(string num);
	virtual void setTitulo(string num);
	virtual void setGradoEsc(string gra);

	virtual void guardarEmpleado(ofstream& file)=0;


};