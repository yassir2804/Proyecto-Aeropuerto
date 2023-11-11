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

void ServiciosProfesionales::guardarContrato(ofstream& file)
{
	file << "ServiciosProfesionales" << '\t' << codContrato << '\t' << descPuesto << '\t' << salario << '\t' << tipoServicio << '\t' << horario << '\n';

	if (fIngreso != NULL) fIngreso->guardarFecha(file);
	if (fCulminacion != NULL) fCulminacion->guardarFecha(file);
	if (empleado != NULL) empleado->guardarEmpleado(file);
	if (avion != NULL) avion->guardarAvion(file);
	
}

ContratoBase* ServiciosProfesionales::leerContrato(ifstream& file)
{
	string cod, desc, salS, tip, hor, tipo;
	double sal;
	Fecha* fIng = NULL;
	Fecha* fCul = NULL;
	Empleado* emp = NULL;
	Avion* avi = NULL;

	getline(file, cod, '\t');
	getline(file, desc, '\t');
	getline(file, salS, '\t');
	getline(file, tip, '\t');
	getline(file, hor, '\n');

	sal = stod(salS);

	fIng = Fecha::leerFecha(file);
	fCul = Fecha::leerFecha(file);

	getline(file, tipo, '\t');

	if (tipo == "Piloto") {
		emp = Piloto::leerEmpleado(file);
	}
	if (tipo == "Copiloto") {
		emp = Copiloto::leerEmpleado(file);
	}
	if (tipo == "Azafata") {
		emp = Azafata::leerEmpleado(file);
	}
	if (tipo == "Administrativo") {
		emp = Administrativo::leerEmpleado(file);
		return new ServiciosProfesionales(desc, cod, sal, *emp, tip, hor, *fIng, *fCul);
	}
	if (tipo == "Miscelaneo") {
		emp = Miscelaneo::leerEmpleado(file);
		return new ServiciosProfesionales(desc, cod, sal, *emp, tip, hor, *fIng, *fCul);
	}

	getline(file, tipo, '\t');


	if (tipo == "AvionComercial") {
		avi = AvionComercial::leerAvion(file);
	}
	if (tipo == "AvionCarga") {
		avi = AvionCarga::leerAvion(file);
	}
	if (tipo == "AvionMilitar") {
		avi = AvionMilitar::leerAvion(file);
	}

	return new ServiciosProfesionales(desc,cod,sal,*avi,*emp,tip,hor,*fIng,*fCul);
}

