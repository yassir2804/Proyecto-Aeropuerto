#pragma once
#include "EmpPlanta.h"

class Miscelaneo : public Planta {

protected:

	string gradoEsc;

public:

	Miscelaneo(string no, string ce, int ed, string pues, string gra);
	virtual ~Miscelaneo();

	void setGradoEsc(string gra);

	string getGradoEsc();

	string toString();


};