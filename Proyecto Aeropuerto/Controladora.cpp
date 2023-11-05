#include "Controladora.h"

Controladora::Controladora() {
    aeropuerto = new Aeropuerto("AeroTico", "1223344", "86825464");
}

Controladora::~Controladora() {
    if (aeropuerto != NULL) delete aeropuerto;
}

void Controladora::control0() {
    int op;
    do {
        op = controlMenu();
        switch (op) {
        case 1: control1(); break;
        //case 2: control2(); break;
        //case 3: control3(); break;
        //case 4: control4(); break;
        //case 5: control5(); break;
            // Agrega más casos si es necesario.
        }
    } while (op != 6);
}

int Controladora::controlMenu() {
    return Interfaz::menuPrincipal();
}

void Controladora::control1() {
    
    int op;
    do {
        op = Interfaz::menuIngresar();
        switch (op) {
            case 1: control1_1(); break;
            case 2: control1_2(); break;
            case 3: control1_3(); break;
            case 4: control1_4(); break;
            //case 5: control5(); break;
        }
        // Elimina o mueve la pausa si es necesario.
        // system("pause");
    } while (op != 5);

}

void Controladora::control1_1()
{
    int op;
    do {
        op = Interfaz::menuIngresarEmpleado();
        switch (op) {
            case 1: controlPiloto(); break;
            case 2: controlCopiloto(); break;
            case 3: controlAzafata(); break;
            case 4: controlAdministrativo(); break;
            case 5: controlMiscelaneo(); break;
            //case 6: control6(); break;
        }
        // Elimina o mueve la pausa si es necesario.
        // system("pause");
    } while (op != 6);
}

void Controladora::control1_2()
{
    int op;
    do {
        op = Interfaz::menuIngresarAvion();
        switch (op) {
        case 1: controlAvionComercial(); break;
        case 2: controlAvionCarga(); break;
        case 3: controlAvionMilitar(); break;
        //case 4: controlAdministrativo(); break;
        //case 5: controlMiscelaneo(); break;
        //case 6: control6(); break;
        }
        // Elimina o mueve la pausa si es necesario.
        // system("pause");
    } while (op != 4);
}

void Controladora::control1_3()
{
    Interfaz::ingresarPlaza(aeropuerto);
}

void Controladora::control1_4()
{
    int op;
    do {
        op = Interfaz::menuIngresaContrato();
        switch (op) {
        case 1: controlServiciosProfesionales(); break;
        case 2: controlPlazoFijo(); break;
        case 3: controlTiempoIndefinido(); break;
            //case 4: controlAdministrativo(); break;
            //case 5: controlMiscelaneo(); break;
            //case 6: control6(); break;
        }
        // Elimina o mueve la pausa si es necesario.
        // system("pause");
    } while (op != 4);
}

void Controladora::controlPiloto()
{
    Interfaz::ingresarPiloto(aeropuerto);
}

void Controladora::controlCopiloto()
{
    Interfaz::ingresarCopiloto(aeropuerto);
}

void Controladora::controlAzafata()
{
    Interfaz::ingresarAzafata(aeropuerto);
}

void Controladora::controlAdministrativo()
{
    Interfaz::ingresarAdministrativo(aeropuerto);
}

void Controladora::controlMiscelaneo()
{
    Interfaz::ingresarMiscelaneo(aeropuerto);
}

void Controladora::controlAvionComercial()
{
    Interfaz::ingresarAvionComercial(aeropuerto);
}

void Controladora::controlAvionCarga()
{
    Interfaz::ingresarAvionCarga(aeropuerto);
}

void Controladora::controlAvionMilitar()
{
    Interfaz::ingresaAvionMilitar(aeropuerto);
}

void Controladora::controlServiciosProfesionales()
{
    Interfaz::ingresarServiciosProfesionales(aeropuerto);
}

void Controladora::controlPlazoFijo()
{
    Interfaz::ingresarPlazoFijo(aeropuerto);
}

void Controladora::controlTiempoIndefinido()
{
    Interfaz::ingresarTiempoIndefinido(aeropuerto);
}
