#include "PlazoFijo.h"


PlazoFijo::PlazoFijo(string desc, string cod, double sala, Avion& av, Empleado& emp, Fecha& fIng, Fecha& fCul):ContratoBase(desc, cod, sala,av,emp,fIng,fCul)
	{
	}


PlazoFijo::~PlazoFijo()
{

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
		s << "La fecha de culminacion es:" << fCulminacion->toString()<<endl;
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
