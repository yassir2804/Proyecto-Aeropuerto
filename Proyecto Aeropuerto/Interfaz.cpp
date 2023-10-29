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
