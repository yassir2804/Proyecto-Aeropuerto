#include "ServiciosProfesionales.h"


ServiciosProfesionales::ServiciosProfesionales(string desc, string cod, double sala, Avion& av, Empleado& emp,string tSer, string hor, Fecha& fIni, Fecha& fCul) :ContratoBase(desc, cod, sala, av, emp,fIni,fCul),tipoServicio(tSer),horario(hor)
{
}

ServiciosProfesionales::ServiciosProfesionales(string desc, string cod, double sala, Empleado& emp, string tSer, string hor, Fecha& fIni, Fecha& fCul) :ContratoBase(desc, cod, sala, emp, fIni, fCul), tipoServicio(tSer), horario(hor)
{
}


ServiciosProfesionales::~ServiciosProfesionales()
{

}

void ServiciosProfesionales::setTipoServicio(string tSer)
{
	tipoServicio = tSer;
}

void ServiciosProfesionales::setHorario(string hor)
{
	horario = hor;
}

string ServiciosProfesionales::getTipoServicio()
{
	return tipoServicio;
}

string ServiciosProfesionales::getHorario()
{
	return horario;
}

string ServiciosProfesionales::toString()
{
	stringstream s;

	s << "-----INFORMACION DEL CONTRATO-----" << endl << endl;
	s << "   Codigo del contrato: " << codContrato << endl;
	s << "   Descripcion del puesto: " << descPuesto << endl;
	s << "   Salario: " << salario << endl;
	s << "   Tipo de servicio: " << tipoServicio << endl;
	s << "   Horario: " << horario << endl;

	if (fIngreso != NULL)
	{
		s << "   La fecha de ingreso es:" << fIngreso->toString() << endl;
	}
	if (fCulminacion != NULL)
	{
		s << "   La fecha de culminacion es:" << fCulminacion->toString() << endl << endl;
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

string ServiciosProfesionales::imrprimirContratoYEmpleado()
{
	stringstream s;

	s << "-----INFORMACION DEL CONTRATO-----" << endl << endl;
	s << "   Codigo del contrato: " << codContrato << endl;
	s << "   Descripcion del puesto: " << descPuesto << endl;
	s << "   Salario: " << salario << endl;
	s << "   Tipo de servicio: " << tipoServicio << endl;
	s << "   Horario: " << horario << endl;

	if (fIngreso != NULL)
	{
		s << "   La fecha de ingreso es:" << fIngreso->toString() << endl;
	}
	if (fCulminacion != NULL)
	{
		s << "   La fecha de culminacion es:" << fCulminacion->toString() << endl<<endl;
	}

	if (empleado != NULL)
	{
		s << empleado->toString();
	}
	return s.str();
}

