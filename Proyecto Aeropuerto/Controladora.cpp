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
            //case 1: control1(); break;
            //case 2: control2(); break;
            //case 3: control3(); break;
            //case 4: control4(); break;
            //case 5: control5(); break;
        }
        // Elimina o mueve la pausa si es necesario.
        // system("pause");
    } while (op != 5);

}
