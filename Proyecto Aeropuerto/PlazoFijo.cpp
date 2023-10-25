#include "PlazoFijo.h"


PlazoFijo::PlazoFijo(string desc, string cod, double sala, Avion& av, Empleado& emp, Fecha& fIng, Fecha& fCul):ContratoBase(desc, cod, sala,av,emp),fIngreso(new Fecha(fIng)), fCulminacion(new Fecha(fCul))
	{
	}


PlazoFijo::~PlazoFijo()
{
	if (fIngreso != NULL)
		delete fIngreso;
	if (fCulminacion != NULL)
		delete fCulminacion;
}

void PlazoFijo::setFechaIngreso(Fecha& fIng)
{
	fIngreso = &fIng;
}

void PlazoFijo::setFechaCulminacion(Fecha& fCulm)
{
	fCulminacion = &fCulm;
}

Fecha* PlazoFijo::getFechaIngreso()
{
	return fIngreso;
}

Fecha* PlazoFijo::getFechaCulminacion()
{
	return fCulminacion;
}

string PlazoFijo::toString()
{
	stringstream s;

	s << "-----INFORMACION DEL CONTRATO DE PLAZO FIJO-----" <<endl <<endl;
	s << "Codigo del contrato: " << codContrato << endl;
	s << "Descripcion del puesto: " << descPuesto << endl;
	s << "Salario: " << salario << endl;

	if (fIngreso != NULL)
	{
		s << "La fecha de ingreso es:" << fIngreso->toString()<<endl;
	}
	if (fCulminacion != NULL)
	{
		s << "La fecha de culimnacion es:" << fCulminacion->toString()<<endl;
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
