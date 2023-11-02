#include "Interfaz.h"

int Interfaz::menuPrincipal()
{
		int op;
		system("cls");
		cout << endl;
		cout << "------------GESTION DE AEROPUERTO----------" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "---------------------MENU------------------" << endl;
		cout << "   1-  Ingresar.                           " << endl;
		cout << "   2-  Mantenimiento.                      " << endl;
		cout << "   3-  Reportes.                           " << endl;
		cout << "   4-  Consultar.                          " << endl;
		cout << "   5-  Gestion de Contratos.               " << endl;
		cout << "   6-  Salir.                              " << endl;
		cout << "-------------------------------------------" << endl;
		cout << "   Digite la opcion: ";
		cin >> op;
		return op;
}

int Interfaz::menuIngresar()
{
	int op;
	system("cls");
	cout << endl;
	cout << "--------------MENU DE INGRESOS-------------" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "   1-  Ingresar Empleado.                  " << endl;
	cout << "   2-  Ingresar Avion.                     " << endl;
	cout << "   3-  Ingresar Contrato.                  " << endl;
	cout << "   4-  Ingresar Plaza.                     " << endl;
	cout << "   5-  Regresar.                           " << endl;
	cout << "-------------------------------------------" << endl;
	cout << "   Digite la opcion: ";
	cin >> op;
	return op;
}

int Interfaz::menuImngresarEmpleado()
{
	int op;
	system("cls");
	cout << endl;
	cout << "--------------MENU INGRESAR EMPLADO-------------" << endl;
	cout << "------------------------------------------------" << endl;
	cout << "   1-  Piloto.                  " << endl;
	cout << "   2-  Copiloto.                     " << endl;
	cout << "   3-  Azafata.                  " << endl;
	cout << "   4-  Miscelaneo.                     " << endl;
	cout << "   5-  Administrativo.                     " << endl;
	cout << "   6-  Regresar.                           " << endl;
	cout << "------------------------------------------------" << endl;
	cout << "   Digite la opcion: ";
	cin >> op;
	return op;

}

void Interfaz::ingresarPiloto(Aeropuerto* ar)
{
	Empleado* pil = NULL;
	string nom, ced, pues;
	int ed, exp;

	system("cls");
	cout << endl;
	cout << "--------------CREACION DE UN PILOTO-------------" << endl;
	cout << "------------------------------------------------" << endl;
	cout << "   Ingrese la cedula: ";
	cin >> ced;
	cout << "   Ingrese el nombre: ";
	cin >> nom;
	cout << "   Ingrese la edad: ";
	cin >> ed;
	cout << "   Ingrese el puesto: ";
	cin >> pues;
	cout << "   Ingrese los anios de experiencia: ";
	cin >> exp; cout << endl;


	pil = new Piloto(nom, ced, ed, pues, exp);

	if (ar->ingresarEmpleado(*pil))msjExitoIngresar();
	else msjErorrIngresar();


	cout<<ar->getListaEmpleado()->toString();


	system("pause");

}

void Interfaz::msjErorrIngresar()
{
	cout << "Fallo al ingresar" << endl;
}

void Interfaz::msjExitoIngresar()
{
	cout << "Se ingreso con exito" << endl;
}


