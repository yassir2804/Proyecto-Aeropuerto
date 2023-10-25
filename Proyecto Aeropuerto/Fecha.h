#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Fecha {
private:
    int dia;
    int mes;
    int anio;
public:
    //Constructores
    Fecha();
    Fecha(int d, int m, int a);

    //Destructor
    virtual ~Fecha();

    //Set's
    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);

    //Get's
    int getDia();
    int getMes();
    int getAnio();

    //toString
    string toString();

};
