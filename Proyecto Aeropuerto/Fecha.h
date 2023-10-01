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
    Fecha();
    Fecha(int d, int m, int a);
    virtual ~Fecha();
    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);

    int getDia();
    int getMes();
    int getAnio();

    string toString();
    
};
