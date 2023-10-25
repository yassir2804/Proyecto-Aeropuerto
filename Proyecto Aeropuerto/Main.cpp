#include "ListaAvion.h"
#include "ListaEmpleado.h"

int main() {

	Fecha* fech = new Fecha(12, 2, 2023);

	cout << fech->toString()<<endl;

	Avion* av1 = new AvionComercial(*fech, 4000, "a34","11111", "Pasillo Unico");
	Avion* av2 = new AvionCarga(*fech, 4000, "a34","1111","Puerta lateral",20,20);
	Avion* av3 = new AvionMilitar(*fech, 4000, "a34",200,"Caza");

	cout << av1->toString() << endl<<endl;

	cout << av2->toString() << endl << endl;
	
	cout << av3->toString() << endl << endl;

	system("pause");


	system("cls");


	ListaAvion* listAv = new ListaAvion;

	listAv->ingresaAvion(*av1);
	listAv->ingresaAvion(*av2);
	listAv->ingresaAvion(*av3);

	cout << listAv->toString();

	system("pause");

	system("cls");


	Empleado* pil = new Piloto("Carlos","4000",33,"Supervisor",10);
	Empleado* copil = new Copiloto("Carlos", "4000", 33, "Supervisor","625464");
	Empleado* aza = new Azafata("Carlos", "4000", 33, "Supervisor", "China");
	Empleado* admin = new Administrativo("Carlos", "4000", 33, "Supervisor", "Licenciatura");
	Empleado* mis = new Miscelaneo("Carlos", "4000", 33, "Supervisor", "Noveno Grado");

	cout << pil->toString() << endl;
	cout << copil->toString() << endl;
	cout << aza->toString() << endl;
	cout << admin->toString() << endl;
	cout << mis->toString() << endl;

	system("pause");
	system("cls");

	ListaEmpleado* listE = new ListaEmpleado();

	listE->ingresaEmpleado(*pil);

	listE->ingresaEmpleado(*copil);

	listE->ingresaEmpleado(*aza);

	listE->ingresaEmpleado(*admin);

	listE->ingresaEmpleado(*mis);


	cout << listE->toString() << endl;

	delete listE;


	delete listAv;
	system("pause");
}