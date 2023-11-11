#include "TiempoIndefinido.h"



TiempoIndefinido::TiempoIndefinido(string desc, string cod, double sala, Avion& av, Empleado& emp, Plaza& plaza, Fecha& fIng) :ContratoBase(desc, cod, sala,av,emp, fIng), ptrPlaza(plaza.copia())
{
}

TiempoIndefinido::TiempoIndefinido(string desc, string cod, double sala, Empleado& emp, Plaza& plaza, Fecha& fIng) :ContratoBase(desc, cod, sala, emp, fIng), ptrPlaza(plaza.copia())
{
}

TiempoIndefinido::~TiempoIndefinido()
{
	if (ptrPlaza != NULL)
		delete ptrPlaza;
}

void TiempoIndefinido::setPlaza(Plaza& plaza)
{
	ptrPlaza = &plaza;
}

Plaza* TiempoIndefinido::getPlaza()
{
	return ptrPlaza;
}

string TiempoIndefinido::toString()
{
	stringstream s;

	s << "-----INFORMACION DEL CONTRATO-----" << endl<<endl;
	s << "   Codigo del contrato: " << codContrato << endl;
	s << "   Descripcion del puesto: " << descPuesto << endl;
	s << "   Salario: " << salario << endl;
	if (fIngreso != NULL)
	{
		s << "   La fecha de ingreso es: " << fIngreso->toString()<<endl<<endl;
	}
	if (fCulminacion != NULL)
	{
		s << "   La fecha de cese de funciones es: " << fCulminacion->toString() << endl<<endl;
	}

	if (ptrPlaza != NULL)
	{
		s << ptrPlaza->toString();
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

string TiempoIndefinido::imrprimirContratoYEmpleado()
{
	stringstream s;

	s << "-----INFORMACION DEL CONTRATO-----" << endl << endl;
	s << "   Codigo del contrato: " << codContrato << endl;
	s << "   Descripcion del puesto: " << descPuesto << endl;
	s << "   Salario: " << salario << endl;
	if (fIngreso != NULL)
	{
		s << "   La fecha de ingreso es: " << fIngreso->toString() << endl << endl;
	}
	if (fCulminacion != NULL)
	{
		s << "   La fecha de cese de funciones es: " << fCulminacion->toString() << endl << endl;
	}

	if (ptrPlaza != NULL)
	{
		s << ptrPlaza->toString();
	}

	if (empleado != NULL)
	{
		s << empleado->toString();
	}


	return s.str();
}

void TiempoIndefinido::guardarContrato(ofstream& file)
{
	file << "TiempoIndefinido" << '\t' << codContrato << '\t' << descPuesto << '\t' << salario << '\n';
	if (ptrPlaza != NULL)ptrPlaza->guardarPlaza(file);
	if (fIngreso != NULL) fIngreso->guardarFecha(file);
	if (fCulminacion != NULL) fCulminacion->guardarFecha(file);
	else file <<"0" << '\t' << "0" << '\t' << "0" <<'\n';
	if (empleado != NULL) empleado->guardarEmpleado(file);
	if (avion != NULL) avion->guardarAvion(file);

}

ContratoBase* TiempoIndefinido::leerContrato(ifstream& file)
{
	string cod, desc, salS, tipo;
	double sal;
	Plaza* pla;
	Fecha* fIng;
	Fecha* fCul;
	Empleado* emp = NULL;
	Avion* avi = NULL;
	ContratoBase* tiem = NULL;

	getline(file, cod, '\t');
	getline(file, desc, '\t');
	getline(file, salS, '\n');

	sal = stod(salS);

	pla = Plaza::leerPlaza(file);
	fIng = Fecha::leerFecha(file);
	fCul = Fecha::leerFecha(file);

	if (fCul->getDia() == 0)fCul == NULL;

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

		tiem = new TiempoIndefinido(desc, cod, sal, *emp, *pla, *fIng);
		if (fCul != NULL) tiem->setFechaCulminacion(*fCul);

	}
	if (tipo == "Miscelaneo") {
		emp = Miscelaneo::leerEmpleado(file);

		tiem = new TiempoIndefinido(desc, cod, sal, *emp, *pla, *fIng);
		if (fCul != NULL) tiem->setFechaCulminacion(*fCul);
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

	
	tiem = new TiempoIndefinido(desc, cod, sal, *avi, *emp, *pla, *fIng);
	if (fCul != NULL) tiem->setFechaCulminacion(*fCul);

	return tiem;
}