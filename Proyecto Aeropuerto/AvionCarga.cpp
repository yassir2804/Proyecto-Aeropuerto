#include "AvionCarga.h"



AvionCarga::AvionCarga(Fecha& fC, double dist, string cat, string numPla, string tip, double ancPuer, double altPuer) : AvionCivil(fC, dist, cat, numPla, tip), anchoPuerta(ancPuer), alturaPuerta(altPuer)
{
}

AvionCarga::~AvionCarga()
{
}

void AvionCarga::setAnchoPuerta(double ancPuer)
{
	anchoPuerta = ancPuer;
}

void AvionCarga::setAlturaPuerta(double altPuer)
{
	alturaPuerta = altPuer;
}


double AvionCarga::getAnchoPuerta()
{
	return anchoPuerta;
}

double AvionCarga::getAlturaPuerta()
{
	return alturaPuerta;
}

double AvionCarga::areaPuerta()
{
	return anchoPuerta*alturaPuerta;
}

string AvionCarga::toString()
{
	stringstream s;
	s << left; 
	s << "*-------INFORMACION DEL AVION-------*" << endl << endl;
	s << "   Numero de Placa:           " << setw(20) << numPlaca << endl;
	s << "   Fecha de creacion:         " << setw(20) << fCreado->toString() << endl;
	s << "   Distancia recorrida:       " << setw(0) << distanciaRecorrida << " Km" << endl;
	s << "   Tipo de Avion:             " << setw(10) << tipo << endl;
	s << "   Numero de Categoria:       " << setw(10) << categoria << endl;
	s << "   Marca del avion:           " << setw(20) << Servicio::avionCarga(categoria) << endl;
	s << "   Cantidad de pasajeros:     " << setw(10) << Servicio::avionCargaPasajeros(categoria) << endl;
	s << "   Velocidad el avion:        " << setw(0) << Servicio::avionCargaVelocidades(categoria) << " km" << endl << endl;
	s << "*--INFORMACION DE LA PUERTA--*       " << endl << endl;
	s << "   Ancho de la puerta de carga: " << setw(0) << anchoPuerta << " mts" << endl;
	s << "   Altura de la puerta de carga: " << setw(0) << alturaPuerta << " mts" << endl << endl;
	s << "*-----------------------------------*" << endl;

	s << right; 
	return s.str();
}

Avion* AvionCarga::copia()
{
	return new AvionCarga(*fCreado->copia(), distanciaRecorrida, categoria, numPlaca,tipo, anchoPuerta,alturaPuerta);
}

void AvionCarga::guardarAvion(ofstream& file)
{
	file << "AvionCarga" << '\t' << numPlaca << '\t' << distanciaRecorrida << '\t' << tipo << '\t' << categoria << '\t' << anchoPuerta << '\t' << alturaPuerta << '\n';

	if (fCreado != NULL) fCreado->guardarFecha(file);
}

Avion* AvionCarga::leerAvion(ifstream& file)
{
	string pla, disS, tip, cat, anchS, altS;
	double dis, anch, alt;
	Fecha* fCre;

	getline(file, pla, '\t');
	getline(file, disS, '\t');
	getline(file, tip, '\t');
	getline(file, cat, '\t');
	getline(file, anchS, '\t');
	getline(file, altS, '\n');

	dis = stod(disS);
	anch = stod(anchS);
	alt = stod(altS);

	fCre = Fecha::leerFecha(file);

	return new AvionCarga(*fCre, dis, cat, pla,tip, anch, alt);

}
