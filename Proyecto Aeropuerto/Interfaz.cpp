#include "Interfaz.h"

int Interfaz::menuPrincipal()
{
		int op;
		system("cls");
		cout << endl;
		cout << "------------GESTION DE AEROPUERTO----------" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "*--------------------MENU-----------------*" << endl;
		cout << "|  <1>  Ingresar.                         |" << endl;
		cout << "|  <2>  Mantenimiento.                    |" << endl;
		cout << "|  <3>  Reportes.                         |" << endl;
		cout << "|  <4>  Consultar.                        |" << endl;
		cout << "|  <5>  Gestion de Contratos.             |" << endl;
		cout << "|  <6>  Salir.                            |" << endl;
		cout << "*-----------------------------------------*" << endl;
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
	cout << "*-----------------------------------------*" << endl;
	cout << "|   <1>  Ingresar Empleado.               |" << endl;
	cout << "|   <2>  Ingresar Avion.                  |" << endl;
	cout << "|   <3>  Ingresar Plaza.                  |" << endl;
	cout << "|   <4>  Ingresar Contrato.               |" << endl;
	cout << "|   <5>  Regresar.                        |" << endl;
	cout << "*-----------------------------------------*" << endl;
	cout << "   Digite la opcion: ";
	cin >> op;
	return op;
}

int Interfaz::menuIngresarEmpleado()
{
	int op;
	system("cls");
	cout << endl;
	cout << "--------------MENU INGRESAR EMPLEADO-------------" << endl;
	cout << "*-----------------------------------------------*" << endl;
	cout << "|   <1>  Piloto.                                |" << endl;
	cout << "|   <2>  Copiloto.                              |" << endl;
	cout << "|   <3>  Azafata.                               |" << endl;
	cout << "|   <4>  Administrativo.                        |" << endl;
	cout << "|   <5>  Miscelaneo.                            |" << endl;
	cout << "|   <6>  Regresar.                              |" << endl;
	cout << "*-----------------------------------------------*" << endl;
	cout << "   Ingrese el tipo de empleado a crear: ";
	cin >> op;
	return op;

}

int Interfaz::menuIngresarAvion()
{
	int op;
	system("cls");
	cout << endl;
	cout << "--------------MENU INGRESAR AVION-------------" << endl;
	cout << "*--------------------------------------------*" << endl;
	cout << "|   <1>  Avion Comercial.                    |" << endl;
	cout << "|   <2>  Avion de Carga.                     |" << endl;
	cout << "|   <3>  Avion Militar.                      |" << endl;
	cout << "|   <4>  Regresar.                           |" << endl;
	cout << "*--------------------------------------------*" << endl;
	cout << "   Ingrese el tipo de avion a crear: ";
	cin >> op;
	return op;
}

int Interfaz::menuIngresaContrato()
{
	int op;
	system("cls");
	cout << endl;
	cout << "--------------MENU INGRESAR CONTRATO-------------" << endl;
	cout << "*-----------------------------------------------*" << endl;
	cout << "|   <1>  Contrato de Servicios Profesionales.   |" << endl;
	cout << "|   <2>  Contrato de Plazo Fijo.                |" << endl;
	cout << "|   <3>  Contrato de Tiempo Indefinido.         |" << endl;
	cout << "|   <4>  Regresar.                              |" << endl;
	cout << "*-----------------------------------------------*" << endl;
	cout << "   Ingrese el tipo de contrato que desea crear: ";
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
	cout << "   Digite la cedula: ";
	cin >> ced;
	cout << "   Digite el nombre: ";
	cin >> nom;
	cout << "   Digite la edad: ";
	cin >> ed;
	cout << "   Digite el puesto: ";
	cin >> pues;
	cout << "   Digite los anios de experiencia: ";
	cin >> exp; cout << endl;


	pil = new Piloto(nom, ced, ed, pues, exp);

	if (ar->getListaEmpleado()->existeEmpleado(ced)== false) {
		if (ar->ingresarEmpleado(*pil))msjExitoIngresar();
		else msjErorrIngresar();
	}else msjErorrIngresar();


	cout<<ar->getListaEmpleado()->toString();


	system("pause");

}

void Interfaz::ingresarCopiloto(Aeropuerto* ar)
{
	Empleado* copi = NULL;
	string nom, ced, pues, tel;
	int ed;

	system("cls");
	cout << endl;
	cout << "--------------CREACION DE UN COPILOTO-------------" << endl;
	cout << "------------------------------------------------" << endl;
	cout << "   Ingrese la cedula: ";
	cin >> ced;
	cout << "   Ingrese el nombre: ";
	cin >> nom;
	cout << "   Ingrese la edad: ";
	cin >> ed;
	cout << "   Ingrese el puesto: ";
	cin >> pues;
	cout << "   Ingrese el numero de telefono: ";
	cin >> tel; cout << endl;


	copi = new Copiloto(nom, ced, ed, pues, tel);

	if (ar->getListaEmpleado()->existeEmpleado(ced) == false) {
		if (ar->ingresarEmpleado(*copi))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();


	cout<<ar->getListaEmpleado()->toString();


	system("pause");
}

void Interfaz::ingresarAzafata(Aeropuerto* ar)
{
	Empleado* aza = NULL;
	string nom, ced, pues, naci;
	int ed;

	system("cls");
	cout << endl;
	cout << "--------------CREACION DE UN AZAFATA-------------" << endl;
	cout << "------------------------------------------------" << endl;
	cout << "   Ingrese la cedula: ";
	cin >> ced;
	cout << "   Ingrese el nombre: ";
	cin >> nom;
	cout << "   Ingrese la edad: ";
	cin >> ed;
	cout << "   Ingrese el puesto: ";
	cin >> pues;
	cout << "   Ingrese la nacionalidad: ";
	cin >> naci; cout << endl;


	aza = new Azafata(nom, ced, ed, pues, naci);

	if (ar->getListaEmpleado()->existeEmpleado(ced) == false) {
		if (ar->ingresarEmpleado(*aza))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();


	cout << ar->getListaEmpleado()->toString();


	system("pause");
}

void Interfaz::ingresarAdministrativo(Aeropuerto* ar)
{
	Empleado* admi = NULL;
	string nom, ced, pues, tit;
	int ed;

	system("cls");
	cout << endl;
	cout << "--------------CREACION DE UN ADMINISTRATIVO-------------" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "   Ingrese la cedula: ";
	cin >> ced;
	cout << "   Ingrese el nombre: ";
	cin >> nom;
	cout << "   Ingrese la edad: ";
	cin >> ed;
	cout << "   Ingrese el puesto: ";
	cin >> pues;
	cout << "   Ingrese el titulo universitario: ";
	cin >> tit; cout << endl;


	admi = new Administrativo(nom, ced, ed, pues, tit);

	if (ar->getListaEmpleado()->existeEmpleado(ced) == false) {
		if (ar->ingresarEmpleado(*admi))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();


	cout << ar->getListaEmpleado()->toString();


	system("pause");

}

void Interfaz::ingresarMiscelaneo(Aeropuerto* ar)
{
	Empleado* mis = NULL;
	string nom, ced, pues, gra;
	int ed;

	system("cls");
	cout << endl;
	cout << "--------------CREACION DE UN MISCELANEO-------------" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "   Ingrese la cedula: ";
	cin >> ced;
	cout << "   Ingrese el nombre: ";
	cin >> nom;
	cout << "   Ingrese la edad: ";
	cin >> ed;
	cout << "   Ingrese el puesto: ";
	cin >> pues;
	cout << "   Ingrese el grado: ";
	cin >> gra; cout << endl;


	mis = new Miscelaneo(nom, ced, ed, pues, gra);

	if (ar->getListaEmpleado()->existeEmpleado(ced) == false) {
		if (ar->ingresarEmpleado(*mis))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();


	cout << ar->getListaEmpleado()->toString();


	system("pause");
}

void Interfaz::ingresarAvionComercial(Aeropuerto* ar)
{
	Avion* com = NULL;
	Fecha* fech = NULL;
	string pla, cat, tip;
	int dd,mm,yy;
	double dis;

	system("cls");
	cout << endl;
	cout << "---------------CREACION DE AVION COMERCIAL--------------" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "   Ingrese el numero de placa: ";
	cin >> pla;
	cout << "   Ingresando la fecha de creacion: "<<endl;
	cout << "   Ingrese el dia: ";
	cin >> dd;
	cout << "   Ingrese el mes: ";
	cin >> mm;
	cout << "   Ingrese el anio: ";
	cin >> yy;
	cout << "   Ingrese la distancia recorrida por el avion: ";
	cin >> dis;
	cout << "   Ingrese la categoria: ";
	cin >> cat;
	cout << "   Ingrese el tipo: ";
	cin >> tip; cout << endl;

	fech = new Fecha(dd, mm, yy);
	com = new AvionComercial(*fech, dis, cat, pla, tip);

	if (ar->getListaAvion()->existeAvionPorPlaca(pla) == false) {
		if (ar->ingresarAvion(*com))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();


	cout << ar->getListaAvion()->toString();


	system("pause");
}

void Interfaz::ingresarAvionCarga(Aeropuerto* ar)
{
	Avion* car = NULL;
	Fecha* fech = NULL;
	string pla, cat, tip;
	int  dd, mm, yy;
	double dis, anch, alt;

	system("cls");
	cout << endl;
	cout << "---------------CREACION DE AVION DE CARGA---------------" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "   Ingrese el numero de placa: ";
	cin >> pla;
	cout << "   Ingresando la fecha de creacion: " << endl;
	cout << "   Ingrese el dia: ";
	cin >> dd;
	cout << "   Ingrese el mes: ";
	cin >> mm;
	cout << "   Ingrese el anio: ";
	cin >> yy;
	cout << "   Ingrese la distancia recorrida por el avion: ";
	cin >> dis;
	cout << "   Ingrese la categoria: ";
	cin >> cat;
	cout << "   Ingrese el tipo: ";
	cin >> tip; 
	cout << "   Ingrese el alto de la puerta: ";
	cin >> alt;
	cout << "   Ingrese el ancho de la puerta: ";
	cin >> anch; cout << endl;

	fech = new Fecha(dd, mm, yy);
	car = new AvionCarga(*fech, dis, cat, pla, tip,alt,anch);

	if (ar->getListaAvion()->existeAvionPorPlaca(pla) == false) {
		if (ar->ingresarAvion(*car))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();


	cout << ar->getListaAvion()->toString();


	system("pause");
}

void Interfaz::ingresaAvionMilitar(Aeropuerto* ar)
{
	Avion* mil = NULL;
	Fecha* fech = NULL;
	string pla, cat, tip;
	int  dd, mm, yy;
	double dis, vel;

	system("cls");
	cout << endl;
	cout << "---------------CREACION DE AVION MILITAR--------------" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "   Ingrese el numero de placa: ";
	cin >> pla;
	cout << "   Ingresando la fecha de creacion: " << endl;
	cout << "   Ingrese el dia: ";
	cin >> dd;
	cout << "   Ingrese el mes: ";
	cin >> mm;
	cout << "   Ingrese el anio: ";
	cin >> yy;
	cout << "   Ingrese la distancia recorrida por el avion: ";
	cin >> dis;
	cout << "   Ingrese la categoria: ";
	cin >> cat;
	cout << "   Ingrese el tipo: ";
	cin >> tip; 
	cout << "   Ingrese la velocidad maxima: ";
	cin >> vel; cout << endl;

	fech = new Fecha(dd, mm, yy);
	mil = new AvionMilitar(*fech, dis, cat, tip, pla,vel);

	if (ar->getListaAvion()->existeAvionPorPlaca(pla) == false) {
		if (ar->ingresarAvion(*mil))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();




	cout << ar->getListaAvion()->toString();


	system("pause");
}

void Interfaz::ingresarPlaza(Aeropuerto* ar)
{
	Plaza* pla = NULL;
	string cod, desc;

	system("cls");
	cout << endl;
	cout << "------------------CREACION DE UNA PLAZA-----------------" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "   Ingrese el codigo de plaza: ";
	cin >> cod;
	cout << "   Ingrese la descripcion de la plaza: ";
	cin >> desc; cout << endl;


	pla = new Plaza(cod,desc,false);

	if (ar->getListaPlaza()->existePlaza(cod) == false) {
		if (ar->ingresarPlaza(*pla))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();


	cout << ar->getListaPlaza()->toString();


	system("pause");
}

void Interfaz::ingresarServiciosProfesionales(Aeropuerto* ar)
{
	ContratoBase* ser = NULL;
	Empleado* emp = NULL;
	Avion* avi = NULL;
	Fecha* fIng = NULL;
	Fecha* fCul = NULL;
	string desc, cod, tSer, hor, ced, pla; 
	int  dd, mm, yy;
	double sala;

	system("cls");
	cout << endl;
	cout << "---------------CREACION DE CONTRATO DE SERVICIOS PROFESIONALES--------------" << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	
	if (ar->getListaEmpleado()->estaVacio()) msjSinEmpleados(); 
	else
	{
		cout << "   Ingrese el codigo del contrato: ";
		cin >> cod;
		cout << "   Ingrese la descripcion del puesto: ";
		cin >> desc;
		cout << "   Ingrese la fecha de Ingreso: " << endl;
		cout << "   Ingrese el dia: ";
		cin >> dd;
		cout << "   Ingrese el mes: ";
		cin >> mm;
		cout << "   Ingrese el anio: ";
		cin >> yy;

		fIng = new Fecha(dd, mm, yy);

		cout << "   Ingrese la fecha de culminacion: " << endl;
		cout << "   Ingrese el dia: ";
		cin >> dd;
		cout << "   Ingrese el mes: ";
		cin >> mm;
		cout << "   Ingrese el anio: ";
		cin >> yy;

		fCul = new Fecha(dd, mm, yy);

		cout << "   Ingrese el salario: ";
		cin >> sala;
		cout << "   Ingrese el tipo de servicio: ";
		cin >> tSer;
		cout << "   Ingrese el Horario: ";
		cin >> hor;
		cout << "   Ingrese la cedula del empleado que desea ligar a este contrato: ";
		cin >> ced; cout << endl;

		if ( ar->getListaEmpleado()->existeEmpleado(ced) == false) cout << "   \n No exite ningun empleado con esa cedula\n";
		else
		{
			if (ar->getListaNodoContrato()->existeContratoConEmpleado(ced)) cout << "   \n El empleado ya esta asociado a un contrato\n";
			else
			{
				emp = ar->getListaEmpleado()->buscarEmpleadoPorCed(ced);

				if (typeid(*emp) == typeid(Administrativo) || typeid(*emp) == typeid(Miscelaneo))
				{
					ser = new ServiciosProfesionales(desc, cod, sala, *emp, tSer, hor, *fIng, *fCul);

					if (ar->getListaNodoContrato()->existeContrato(cod) == false) {
						if (ar->ingresarContrato(*ser))msjExitoIngresar();
						else msjErorrIngresar();
					}
					else msjErorrIngresar();

					cout << ar->getListaNodoContrato()->toString();
				}
				else
				{
					if (ar->getListaAvion()->estaVacio())cout<<"\n No hay aviones disponibles\n" ;
					else
					{
						if (typeid(*emp) == typeid(Piloto)) {

							cout << ar->getListaAvion()->toString();
							cout << "   Ingrese la placa del avion que desea ligar a este contrato: ";
							cin >> pla; cout << endl;

							if (ar->getListaAvion()->existeAvionPorPlaca(pla) == false) cout << "\n No exite ningun avion con esa placa\n";
							else
							{
								if (ar->getListaNodoContrato()->existeAvionConPiloto(pla)) cout << "   \n Este avion ya posee un Piloto\n";
								else
								{
									avi = ar->getListaAvion()->buscarAvionPorPlaca(pla);

									ser = new ServiciosProfesionales(desc, cod, sala, *avi, *emp,tSer,hor, *fIng, *fCul);

									if (ar->getListaNodoContrato()->existeContrato(cod) == false) {
										if (ar->ingresarContrato(*ser))msjExitoIngresar();
										else msjErorrIngresar();
									}
									else msjErorrIngresar();

									cout << ar->getListaNodoContrato()->toString();


								}

							}
						}

						if (typeid(*emp) == typeid(Copiloto)) {

							if (ar->getListaAvion()->existeAvionCivil() == false)cout << " No exite ningun avion civil\n";
							else
							{
								cout << ar->getListaAvion()->imprimeAvionesCiviles();
								cout << "   Ingrese la placa del avion que desea ligar a este contrato: ";
								cin >> pla; cout << endl;

								if (ar->getListaAvion()->existeAvionCivilPorPlaca(pla) == false) cout << " No exite ningun avion civil con esa placa\n";
								else
								{
									if (ar->getListaNodoContrato()->existeAvionConCopiloto(pla)) cout << " Este avion ya posee un Copiloto\n";
									else
									{
										avi = ar->getListaAvion()->buscarAvionPorPlaca(pla);

										ser = new ServiciosProfesionales(desc, cod, sala, *avi, *emp, tSer, hor, *fIng, *fCul);

										if (ar->getListaNodoContrato()->existeContrato(cod) == false) {
											if (ar->ingresarContrato(*ser))msjExitoIngresar();
											else msjErorrIngresar();
										}
										else msjErorrIngresar();

										cout << ar->getListaNodoContrato()->toString();

									}

								}
							}
						}
						if (typeid(*emp) == typeid(Azafata)) {

							if (ar->getListaAvion()->existeAvionComercial() == false)cout << " No exite ningun avion comercial\n";
							else
							{
								cout << ar->getListaAvion()->imprimeAvionesComerciales();
								cout << "   Ingrese la placa del avion que desea ligar a este contrato: ";
								cin >> pla; cout << endl;

								if (ar->getListaAvion()->existeAvionComercialPorPlaca(pla) == false) cout << " No exite ningun avion comercial con esa placa\n";
								else
								{
									if (ar->getListaNodoContrato()->existeAvionConAzafata(pla)) cout << " Este avion ya posee una azafata\n";
									else
									{
										avi = ar->getListaAvion()->buscarAvionPorPlaca(pla);

										ser = new ServiciosProfesionales(desc, cod, sala, *avi, *emp, tSer, hor, *fIng, *fCul);

										if (ar->getListaNodoContrato()->existeContrato(cod) == false) {
											if (ar->ingresarContrato(*ser))msjExitoIngresar();
											else msjErorrIngresar();
										}
										else msjErorrIngresar();

										cout << ar->getListaNodoContrato()->toString();

									}

								}
							}
						}

					}
					
				}

			}
		}

	}
	system("pause");
}

void Interfaz::ingresarPlazoFijo(Aeropuerto* ar)
{
	ContratoBase* plaza = NULL;
	Empleado* emp = NULL;
	Avion* avi = NULL;
	Fecha* fIng = NULL;
	Fecha* fCul = NULL;
	string desc, cod, ced, pla;
	int  dd, mm, yy;
	double sala;

	system("cls");
	cout << endl;
	cout << "---------------CREACION DE CONTRATO DE PLAZO FIJO--------------" << endl;
	cout << "----------------------------------------------------------------------------" << endl;

	if (ar->getListaEmpleado()->estaVacio()) msjSinEmpleados();
	else
	{
		cout << "   Ingrese el codigo del contrato: ";
		cin >> cod;
		cout << "   Ingrese la descripcion del puesto: ";
		cin >> desc;
		cout << "   Ingrese la fecha de Ingreso: " << endl << endl;
		cout << "   Ingrese el dia: ";
		cin >> dd;
		cout << "   Ingrese el mes: ";
		cin >> mm;
		cout << "   Ingrese el anio: ";
		cin >> yy;

		fIng = new Fecha(dd, mm, yy);
		fCul = new Fecha(dd, mm, yy+2);

		cout << "   Ingrese el salario: ";
		cin >> sala;
		cout << "   Ingrese la cedula del empleado que desea ligar a este contrato: ";
		cin >> ced; cout << endl;

		if (ar->getListaEmpleado()->existeEmpleado(ced) == false) cout << "   \n No exite ningun empleado con esa cedula\n";
		else
		{
			if (ar->getListaNodoContrato()->existeContratoConEmpleado(ced)) cout << "   \n El empleado ya esta asociado a un contrato\n";
			else
			{
				emp = ar->getListaEmpleado()->buscarEmpleadoPorCed(ced);

				if (typeid(*emp) == typeid(Administrativo) || typeid(*emp) == typeid(Miscelaneo))
				{
					plaza = new  PlazoFijo(desc, cod, sala, *emp, *fIng, *fCul);

					if (ar->getListaNodoContrato()->existeContrato(cod) == false) {
						if (ar->ingresarContrato(*plaza))msjExitoIngresar();
						else msjErorrIngresar();
					}
					else msjErorrIngresar();

					cout << ar->getListaNodoContrato()->toString();
				}
				else
				{
					if (ar->getListaAvion()->estaVacio())cout << "\n No hay aviones disponibles\n";
					else
					{
						if (typeid(*emp) == typeid(Piloto)) {

							cout << ar->getListaAvion()->toString();
							cout << "   Ingrese la placa del avion que desea ligar a este contrato: ";
							cin >> pla; cout << endl;

							if (ar->getListaAvion()->existeAvionPorPlaca(pla) == false) cout << "\n No exite ningun avion con esa placa\n";
							else
							{
								if (ar->getListaNodoContrato()->existeAvionConPiloto(pla)) cout << "   \n Este avion ya posee un Piloto\n";
								else
								{
									avi = ar->getListaAvion()->buscarAvionPorPlaca(pla);

									plaza = new  PlazoFijo(desc, cod, sala, *avi, *emp,*fIng, *fCul);

									if (ar->getListaNodoContrato()->existeContrato(cod) == false) {
										if (ar->ingresarContrato(*plaza))msjExitoIngresar();
										else msjErorrIngresar();
									}
									else msjErorrIngresar();

									cout << ar->getListaNodoContrato()->toString();


								}

							}
						}

						if (typeid(*emp) == typeid(Copiloto)) {

							if (ar->getListaAvion()->existeAvionCivil() == false)cout << " No exite ningun avion civil\n";
							else
							{
								cout << ar->getListaAvion()->imprimeAvionesCiviles();
								cout << "   Ingrese la placa del avion que desea ligar a este contrato: ";
								cin >> pla; cout << endl;

								if (ar->getListaAvion()->existeAvionCivilPorPlaca(pla) == false) cout << " No exite ningun avion civil con esa placa\n";
								else
								{
									if (ar->getListaNodoContrato()->existeAvionConCopiloto(pla)) cout << " Este avion ya posee un Copiloto\n";
									else
									{
										avi = ar->getListaAvion()->buscarAvionPorPlaca(pla);

										plaza = new  PlazoFijo(desc, cod, sala, *avi, *emp, *fIng, *fCul);

										if (ar->getListaNodoContrato()->existeContrato(cod) == false) {
											if (ar->ingresarContrato(*plaza))msjExitoIngresar();
											else msjErorrIngresar();
										}
										else msjErorrIngresar();

										cout << ar->getListaNodoContrato()->toString();

									}

								}
							}
						}
						if (typeid(*emp) == typeid(Azafata)) {

							if (ar->getListaAvion()->existeAvionComercial() == false)cout << " No exite ningun avion comercial\n";
							else
							{
								cout << ar->getListaAvion()->imprimeAvionesComerciales();
								cout << "   Ingrese la placa del avion que desea ligar a este contrato: ";
								cin >> pla; cout << endl;

								if (ar->getListaAvion()->existeAvionComercialPorPlaca(pla) == false) cout << " No exite ningun avion comercial con esa placa\n";
								else
								{
									if (ar->getListaNodoContrato()->existeAvionConAzafata(pla)) cout << " Este avion ya posee una azafata\n";
									else
									{
										avi = ar->getListaAvion()->buscarAvionPorPlaca(pla);

										plaza = new  PlazoFijo(desc, cod, sala, *avi, *emp, *fIng, *fCul);

										if (ar->getListaNodoContrato()->existeContrato(cod) == false) {
											if (ar->ingresarContrato(*plaza))msjExitoIngresar();
											else msjErorrIngresar();
										}
										else msjErorrIngresar();

										cout << ar->getListaNodoContrato()->toString();

									}

								}
							}
						}

					}

				}

			}
		}

	}
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

void Interfaz::msjSinEmpleados()
{

	cout << "\n No se puede crear el contrato debido a que no hay ningun empleado registrado" << endl;
}


