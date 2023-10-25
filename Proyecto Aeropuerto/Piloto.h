#pragma once
#include"EmpTripulacion.h"

class Piloto : public Tripulacion {
private:

	int aniosExp;

public:
	Piloto(string no, string ce, int ed, string pues, int anExp);
	virtual ~Piloto();

	void setAniosExp(int anExp);

	int getAnioExp();

	string toString();

};