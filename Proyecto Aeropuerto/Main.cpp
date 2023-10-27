#include "Aeropuerto.h"

int main() {

	Fecha* fech1 = new Fecha(12, 2, 2023);
	Fecha* fech2 = new Fecha(30, 4, 2024);

	Avion* av2 = new AvionCarga(*fech2, 4000, "a34", "1111", "Puerta lateral", 20,20);
	Avion* av3 = new AvionMilitar(*fech2, 4000, "a34", "1111", "caza",200);
	Avion* av1 = new AvionComercial(*fech1, 4000, "a34", "11111", "Pasillo Unico");

	Empleado* pil = new Piloto("Carlos", "4000", 33, "Supervisor", 10);
	Empleado* copil = new Copiloto("Carlos", "4000", 33, "Supervisor", "625464");



	Plaza* pla = new Plaza("1234", "Aviador",true);
	Plaza* pla1 = new Plaza("432", "Huerfano",false);
	ContratoBase* tiem = new TiempoIndefinido("Contratacion en el puesto de aviador", "a456", 4500, *av3, *pil, *pla, *fech1, *fech2);
	ContratoBase* plFij = new PlazoFijo("Contratacion en el puesto de aviador", "a456", 4500, *av3, *pil, *fech1, *fech2);
	//ContratoBase* ser = new ServiciosProfesionales("Contratacion en el puesto de aviador", "a456", 4500, *av3, *pil,"Servicio de limpieza","Lunesa a viernes", * fech1, *fech2);

	//cout << tiem->toString()<<endl;
	//cout << plFij->toString() << endl;
	//cout << ser->toString() << endl;

	////delete listE;

	//system("pause");
	//system("cls");

	//ListaNodoContrato* listC = new ListaNodoContrato();

	//listC->ingresaContrato(tiem);
	//listC->ingresaContrato(plFij);
	//listC->ingresaContrato(ser);

	//cout << listC->toString() << endl;

	//delete listAv;
	//delete listC;
	//system("pause");

	Aeropuerto* ar = new Aeropuerto("YassirAir", "1111", "86825464");

	ar->ingresarEmpleado(*pil);
	ar->ingresarEmpleado(*copil);
	ar->ingresarAvion(*av2);
	ar->ingresarAvion(*av3);
	ar->ingresarAvion(*av1);
	ar->ingresarNodoContrato(*tiem);
	ar->ingresarNodoContrato(*plFij);
	ar->ingresarPlaza(*pla);
	ar->ingresarPlaza(*pla1);

	cout<<ar->getListaEmpleado()->toString();
	cout << ar->getListaAvion()->toString();
	cout << ar->getListaNodoContrato()->toString();
	cout << ar->getListaPlaza()->toString();

	delete ar;
}