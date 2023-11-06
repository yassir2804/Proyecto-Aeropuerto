#include "Interfaz.h"

int Interfaz::menuPrincipal()
{
		int op;
		system("cls");
		cout << endl;
		cout << "------------GESTION DE AEROPUERTO----------" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "*-------------------MENU------------------*" << endl<<endl;
		cout << "	<1>  Ingresar.                         " << endl;
		cout << "	<2>  Mantenimiento.                    " << endl;
		cout << "	<3>  Reportes.                         " << endl;
		cout << "	<4>  Consultar.                        " << endl;
		cout << "	<5>  Salir.                            " << endl<<endl;
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
	cout << "*-----------------------------------------*" <<endl<< endl;
	cout << "   <1>  Ingresar Empleado.               " << endl;
	cout << "   <2>  Ingresar Avion.                  " << endl;
	cout << "   <3>  Ingresar Plaza.                  " << endl;
	cout << "   <4>  Ingresar Contrato.               " << endl;
	cout << "   <5>  Regresar.                        " << endl << endl;
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
	cout << "*-----------------------------------------------*" << endl << endl;
	cout << "   <1>  Piloto.                                " << endl;
	cout << "   <2>  Copiloto.                              " << endl;
	cout << "   <3>  Azafata.                               " << endl;
	cout << "   <4>  Administrativo.                        " << endl;
	cout << "   <5>  Miscelaneo.                            " << endl;
	cout << "   <6>  Regresar.                              " << endl << endl;
	cout << "*-----------------------------------------------*" << endl;
	cout << "   Digite la opcion: ";
	cin >> op;
	return op;

}

int Interfaz::menuIngresarAvion()
{
	int op;
	system("cls");
	cout << endl;
	cout << "--------------MENU INGRESAR AVION-------------" << endl;
	cout << "*--------------------------------------------*" << endl << endl;
	cout << "   <1>  Avion Comercial.                    " << endl;
	cout << "   <2>  Avion de Carga.                     " << endl;
	cout << "   <3>  Avion Militar.                      " << endl;
	cout << "   <4>  Regresar.                           " << endl<< endl;
	cout << "*--------------------------------------------*" << endl ;
	cout << "   Digite la opcion: ";
	cin >> op;
	return op;
}

int Interfaz::menuIngresaContrato()
{
	int op;
	system("cls");
	cout << endl;
	cout << "--------------MENU INGRESAR CONTRATO-------------" << endl;
	cout << "*-----------------------------------------------*" << endl << endl;
	cout << "   <1>  Contrato de Servicios Profesionales.   " << endl;
	cout << "   <2>  Contrato de Plazo Fijo.                " << endl;
	cout << "   <3>  Contrato de Tiempo Indefinido.         " << endl;
	cout << "   <4>  Regresar.                              " << endl << endl;
	cout << "*-----------------------------------------------*" << endl;
	cout << "   Digite la opcion: ";
	cin >> op;
	return op;
}

int Interfaz::menuTiempoIndefinido()
{
	int op;
	system("cls");
	cout << endl;
	cout << "--------------MENU DE CONTRATOS DE TIEMPO INDEFINIDO--------------" << endl;
	cout << "*----------------------------------------------------------------*" << endl << endl;
	cout << "   <1>  Renovar contrato vencido.                                 " << endl;
	cout << "   <2>  Cesar contrato vencido.                                   " << endl;
	cout << "   <3>  Regresar.                                                 " << endl << endl;
	cout << "*----------------------------------------------------------------*" << endl;
	cout << "   Digite la opcion: ";
	cin >> op;
	return op;
}

int Interfaz::menuMantenimiento()
{
	int op;
	system("cls");
	cout << endl;
	cout << "--------------MENU DE MANTENIMIENTO--------------" << endl;
	cout << "*-----------------------------------------------*" << endl << endl;
	cout << "   <1>  Editar.                                 " << endl;
	cout << "   <2>  Eliminar.                                   " << endl;
	cout << "   <3>  Regresar.                                                 " << endl << endl;
	cout << "*-----------------------------------------------*" << endl;
	cout << "   Digite la opcion: ";
	cin >> op;
	return op;

}

int Interfaz::menuEditar()
{
	int op;
	system("cls");
	cout << endl;
	cout << "--------------MENU DE EDICION-------------" << endl;
	cout << "*-----------------------------------------*" << endl << endl;
	cout << "   <1>  Editar Empleado.               " << endl;
	cout << "   <2>  Editar Avion.                  " << endl;
	cout << "   <3>  Editar Contrato.               " << endl;
	cout << "   <4>  Regresar.                        " << endl << endl;
	cout << "*-----------------------------------------*" << endl;
	cout << "   Digite la opcion: ";
	cin >> op;
	return op;
}

int Interfaz::menuEliminar()
{
	int op;
	system("cls");
	cout << endl;
	cout << "--------------MENU DE ELIMINAR-------------" << endl;
	cout << "*-----------------------------------------*" << endl << endl;
	cout << "   <1>  Eliminar Empleado.               " << endl;
	cout << "   <2>  Eliminar Avion.                  " << endl;
	cout << "   <3>  Eliminar Contrato.               " << endl;
	cout << "   <4>  Regresar.                        " << endl << endl;
	cout << "*-----------------------------------------*" << endl;
	cout << "   Digite la opcion: ";
	cin >> op;
	return op;
}

int Interfaz::menuEditarEmpleado()
{
	int op;
	system("cls");
	cout << endl;
	cout << "--------------MENU EDITAR EMPLEADO-------------" << endl;
	cout << "*---------------------------------------------*" << endl << endl;
	cout << "   <1>  Editar nombre.               " << endl;
	cout << "   <2>  Editar edad.                  " << endl;
	cout << "   <3>  Editar ocupacion.               " << endl;
	cout << "   <4>  Editar anios de experiencia.               " << endl;
	cout << "   <5>  Editar telefono.               " << endl;
	cout << "   <6>  Editar nacionalidad.               " << endl;
	cout << "   <7>  Editar titulo universitario.               " << endl;
	cout << "   <8>  Editar grado de escolaridad.               " << endl;
	cout << "   <9>  Regresar.                        " << endl << endl;
	cout << "*-----------------------------------------*" << endl;
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
	cout << "*----------------------------------------------*" << endl<<endl;
	cout << "   Cedula: ";
	cin >> ced;	cout << endl;
	cout << "   Nombre: ";
	cin >> nom;	cout << endl;
	cout << "   Edad: ";
	cin >> ed;	cout << endl;
	cout << "   Puesto: ";
	cin >> pues;	cout << endl;
	cout << "   Anios de experiencia: ";
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
	cout << "*------------------------------------------------*" << endl;
	cout << "   Cedula: ";
	cin >> ced;cout << endl;
	cout << "   Nombre: ";
	cin >> nom;cout << endl;
	cout << "   Edad: ";
	cin >> ed;cout << endl;
	cout << "   Puesto: ";
	cin >> pues;cout << endl;
	cout << "   Numero de telefono: ";
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
	cout << "*-----------------------------------------------*" << endl;
	cout << "   Cedula: ";
	cin >> ced;cout << endl;
	cout << "   Nombre: ";
	cin >> nom;cout << endl;
	cout << "   Edad: ";
	cin >> ed;cout << endl;
	cout << "  Puesto: ";
	cin >> pues;cout << endl;
	cout << "   Nacionalidad: ";
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
	cout << "*------------------------------------------------------*" << endl;
	cout << "  Cedula: ";
	cin >> ced;cout << endl;
	cout << "   Nombre: ";
	cin >> nom;cout << endl;
	cout << "   Edad: ";
	cin >> ed;cout << endl;
	cout << "   Puesto: ";
	cin >> pues;cout << endl;
	cout << "   Titulo Universitario: ";
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
	cout << "*--------------------------------------------------*" << endl;
	cout << "  Cedula: ";
	cin >> ced;cout << endl;
	cout << "   Nombre: ";
	cin >> nom;cout << endl;
	cout << "   Edad: ";
	cin >> ed;cout << endl;
	cout << "   Puesto: ";
	cin >> pues;cout << endl;
	cout << "   Grado: ";
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
	cout << "*------------------------------------------------------*" << endl;
	cout << "   Numero de placa: ";
	cin >> pla;cout << endl;
	cout << "   Fecha de creacion: "<<endl;
	cout << "   Ingrese el dia: ";
	cin >> dd;
	cout << "   Ingrese el mes: ";
	cin >> mm;
	cout << "   Ingrese el anio: ";
	cin >> yy;cout << endl;
	cout << "   Digite la distancia recorrida por el avion: ";
	cin >> dis;cout << endl;
	cout << "   Ingrese la categoria: ";
	cin >> cat;cout << endl;
	cout << "   Digite el tipo del avion: ";
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
	cout << "*------------------------------------------------------*" << endl;
	cout << "   Numero de placa: ";
	cin >> pla;cout << endl;
	cout << "   Ingresando la fecha de creacion: " << endl;
	cout << "   Ingrese el dia: ";
	cin >> dd;
	cout << "   Ingrese el mes: ";
	cin >> mm;
	cout << "   Ingrese el anio: ";
	cin >> yy;cout << endl;
	cout << "   Digite la distancia recorrida por el avion: ";
	cin >> dis;cout << endl;
	cout << "   Ingrese la categoria: ";
	cin >> cat;cout << endl;
	cout << "   Digite el tipo del avion: ";
	cin >> tip; cout << endl;
	cout << "   Digite el alto de la puerta: ";
	cin >> alt;cout << endl;
	cout << "   Digite el ancho de la puerta: ";
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
	cout << "*----------------------------------------------------*" << endl;
	cout << "   Numero de placa: ";
	cin >> pla;cout << endl;
	cout << "   Ingresando la fecha de creacion: " << endl;
	cout << "   Ingrese el dia: ";
	cin >> dd;
	cout << "   Ingrese el mes: ";
	cin >> mm;
	cout << "   Ingrese el anio: ";
	cin >> yy;cout << endl;
	cout << "   Digite la distancia recorrida por el avion: ";
	cin >> dis;cout << endl;
	cout << "   Ingrese la categoria: ";
	cin >> cat;cout << endl;
	cout << "   Digite el tipo del avion: ";
	cin >> tip; cout << endl;
	cout << "   Digite la velocidad maxima: ";
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
	cout << "*------------------------------------------------------*" << endl;
	cout << "   Ingrese el codigo de plaza: ";
	cin >> cod;cout << endl; 
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
	cout << "----------CREACION DE CONTRATO DE SERVICIOS PROFESIONALES----------" << endl;
	cout << "*-----------------------------------------------------------------*" << endl;
	
	if (ar->getListaEmpleado()->estaVacio()) msjSinEmpleados(); 
	else
	{
		cout << "   Digite el codigo del contrato: ";
		cin >> cod;cout << endl;
		cout << "   Descripcion del puesto: ";
		cin >> desc;cout << endl;
		cout << "   Ingrese la fecha de Ingreso: " << endl;
		cout << "   Ingrese el dia: ";
		cin >> dd;
		cout << "   Ingrese el mes: ";
		cin >> mm;
		cout << "   Ingrese el anio: ";
		cin >> yy;cout << endl;

		fIng = new Fecha(dd, mm, yy);

		cout << "   Ingrese la fecha de culminacion: " << endl;
		cout << "   Ingrese el dia: ";
		cin >> dd;
		cout << "   Ingrese el mes: ";
		cin >> mm;
		cout << "   Ingrese el anio: ";
		cin >> yy;cout << endl;

		fCul = new Fecha(dd, mm, yy);

		cout << "   Salario: ";
		cin >> sala;cout << endl;
		cout << "   Tipo de servicio: ";
		cin >> tSer;cout << endl;
		cout << "   Horario: ";
		cin >> hor;cout << endl;
		cout << "   Ingrese la cedula del empleado que desea ligar a este contrato: ";
		cin >> ced; cout << endl;

		if ( ar->getListaEmpleado()->existeEmpleado(ced) == false) cout << "   \n No existe ningun empleado con esa cedula\n";
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

							if (ar->getListaAvion()->existeAvionPorPlaca(pla) == false) cout << "\n No existe ningun avion con esa placa\n";
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

							if (ar->getListaAvion()->existeAvionCivil() == false)cout << " No existe ningun avion civil\n";
							else
							{
								cout << ar->getListaAvion()->imprimeAvionesCiviles();
								cout << "   Ingrese la placa del avion que desea ligar a este contrato: ";
								cin >> pla; cout << endl;

								if (ar->getListaAvion()->existeAvionCivilPorPlaca(pla) == false) cout << " No existe ningun avion civil con esa placa\n";
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

							if (ar->getListaAvion()->existeAvionComercial() == false)cout << " No existe ningun avion comercial\n";
							else
							{
								cout << ar->getListaAvion()->imprimeAvionesComerciales();
								cout << "   Ingrese la placa del avion que desea ligar a este contrato: ";
								cin >> pla; cout << endl;

								if (ar->getListaAvion()->existeAvionComercialPorPlaca(pla) == false) cout << " No existe ningun avion comercial con esa placa\n";
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
	ContratoBase* plazo = NULL;
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
	cout << "*-------------------------------------------------------------*" << endl;

	if (ar->getListaEmpleado()->estaVacio()) msjSinEmpleados();
	else
	{
		cout << "   Codigo del contrato: ";
		cin >> cod;cout << endl; 
		cout << "  Descripcion del puesto: ";
		cin >> desc;cout << endl; 
		cout << "   Ingrese la fecha de Ingreso: " << endl << endl;
		cout << "   Ingrese el dia: ";
		cin >> dd;
		cout << "   Ingrese el mes: ";
		cin >> mm;
		cout << "   Ingrese el anio: ";
		cin >> yy;cout << endl;  

		fIng = new Fecha(dd, mm, yy);
		fCul = new Fecha(dd, mm, yy+2);

		cout << "  Salario: ";
		cin >> sala;cout << endl; 
		cout << "   Digite la cedula del empleado que desea ligar a este contrato: ";
		cin >> ced; cout << endl;

		if (ar->getListaEmpleado()->existeEmpleado(ced) == false)msjNoExisteCedula();
		else
		{
			if (ar->getListaNodoContrato()->existeContratoConEmpleado(ced)) cout << "   \n El empleado ya esta asociado a un contrato\n";
			else
			{
				emp = ar->getListaEmpleado()->buscarEmpleadoPorCed(ced);

				if (typeid(*emp) == typeid(Administrativo) || typeid(*emp) == typeid(Miscelaneo))
				{
					plazo = new  PlazoFijo(desc, cod, sala, *emp, *fIng, *fCul);

					if (ar->getListaNodoContrato()->existeContrato(cod) == false) {
						if (ar->ingresarContrato(*plazo))msjExitoIngresar();
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
							cout << "   Digite la placa del avion que desea ligar a este contrato: ";
							cin >> pla; cout << endl;

							if (ar->getListaAvion()->existeAvionPorPlaca(pla) == false) cout << "\n No exite ningun avion con esa placa\n";
							else
							{
								if (ar->getListaNodoContrato()->existeAvionConPiloto(pla)) cout << "   \n Este avion ya posee un Piloto\n";
								else
								{
									avi = ar->getListaAvion()->buscarAvionPorPlaca(pla);

									plazo = new  PlazoFijo(desc, cod, sala, *avi, *emp,*fIng, *fCul);

									if (ar->getListaNodoContrato()->existeContrato(cod) == false) {
										if (ar->ingresarContrato(*plazo))msjExitoIngresar();
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
								cout << "   Digite la placa del avion que desea ligar a este contrato: ";
								cin >> pla; cout << endl;

								if (ar->getListaAvion()->existeAvionCivilPorPlaca(pla) == false) cout << " No exite ningun avion civil con esa placa\n";
								else
								{
									if (ar->getListaNodoContrato()->existeAvionConCopiloto(pla)) cout << " Este avion ya posee un Copiloto\n";
									else
									{
										avi = ar->getListaAvion()->buscarAvionPorPlaca(pla);

										plazo = new  PlazoFijo(desc, cod, sala, *avi, *emp, *fIng, *fCul);

										if (ar->getListaNodoContrato()->existeContrato(cod) == false) {
											if (ar->ingresarContrato(*plazo))msjExitoIngresar();
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
								cout << "   Digite la placa del avion que desea ligar a este contrato: ";
								cin >> pla; cout << endl;

								if (ar->getListaAvion()->existeAvionComercialPorPlaca(pla) == false) cout << " No exite ningun avion comercial con esa placa\n";
								else
								{
									if (ar->getListaNodoContrato()->existeAvionConAzafata(pla)) cout << " Este avion ya posee una azafata\n";
									else
									{
										avi = ar->getListaAvion()->buscarAvionPorPlaca(pla);

										plazo = new  PlazoFijo(desc, cod, sala, *avi, *emp, *fIng, *fCul);

										if (ar->getListaNodoContrato()->existeContrato(cod) == false) {
											if (ar->ingresarContrato(*plazo))msjExitoIngresar();
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
void Interfaz::renovarTiempoIndefinido(Aeropuerto* ar)
{
	ContratoBase* tiem = NULL;
	ContratoBase* plazo = NULL;
	Plaza* pla = NULL;
	Fecha* act = NULL;
	Fecha* fIng = NULL;
	string cod;
	int  dd, mm, yy;
	double sala;

	system("cls");
	cout << endl;
	cout << "-----------CREACION DE CONTRATO DE TIEMPO INDEFINIDO-----------" << endl;
	cout << "*-------------------------------------------------------------*" << endl;

	cout << "   Ingrese la fecha actual: " << endl << endl;
	cout << "   Ingrese el dia: ";
	cin >> dd;
	cout << "   Ingrese el mes: ";
	cin >> mm;
	cout << "   Ingrese el anio: ";
	cin >> yy;cout << endl;

	act = new Fecha(dd, mm, yy);


	if (ar->getListaNodoContrato()->existenContratosVencidos(*act)== false)cout << "\n   No hay contratos vencidos disponibles\n";
	else
	{
		cout << ar->getListaNodoContrato()->imprimirContratosVencidos(*act);
		cout << "   Digite el codigo del contrato que desea seleccionar: ";
		cin >> cod; cout << endl;

		if (ar->getListaNodoContrato()->existeContratoVencidoConCod(*act,cod) == false) cout << "   No existe nigun contrato para renovar con ese codigo\n";
		else
		{
			plazo = ar->getListaNodoContrato()->buscarContratoPorCod(cod);


			if(ar->getListaPlaza()->existePlazaParaPuesto(plazo->getEmpleado()->getOcupacion())== false)cout << "\n   No existen plazas\n";
			else

			{
				cout << "---------------INGRESANDO DATOS NUEVOS--------------" << endl;
				cout << "----------------------------------------------------" << endl;
				cout << ar->getListaPlaza()->imprimirPlazasDisponibles(plazo->getEmpleado()->getOcupacion());

				cout << "   Digite el codigo de la plaza que desea seleccionar: ";
				cin >> cod;cout << endl;

				if (ar->getListaPlaza()->existePlazaDisponible(cod, plazo->getEmpleado()->getOcupacion()) == false) cout << "\n   No hay plazas disponibles con ese codigo\n";
				else 
				{

					pla = ar->getListaPlaza()->buscarPlazaPorCodigo(cod);


					cout << "   Digite el nuevo codigo del contrato: ";
					cin >> cod;cout << endl;

					cout << "   Salario: ";
					cin >> sala;cout << endl;

					cout << "   Ingrese la fecha de Ingreso: " << endl;
					cout << "   Ingrese el dia: ";
					cin >> dd;
					cout << "   Ingrese el mes: ";
					cin >> mm;
					cout << "   Ingrese el anio: ";
					cin >> yy;  cout<<endl;

					fIng = new Fecha(dd, mm, yy);

					if(typeid(*plazo->getEmpleado()) == typeid(Administrativo) || typeid(*plazo->getEmpleado()) == typeid(Miscelaneo))tiem = new TiempoIndefinido(plazo->getDescPuesto(), cod, plazo->getSalario(), *plazo->getEmpleado(), *pla, *fIng);
					else tiem = new TiempoIndefinido(plazo->getDescPuesto(), cod, plazo->getSalario(),*plazo->getAvion(), *plazo->getEmpleado(), *pla, *fIng);

					if (ar->getListaNodoContrato()->existeContrato(cod) == false) {
						if (ar->ingresarContrato(*tiem)) {

							pla->setOcupada(true);
							msjExitoIngresar();
							ar->getListaNodoContrato()->eliminaContratoPorCodigo(plazo->getCodContrato());

						}
					
						else msjErorrIngresar();
					}
					else msjErorrIngresar();


					cout << ar->getListaNodoContrato()->toString();
				}

			}

		}
		
	}

	system("pause");
}

void Interfaz::cesarTiempoIndefinido(Aeropuerto* ar)
{
	Fecha* act = NULL;
	string cod;
	int  dd, mm, yy;

	system("cls");
	cout << endl;
	cout << "-----------CESE DE CONTRATO DE TIEMPO INDEFINIDO-----------" << endl;
	cout << "*-------------------------------------------------------------*" << endl;

	cout << "   Ingrese la fecha actual: " << endl << endl;
	cout << "   Ingrese el dia: ";
	cin >> dd;
	cout << "   Ingrese el mes: ";
	cin >> mm;
	cout << "   Ingrese el anio: ";
	cin >> yy; cout << endl;

	act = new Fecha(dd, mm, yy);

	if (ar->getListaNodoContrato()->existenContratosVencidos(*act) == false)cout << "\n   No hay contratos vencidos disponibles\n";
	else
	{
		cout << ar->getListaNodoContrato()->imprimirContratosVencidos(*act);
		cout << "   Digite el codigo del contrato que desea seleccionar: ";
		cin >> cod; cout << endl;


		if (ar->getListaNodoContrato()->existeContratoVencidoConCod(*act, cod) == false) cout << "   No existe nigun contrato para eliminar con ese codigo\n";
		else
		{
			if (ar->getListaNodoContrato()->eliminaContratoPorCodigo(cod))msjExitoEliminar();
			else msjErrorEliminar();
		}
	}
	system("pause");
}

void Interfaz::editarNombre(Aeropuerto* ar)
{
	system("cls");
	cout << endl;
	cout << "-----------EDITAR NOMBRE-----------" << endl;
	cout << "*---------------------------------*" << endl<<endl;
	if (ar->getListaEmpleado()->estaVacio()) msjSinEmpleados();
	else
	{
		cout<<ar->getListaEmpleado()->toString();

	}

	system("pause");
}

void Interfaz::msjErorrIngresar()
{
	cout << "   Fallo al ingresar" << endl<<endl;
}

void Interfaz::msjExitoIngresar()
{
	cout << "   Se ingreso con exito" << endl<<endl;
}

void Interfaz::msjSinEmpleados()
{

	cout << "No hay ningun empleado registrado" << endl<<endl;
}

void Interfaz::msjNoExisteCedula()
{
	cout << " No existe ningun empleado con esa cedula" << endl << endl;
}

void Interfaz::msjErrorEliminar()
{
	cout << "   Fallo al Eliminar" << endl << endl;
}

void Interfaz::msjExitoEliminar()
{
	cout << "   Se elimino con exito" << endl << endl;
}


