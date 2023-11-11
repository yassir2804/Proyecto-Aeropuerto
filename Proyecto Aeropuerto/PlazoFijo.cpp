#include "PlazoFijo.h"


PlazoFijo::PlazoFijo(string desc, string cod, double sala, Avion& av, Empleado& emp, Fecha& fIng, Fecha& fCul):ContratoBase(desc, cod, sala,av,emp,fIng,fCul), aceptado(true)
	{
	}

PlazoFijo::PlazoFijo(string desc, string cod, double sala, Empleado& emp, Fecha& fIng, Fecha& fCul) :ContratoBase(desc, cod, sala, emp, fIng, fCul), aceptado(true)
{
}


PlazoFijo::~PlazoFijo()
{

}

bool PlazoFijo::getAceptado()
{
	return aceptado;
}

void PlazoFijo::setAceptado(bool ace)
{
	aceptado = ace;
}

bool PlazoFijo::estaVencido(Fecha& actual)
{
	if (fCulminacion->getAnio() < actual.getAnio()) return true;
	if (fCulminacion->getAnio() == actual.getAnio() && fCulminacion->getMes() < actual.getMes()) return true;
	if (fCulminacion->getAnio() == actual.getAnio() && fCulminacion->getMes() == actual.getMes() && fCulminacion->getDia() < actual.getDia()) return true;

	return false;
}


string PlazoFijo::toString()
{
	stringstream s;
	s << "-----INFORMACION DEL CONTRATO-----" << endl << endl;
	s << "   Codigo del contrato: " << codContrato << endl;
	s << "   Descripcion del puesto: " << descPuesto << endl;
	s << "   Salario: " << salario << endl;
	s << "   Condicion:	";

	if (aceptado)s << "Aceptado" << endl;
	else s << "Rechazado" << endl;

	if (fIngreso != NULL)
	{
		s << "   La fecha de ingreso es:" << fIngreso->toString()<<endl;
	}
	if (fCulminacion != NULL)
	{
		s << "   La fecha de culminacion es:" << fCulminacion->toString()<<endl<<endl;
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

string PlazoFijo::imrprimirContratoYEmpleado() 
{
	stringstream s;
	s << "-----INFORMACION DEL CONTRATO-----" << endl << endl;
	s << "   Codigo del contrato: " << codContrato << endl;
	s << "   Descripcion del puesto: " << descPuesto << endl;
	s << "   Salario: " << salario << endl;
	s << "   Condicion:	";

	if (aceptado)s << "Aceptado" << endl;
	else s << "Rechazado" << endl;

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

	return s.str();
}

void PlazoFijo::guardarContrato(ofstream& file)
{
	string estado;

	if (aceptado)estado = "Aceptado";
	else estado = "Rechazado";

	file << "PlazoFijo" << '\t' << codContrato << '\t' << descPuesto << '\t' << salario << '\t'<< estado << '\n';


	if (fIngreso != NULL) fIngreso->guardarFecha(file);
	if (fCulminacion != NULL) fCulminacion->guardarFecha(file);
	if (empleado != NULL) empleado->guardarEmpleado(file);
	if (avion != NULL) avion->guardarAvion(file);

}

ContratoBase* PlazoFijo::leerContrato(ifstream& file)
{
	string cod, desc, salS, tipo, estadoS;
	bool estado;
	double sal;
	Fecha* fIng;
	Fecha* fCul;
	Empleado* emp = NULL;
	Avion* avi = NULL;
	ContratoBase* pla = NULL;

	getline(file, cod, '\t');
	getline(file, desc, '\t');
	getline(file, salS, '\t');
	getline(file, estadoS, '\n');

	if (estadoS == "Aceptado")estado = true;
	else estado = false;

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

		pla = new PlazoFijo(desc, cod, sal, *emp, *fIng, *fCul);

		if (estado)pla->setAceptado(estado);
		else pla->setAceptado(estado);

		return pla;
	}
	if (tipo == "Miscelaneo") {
		pla = new PlazoFijo(desc, cod, sal, *emp, *fIng, *fCul);

		if (estado)pla->setAceptado(estado);
		else pla->setAceptado(estado);

		return pla;
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

	pla = new PlazoFijo(desc, cod, sal, *avi, *emp, *fIng, *fCul);

	if (estado)pla->setAceptado(estado);
	else pla->setAceptado(estado);

	return pla;

}
