//#include "Aeropuerto.h"
//
//int main() {
//
//	Fecha* fech1 = new Fecha(12, 2, 2023);
//	Fecha* fech2 = new Fecha(30, 4, 2024);
//	 
//	Avion* av2 = new AvionCarga(*fech2, 4000, "A319", "1111", "aaaaaaaaaaaa", 20, 20);
//	Avion* av3 = new AvionMilitar(*fech2, 4000, "M300", "1111", "caza", 200);
//	Avion* av1 = new AvionComercial(*fech1, 4000, "310", "11111", "Pasillo Unico");
//
//	Empleado* pil = new Piloto("Carlos", "4000", 33, "Supervisor", 10);
//	Empleado* copil = new Copiloto("Carlos", "4000", 33, "Supervisor", "625464");
//	Empleado* aza = new Azafata("Carlos", "4000", 33, "Supervisor", "caca");
//	Empleado* admi = new Administrativo("Carlos", "4000", 33, "Supervisor", "Licenciatura");
//	Empleado* mis = new Miscelaneo("Carlos", "4000", 33, "Supervisor", "Licenciatura");
//
//
//
//	Plaza* pla = new Plaza("1234", "Aviador", true);
//	Plaza* pla1 = new Plaza("432", "Huerfano", false);
//	ContratoBase* tiem = new TiempoIndefinido("Contratacion en el puesto de aviador", "1111", 4500, *av3, *pil, *pla, *fech1);
//	ContratoBase* plFij = new PlazoFijo("Contratacion en el puesto de aviador", "a456", 4500, *admi, *fech1, *fech2);
//	ContratoBase* plFij1 = new PlazoFijo("Contratacion en el puesto de aviador", "a456", 4500, *admi, *fech1, *fech2);
//	ContratoBase* plFij2 = new PlazoFijo("Contratacion en el puesto de aviador", "a456", 4500, *admi, *fech1, *fech2);
//	plFij->setAceptado(false);
//	//plFij2->setAceptado(false);
//	//ContratoBase* ser = new ServiciosProfesionales("Contratacion en el puesto de aviador", "a456", 4500, *av3, *pil,"Servicio de limpieza","Lunesa a viernes", * fech1, *fech2);
//
//	//cout << tiem->toString()<<endl;
//	//cout << plFij->toString() << endl;
//	//cout << ser->toString() << endl;
//
//	////delete listE;
//
//	//system("pause");
//	//system("cls");
//
//	//ListaNodoContrato* listC = new ListaNodoContrato();
//
//	//listC->ingresaContrato(tiem);
//	//listC->ingresaContrato(plFij);
//	//listC->ingresaContrato(ser);
//
//	//cout << listC->toString() << endl;
//
//	//delete listAv;
//	//delete listC;
//	//system("pause");
//
//	Aeropuerto* ar = new Aeropuerto("YassirAir", "1111", "86825464");
//
//	ar->ingresarEmpleado(*pil);
//	ar->ingresarEmpleado(*copil);
//	ar->ingresarEmpleado(*aza);
//	ar->ingresarEmpleado(*admi);
//	ar->ingresarEmpleado(*mis);
//	ar->ingresarAvion(*av2);
//	ar->ingresarAvion(*av3);
//	ar->ingresarAvion(*av1);
//	ar->ingresarContrato(*plFij);
//	ar->ingresarContrato(*plFij1);
//	ar->ingresarContrato(*plFij2);
//	ar->ingresarPlaza(*pla);
//	ar->ingresarPlaza(*pla1);
//
//	//cout << ar->imprimeAviones();
//	//cout << ar->imprimeEmpleados();
//	cout << ar->imprimeContratos();
//	//cout << ar->imprimePlazas();
//
//	//ar->eliminaContratoPorCodigo("1111");
//
//	ar->eliminarContratosVencidosNoAceptados();
//
//	//cout << ar->imprimeAviones();
//	//cout << ar->imprimeEmpleados();
//	cout << ar->imprimeContratos();
//	//cout << ar->imprimePlazas();
//
//
//	delete ar;
//	//Avion* av1 = new AvionMilitar(*fech2, 4000, "M300", "1111", "caza", 200);
//	//Avion* av2 = av1->copia();
//
//	//cout << av1->toString() << endl;
//	//cout << av2->toString() << endl;
//
//	//av1->setDistanciaRecorrida(3);
//
//
//	//cout << av1->toString() << endl;
//	//cout << av2->toString() << endl;
//
//
//	system("pause");
//
//}