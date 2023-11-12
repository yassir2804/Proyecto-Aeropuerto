//Programadores que realizaron la creacion del codigo para el aeropuerto.
//Fernando Felipe Santamaria Leiva 402640589
//Yassir Jiménez Carballo 402630944

#pragma once
#include<iostream>
#include<sstream>
#include<fstream>
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


    Fecha* copia();
    void guardarFecha(ofstream&);
    static Fecha* leerFecha(ifstream&);
};
