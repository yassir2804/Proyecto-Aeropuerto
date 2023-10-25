#include "ServiciosProfesionales.h"


ServiciosProfesionales::ServiciosProfesionales(string desc, string cod, double sala, Avion& av, Empleado& emp,string tSer, string hor, Fecha& fIni, Fecha& fCul) :ContratoBase(desc, cod, sala, av, emp),tipoServicio(tSer),horario(hor), fInicio(new Fecha(fIni)), fCulminacion(new Fecha(fCul))
{
}


ServiciosProfesionales::~ServiciosProfesionales()
{
	if (fInicio != NULL)
		delete fInicio;
	if (fCulminacion != NULL)
		delete fCulminacion;
}

void ServiciosProfesionales::setTipoServicio(string tSer)
{
	tipoServicio = tSer;
}

void ServiciosProfesionales::setHorario(string hor)
{
	horario = hor;
}

void ServiciosProfesionales::setFechaIngreso(Fecha& fIng)
{
	fInicio = &fIng;
}

void ServiciosProfesionales::setFechaCulminacion(Fecha& fCulm)
{
	fCulminacion = &fCulm;
}


string ServiciosProfesionales::getTipoServicio()
{
	return tipoServicio;
}

string ServiciosProfesionales::getHorario()
{
	return horario;
}

Fecha* ServiciosProfesionales::getFechaIngreso()
{
	return fInicio;
}

Fecha* ServiciosProfesionales::getFechaCulminacion()
{
	return fCulminacion;
}

string ServiciosProfesionales::toString()
{
	stringstream s;

	s << "-----INFORMACION DEL CONTRATO DE SERVICIOS PROFESIONALES-----" << endl << endl;
	s << "Codigo del contrato: " << codContrato << endl;
	s << "Descripcion del puesto: " << descPuesto << endl;
	s << "Salario: " << salario << endl;
	s << "Tipo de servicio: " << tipoServicio << endl;
	s << "Horario: " << horario << endl;

	if (fInicio != NULL)
	{
		s << "La fecha de ingreso es:" << fInicio->toString() << endl;
	}
	if (fCulminacion != NULL)
	{
		s << "La fecha de culminacion es:" << fCulminacion->toString() << endl;
	}

	if (empleado != NULL)
	{
		s << empleado->toString();
	}

	if (avion != NULL)
	{
		s << avion->toString();
	}



	return s.str();
}

