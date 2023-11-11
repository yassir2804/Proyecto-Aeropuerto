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
        case 2: control2(); break;
        case 3: control3(); break;
        case 4: control4(); break;
        case 5: control5(); break;

        }
    } while (op != 5);
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
        }

    } while (op != 5);

}

void Controladora::control2()
{
    int op;
    do {
        op = Interfaz::menuMantenimiento();
        switch (op) {
        case 1: control2_1(); break;
        case 2: control2_2(); break;
        }

    } while (op != 3);
}

void Controladora::control3()
{
    int op;
    do {
        op = Interfaz::menuDeReportes();
        switch (op) {
        case 1: control3_1(); break; 
        case 2: control3_2(); break; 
        case 3: control3_3(); break; 
        case 4: control3_4(); break; 
        case 5: control3_5(); break; 
        case 6: control3_6(); break; 
        case 7: control3_7(); break; 
        case 8: control3_8(); break; 
        case 9: control3_9(); break; 
        case 10: control3_10(); break; 
        case 11: control3_11(); break; 
        case 12: control3_12(); break; 
        }

    } while (op != 13);
}

void Controladora::control4()
{
    int op; 
    do {
        op = Interfaz::menuDeConsultas();
        switch (op) { 
        case 1: control4_1(); break;
        case 2: control4_2(); break; 
        case 3: control4_3(); break;
        }

    } while (op != 4); 
}

void Controladora::control5()
{
    aeropuerto->guardarListaEmpleado();
    aeropuerto->guardarListaAvion();
    aeropuerto->guardarListaPlazas();
    aeropuerto->guardarListaContratos();
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
        }

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
        }

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

        }

    } while (op != 4);
}

void Controladora::control2_1()
{
    int op;
    do {
        op = Interfaz::menuEditar();
        switch (op) {
        case 1:controlEditarEmpleado(); break;
        case 2: controEditarAvion(); break;
        case 3: controlEditarContrato(); break;
        }

    } while (op != 4);
}

void Controladora::control2_2()
{
    int op;
    do {
        op = Interfaz::menuEliminar();
        switch (op) {
            case 1: controlEliminarEmpleado(); break;
            case 2: contolEliminarAvion(); break;
            case 3: controlEliminarContrato(); break;
        }

    } while (op != 4);
}

void Controladora::control3_1()
{
    Interfaz::reporteContratosConEmleado(aeropuerto);
}

void Controladora::control3_2()
{
    Interfaz::reporteAvionesYTripulacion(aeropuerto);
}

void Controladora::control3_3()
{
    Interfaz::reporteAviones(aeropuerto);
}

void Controladora::control3_4()
{
    Interfaz::reporteEmpleadosContratados(aeropuerto);
}

void Controladora::control3_5()
{
    Interfaz::reportePilotosAvionesCarga(aeropuerto);
}

void Controladora::control3_6()
{
    Interfaz::reporteAvionesMasDe20(aeropuerto);
}

void Controladora::control3_7()
{
    Interfaz::reporteContratoServiciosProfesionales(aeropuerto);  
}

void Controladora::control3_8()
{
    Interfaz::reportePlazoFijo(aeropuerto);
}

void Controladora::control3_9()
{
    Interfaz::reporteTiempoIndefinido(aeropuerto);
}

void Controladora::control3_10()
{
    Interfaz::reporteTripulacionAvionComercial(aeropuerto);
}

void Controladora::control3_11()
{
    Interfaz::reporteContratosVencidos(aeropuerto);
}

void Controladora::control3_12()
{
    Interfaz::reporteAvionConMayorArea(aeropuerto);
}

void Controladora::control4_1()
{
    Interfaz::consultaTrabajadorPorCedulaYAeronave(aeropuerto);
}

void Controladora::control4_2()
{
    Interfaz::consultaContratoConSuNumeroYTipo(aeropuerto);
}

void Controladora::control4_3()
{
    Interfaz::consultaAvionCivil(aeropuerto); 
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


void Controladora::controlEditarEmpleado()
{
    int op;
    do {
        op = Interfaz::menuEditarEmpleado();
        switch (op) {
        case 1: controlEditarNombre(); break;
        case 2: controlEditarEdad(); break;
        case 3: controlEditarOcupacion(); break;
        case 4: controlEditarAniosExp(); break;
        case 5: controlEditarTelefono(); break;
        case 6: controlEditarNacionalidad(); break;
        case 7: controlEditarTitulo(); break;
        case 8: controlEditarGradoesc(); break;
        }

    } while (op != 9);
}

void Controladora::controEditarAvion()
{
    int op;
    do {
        op = Interfaz::menuEditarAvion();
        switch (op) {
        case 1: controlEditarDistRecorrida(); break;
        case 2: controlEditarCategoria(); break;
        case 3: controlEditarTipo(); break;
        case 4: controlEditarAnchPuer(); break;
        case 5: controlEditarAltPuer(); break;
        case 6: controlEditarVelMaxima(); break;
        }

    } while (op != 7);
}

void Controladora::controlEditarContrato()
{
    int op;
    do {
        op = Interfaz::menuEditarContrato();
        switch (op) {
        case 1: controlEditarSalario(); break;
        case 2: controlEditarHorario(); break;
        case 3: controlEditarAceptado(); break;
        }

    } while (op != 4);
}

void Controladora::controlEditarNombre()
{
    Interfaz::editarNombre(aeropuerto);
}

void Controladora::controlEditarEdad()
{
    Interfaz::editarEdad(aeropuerto);
}

void Controladora::controlEditarOcupacion()
{
    Interfaz::editarOcupacion(aeropuerto);
}

void Controladora::controlEditarAniosExp()
{
    Interfaz::editarAniosExperiencia(aeropuerto);
}

void Controladora::controlEditarTelefono()
{
    Interfaz::editarTelefono(aeropuerto);
}

void Controladora::controlEditarNacionalidad()
{
    Interfaz::editarNacionalidad(aeropuerto);
}

void Controladora::controlEditarTitulo()
{
    Interfaz::editarTitulo(aeropuerto);
}

void Controladora::controlEditarGradoesc()
{
    Interfaz::editarGradoEscolaridad(aeropuerto);
}

void Controladora::controlEditarDistRecorrida()
{
    Interfaz::editarDisRecorrida(aeropuerto);
}

void Controladora::controlEditarCategoria()
{
    Interfaz::editarCategoria(aeropuerto);
}

void Controladora::controlEditarTipo()
{
    Interfaz::editarTipo(aeropuerto);
}

void Controladora::controlEditarAnchPuer()
{
    Interfaz::editarAnchoPuerta(aeropuerto);
}

void Controladora::controlEditarAltPuer()
{
    Interfaz::editarAltoPuerta(aeropuerto);
}

void Controladora::controlEditarVelMaxima()
{
    Interfaz::editarVelocidadMaxima(aeropuerto);
}

void Controladora::controlEditarSalario()
{
    Interfaz::editarSalario(aeropuerto);
}

void Controladora::controlEditarHorario()
{
    Interfaz::editarHorario(aeropuerto);
}

void Controladora::controlEditarAceptado()
{
    Interfaz::editarAceptado(aeropuerto);
}

void Controladora::controlEliminarEmpleado()
{
    Interfaz::eliminarEmpleado(aeropuerto);
}

void Controladora::contolEliminarAvion()
{
    Interfaz::eliminarAvion(aeropuerto);
}

void Controladora::controlEliminarContrato()
{
    Interfaz::eliminarContrato(aeropuerto);
}
