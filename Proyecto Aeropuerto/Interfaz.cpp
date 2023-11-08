#include "Interfaz.h"

int Interfaz::menuPrincipal()
{
	int op;
	system("cls");
	cout << endl;
	cout << "------------GESTION DE AEROPUERTO----------" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "*-------------------MENU------------------*" << endl << endl;
	cout << "	<1>  Ingresar.                          " << endl;
	cout << "	<2>  Mantenimiento.                     " << endl;
	cout << "	<3>  Reportes.                          " << endl;
	cout << "	<4>  Consultar.                         " << endl;
	cout << "	<5>  Salir.                             " << endl << endl;
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
	cout << "*-----------------------------------------*" << endl << endl;
	cout << "	<1>  Ingresar Empleado.                 " << endl;
	cout << "	<2>  Ingresar Avion.                    " << endl;
	cout << "	<3>  Ingresar Plaza.                    " << endl;
	cout << "	<4>  Ingresar Contrato.                 " << endl;
	cout << "	<5>  Regresar.                          " << endl << endl;
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
	cout << "	<1>  Piloto.                                  " << endl;
	cout << "	<2>  Copiloto.                                " << endl;
	cout << "	<3>  Azafata.                                 " << endl;
	cout << "	<4>  Administrativo.                          " << endl;
	cout << "	<5>  Miscelaneo.                              " << endl;
	cout << "	<6>  Regresar.                                " << endl << endl;
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
	cout << "	<1>  Avion Comercial.                      " << endl;
	cout <<	"	<2>  Avion de Carga.                       " << endl;
	cout << "	<3>  Avion Militar.                        " << endl;
	cout << "	<4>  Regresar.                             " << endl << endl;
	cout << "*--------------------------------------------*" << endl;
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
	cout << "	<1>  Contrato de Servicios Profesionales.     " << endl;
	cout << "	<2>  Contrato de Plazo Fijo.                  " << endl;
	cout << "	<3>  Contrato de Tiempo Indefinido.           " << endl;
	cout << "	<4>  Regresar.                                " << endl << endl;
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
	cout << "	<1>  Renovar contrato vencido.                                 " << endl;
	cout << "	<2>  Cesar contrato vencido.                                   " << endl;
	cout << "	<3>  Regresar.                                                 " << endl << endl;
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
	cout << "	<1>  Editar.                                  " << endl;
	cout << "	<2>  Eliminar.                                " << endl;
	cout << "	<3>  Regresar.                                " << endl << endl;
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
	cout << "	<1>  Editar Empleado.                   " << endl;
	cout << "	<2>  Editar Avion.                      " << endl;
	cout << "	<3>  Editar Contrato.                   " << endl;
	cout << "	<4>  Regresar.                          " << endl << endl;
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
	cout << "	<1>  Eliminar Empleado.                 " << endl;
	cout << "	<2>  Eliminar Avion.                    " << endl;
	cout << "	<3>  Eliminar Contrato.                 " << endl;
	cout << "	<4>  Regresar.                          " << endl << endl;
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
	cout << "	<1>  Editar nombre.                         " << endl;
	cout << "	<2>  Editar edad.                           " << endl;
	cout << "	<3>  Editar ocupacion.                      " << endl;
	cout << "	<4>  Editar anios de experiencia.           " << endl;
	cout << "	<5>  Editar telefono.                       " << endl;
	cout << "	<6>  Editar nacionalidad.                   " << endl;
	cout << "	<7>  Editar titulo universitario.           " << endl;
	cout << "	<8>  Editar grado de escolaridad.           " << endl;
	cout << "	<9>  Regresar.                              " << endl << endl;
	cout << "*---------------------------------------------*" << endl;
	cout << "   Digite la opcion: ";
	cin >> op;
	return op;
}

int Interfaz::menuEditarAvion()
{
	int op;
	system("cls");
	cout << endl;
	cout << "--------------MENU EDITAR AVION-------------" << endl;
	cout << "*------------------------------------------*" << endl << endl;
	cout << "	<1>  Editar distancia recorrida.         " << endl;
	cout << "	<2>  Editar categoria.                   " << endl;
	cout << "	<3>  Editar tipo.                        " << endl;
	cout << "	<4>  Editar el ancho de la puerta.       " << endl;
	cout << "	<5>  Editar el altura de la puerta.      " << endl;
	cout << "	<6>  Editar velocidad maxima.            " << endl;
	cout << "	<7>  Regresar.                           " << endl << endl;
	cout << "*------------------------------------------*" << endl;
	cout << "   Digite la opcion: ";
	cin >> op;
	return op;
}

int Interfaz::menuEditarContrato()
{
	int op;
	system("cls");
	cout << endl;
	cout << "-------------MENU EDITAR CONTRATO-------------" << endl;
	cout << "*--------------------------------------------*" << endl << endl;
	cout << "	<1>  Editar salario.                       " << endl;
	cout << "	<2>  Editar horario.                       " << endl;
	cout << "	<3>  Editar estado para la renovacion.     " << endl;
	cout << "	<4>  Regresar.                             " << endl << endl;
	cout << "*--------------------------------------------*" << endl;
	cout << "   Digite la opcion: ";
	cin >> op;
	return op;
}

int Interfaz::menuDeReportes()
{
	int op; 
	system("cls"); 
	cout << endl; 
	cout << "------------------------MENU DE REPORTES DEL AEROPUERTO-----------------------" << endl;
	cout << "*----------------------------------------------------------------------------*" << endl << endl;
	cout << "   <1>   Reporte de contratos con sus empleados.                              " << endl;
	cout << "   <2>   Reporte de aeronaves con su tripulacion.                             " << endl;
	cout << "   <3>   Reporte de todas las aeronaves.                                      " << endl;
	cout << "   <4>   Reporte de todas las personas contratadas.                           " << endl;
	cout << "   <5>   Reporte de los pilotos de los aviones de carga.                      " << endl;
	cout << "   <6>   Reporte de los aviones con mas de 20 años en uso.                    " << endl;
	cout << "   <7>   Reporte de los contratos de Servicios Profecionales.                 " << endl;
	cout << "   <8>   Reporte de los contratos de Plazo Fijo.                              " << endl;
	cout << "   <9>   Reporte de los contratos de tiempo indefinido.                       " << endl;
	cout << "   <10>  Reporte de las tripulaciones de los aviones comerciales.             " << endl; 
	cout << "   <11>  Reporte de los contratos de plazo fijo con mas de 2 años             " << endl;
	cout << "   <12>  Reporte del avion de carga con la puerta mas grande.                 " << endl;
	cout << "   <13>  Regresar.                                                            " << endl << endl;
	cout << "*-----------------------------------------------------------------------------*" << endl;
	cout << "   Digite la opcion: ";
	cin >> op; 
	return op; 
}

int Interfaz::menuDeConsultas()
{
	int op; 
	system("cls"); 
	cout << endl; 
	cout << "------------------------------MENU DE CONSULTAS-------------------------------" << endl;
	cout << "*----------------------------------------------------------------------------*" << endl << endl;
	cout << "   <1>  Consulta de trabajador por cedula que a que aeronave pertenece.       " << endl;
	cout << "   <2>  Consulta por numero de contrato y tipo de contrato.                   " << endl;
	cout << "   <3>  Consulta de informacion de aeronave de aviacion civil por su placa.   " << endl;
	cout << "   <4>  Regresar.                                                             " << endl << endl;
	cout << "*----------------------------------------------------------------------------*" << endl;
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
	cout << "*----------------------------------------------*" << endl << endl;
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

	if (ar->existeEmpleadoConCed(ced) == false) {
		if (ar->ingresarEmpleado(*pil))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();

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
	cin >> ced; cout << endl;
	cout << "   Nombre: ";
	cin >> nom; cout << endl;
	cout << "   Edad: ";
	cin >> ed; cout << endl;
	cout << "   Puesto: ";
	cin >> pues; cout << endl;
	cout << "   Numero de telefono: ";
	cin >> tel; cout << endl;


	copi = new Copiloto(nom, ced, ed, pues, tel);

	if (ar->existeEmpleadoConCed(ced) == false) {
		if (ar->ingresarEmpleado(*copi))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();


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
	cin >> ced; cout << endl;
	cout << "   Nombre: ";
	cin >> nom; cout << endl;
	cout << "   Edad: ";
	cin >> ed; cout << endl;
	cout << "  Puesto: ";
	cin >> pues; cout << endl;
	cout << "   Nacionalidad: ";
	cin >> naci; cout << endl;


	aza = new Azafata(nom, ced, ed, pues, naci);

	if (ar->existeEmpleadoConCed(ced) == false) {
		if (ar->ingresarEmpleado(*aza))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();



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
	cin >> ced; cout << endl;
	cout << "   Nombre: ";
	cin >> nom; cout << endl;
	cout << "   Edad: ";
	cin >> ed; cout << endl;
	cout << "   Puesto: ";
	cin >> pues; cout << endl;
	cout << "   Titulo Universitario: ";
	cin >> tit; cout << endl;


	admi = new Administrativo(nom, ced, ed, pues, tit);

	if (ar->existeEmpleadoConCed(ced) == false) {
		if (ar->ingresarEmpleado(*admi))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();



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
	cin >> ced; cout << endl;
	cout << "   Nombre: ";
	cin >> nom; cout << endl;
	cout << "   Edad: ";
	cin >> ed; cout << endl;
	cout << "   Puesto: ";
	cin >> pues; cout << endl;
	cout << "   Grado: ";
	cin >> gra; cout << endl;


	mis = new Miscelaneo(nom, ced, ed, pues, gra);

	if (ar->existeEmpleadoConCed(ced) == false) {
		if (ar->ingresarEmpleado(*mis))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();




	system("pause");
}

void Interfaz::ingresarAvionComercial(Aeropuerto* ar)
{
	Avion* com = NULL;
	Fecha* fech = NULL;
	string pla, cat, tip;
	int dd, mm, yy;
	double dis;

	system("cls");
	cout << endl;
	cout << "---------------CREACION DE AVION COMERCIAL--------------" << endl;
	cout << "*------------------------------------------------------*" << endl;
	cout << "   Numero de placa: ";
	cin >> pla; cout << endl;
	cout << "   Fecha de creacion: " << endl;
	cout << "   Ingrese el dia: ";
	cin >> dd;
	cout << "   Ingrese el mes: ";
	cin >> mm;
	cout << "   Ingrese el anio: ";
	cin >> yy; cout << endl;
	cout << "   Digite la distancia recorrida por el avion: ";
	cin >> dis; cout << endl;
	cout << "   Ingrese la categoria: ";
	cin >> cat; cout << endl;
	cout << "   Digite el tipo del avion: ";
	cin >> tip; cout << endl;

	fech = new Fecha(dd, mm, yy);
	com = new AvionComercial(*fech, dis, cat, pla, tip);

	if (ar->existeAvionPorPlaca(pla) == false) {
		if (ar->ingresarAvion(*com))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();





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
	cin >> pla; cout << endl;
	cout << "   Ingresando la fecha de creacion: " << endl;
	cout << "   Ingrese el dia: ";
	cin >> dd;
	cout << "   Ingrese el mes: ";
	cin >> mm;
	cout << "   Ingrese el anio: ";
	cin >> yy; cout << endl;
	cout << "   Digite la distancia recorrida por el avion: ";
	cin >> dis; cout << endl;
	cout << "   Ingrese la categoria: ";
	cin >> cat; cout << endl;
	cout << "   Digite el tipo del avion: ";
	cin >> tip; cout << endl;
	cout << "   Digite el alto de la puerta: ";
	cin >> alt; cout << endl;
	cout << "   Digite el ancho de la puerta: ";
	cin >> anch; cout << endl;

	fech = new Fecha(dd, mm, yy);
	car = new AvionCarga(*fech, dis, cat, pla, tip, alt, anch);

	if (ar->existeAvionPorPlaca(pla) == false) {
		if (ar->ingresarAvion(*car))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();





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
	cin >> pla; cout << endl;
	cout << "   Ingresando la fecha de creacion: " << endl;
	cout << "   Ingrese el dia: ";
	cin >> dd;
	cout << "   Ingrese el mes: ";
	cin >> mm;
	cout << "   Ingrese el anio: ";
	cin >> yy; cout << endl;
	cout << "   Digite la distancia recorrida por el avion: ";
	cin >> dis; cout << endl;
	cout << "   Ingrese la categoria: ";
	cin >> cat; cout << endl;
	cout << "   Digite el tipo del avion: ";
	cin >> tip; cout << endl;
	cout << "   Digite la velocidad maxima: ";
	cin >> vel; cout << endl;

	fech = new Fecha(dd, mm, yy);
	mil = new AvionMilitar(*fech, dis, cat, tip, pla, vel);

	if (ar->existeAvionPorPlaca(pla) == false) {
		if (ar->ingresarAvion(*mil))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();







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
	cin >> cod; cout << endl;
	cout << "   Ingrese la descripcion de la plaza: ";
	cin >> desc; cout << endl;


	pla = new Plaza(cod, desc, false);

	if (ar->existePlaza(cod) == false) {
		if (ar->ingresarPlaza(*pla))msjExitoIngresar();
		else msjErorrIngresar();
	}
	else msjErorrIngresar();





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

	if (ar->ListaEmpleadoEstaVacio()) msjSinEmpleados();
	else
	{
		cout << "   Digite el codigo del contrato: ";
		cin >> cod; cout << endl;
		cout << "   Descripcion del puesto: ";
		cin >> desc; cout << endl;
		cout << "   Ingrese la fecha de Ingreso: " << endl;
		cout << "   Ingrese el dia: ";
		cin >> dd;
		cout << "   Ingrese el mes: ";
		cin >> mm;
		cout << "   Ingrese el anio: ";
		cin >> yy; cout << endl;

		fIng = new Fecha(dd, mm, yy);

		cout << "   Ingrese la fecha de culminacion: " << endl;
		cout << "   Ingrese el dia: ";
		cin >> dd;
		cout << "   Ingrese el mes: ";
		cin >> mm;
		cout << "   Ingrese el anio: ";
		cin >> yy; cout << endl;

		fCul = new Fecha(dd, mm, yy);

		cout << "   Salario: ";
		cin >> sala; cout << endl;
		cout << "   Tipo de servicio: ";
		cin >> tSer; cout << endl;
		cout << "   Horario: ";
		cin >> hor; cout << endl;
		cout << "   Ingrese la cedula del empleado que desea ligar a este contrato: ";
		cin >> ced; cout << endl;

		if (ar->existeEmpleadoConCed(ced) == false) msjNoExisteCedula();
		else
		{
			if (ar->existeContratoConEmpleado(ced)) msjEmpleadoAsociado();
			else
			{
				emp = ar->buscarEmpleadoPorCed(ced);

				if (typeid(*emp) == typeid(Administrativo) || typeid(*emp) == typeid(Miscelaneo))
				{
					ser = new ServiciosProfesionales(desc, cod, sala, *emp, tSer, hor, *fIng, *fCul);

					if (ar->existeContrato(cod) == false) {
						if (ar->ingresarContrato(*ser))msjExitoIngresar();
						else msjErorrIngresar();
					}
					else msjErorrIngresar();

					cout << ar->imprimeContratos();
				}
				else
				{
					if (ar->ListaAvionEstaVacio()) msjAvionNoDisponible();
					else
					{
						if (typeid(*emp) == typeid(Piloto)) {

							cout << ar->imprimeAviones();
							cout << "   Ingrese la placa del avion que desea ligar a este contrato: ";
							cin >> pla; cout << endl;

							if (ar->existeAvionPorPlaca(pla) == false) msjNoAvionPlaca();
							else
							{
								if (ar->existeAvionConPiloto(pla)) msjAvionConPiloto();
								else
								{
									avi = ar->buscarAvionPorPlaca(pla);

									ser = new ServiciosProfesionales(desc, cod, sala, *avi, *emp, tSer, hor, *fIng, *fCul);

									if (ar->existeContrato(cod) == false) {
										if (ar->ingresarContrato(*ser))msjExitoIngresar();
										else msjErorrIngresar();
									}
									else msjErorrIngresar();

									cout << ar->imprimeContratos();


								}

							}
						}

						if (typeid(*emp) == typeid(Copiloto)) {

							if (ar->existeAvionCivil() == false) msjNoAvionCivil();
							else
							{
								cout << ar->imprimeAvionesCiviles();
								cout << "   Ingrese la placa del avion que desea ligar a este contrato: ";
								cin >> pla; cout << endl;

								if (ar->existeAvionCivilPorPlaca(pla) == false) msjNoAvionCivilPlaca();
								else
								{
									if (ar->existeAvionConCopiloto(pla)) msjAvionCopiloto();
									else
									{
										avi = ar->buscarAvionPorPlaca(pla);

										ser = new ServiciosProfesionales(desc, cod, sala, *avi, *emp, tSer, hor, *fIng, *fCul);

										if (ar->existeContrato(cod) == false) {
											if (ar->ingresarContrato(*ser))msjExitoIngresar();
											else msjErorrIngresar();
										}
										else msjErorrIngresar();

										cout << ar->imprimeContratos();

									}

								}
							}
						}
						if (typeid(*emp) == typeid(Azafata)) {

							if (ar->existeAvionComercial() == false) msjNoAvionComercial();
							else
							{
								cout << ar->imprimeAvionesComerciales();
								cout << "   Ingrese la placa del avion que desea ligar a este contrato: ";
								cin >> pla; cout << endl;

								if (ar->existeAvionComercialPorPlaca(pla) == false) msjNoAvionComercialPlaca();
								else
								{
									if (ar->existeAvionConAzafata(pla)) msjAvionComercialAzafata();
									else
									{
										avi = ar->buscarAvionPorPlaca(pla);

										ser = new ServiciosProfesionales(desc, cod, sala, *avi, *emp, tSer, hor, *fIng, *fCul);

										if (ar->existeContrato(cod) == false) {
											if (ar->ingresarContrato(*ser))msjExitoIngresar();
											else msjErorrIngresar();
										}
										else msjErorrIngresar();

										cout << ar->imprimeContratos();

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

	if (ar->ListaEmpleadoEstaVacio()) msjSinEmpleados();
	else
	{
		cout << "   Codigo del contrato: ";
		cin >> cod; cout << endl;
		cout << "  Descripcion del puesto: ";
		cin >> desc; cout << endl;
		cout << "   Ingrese la fecha de Ingreso: " << endl << endl;
		cout << "   Ingrese el dia: ";
		cin >> dd;
		cout << "   Ingrese el mes: ";
		cin >> mm;
		cout << "   Ingrese el anio: ";
		cin >> yy; cout << endl;

		fIng = new Fecha(dd, mm, yy);
		fCul = new Fecha(dd, mm, yy + 2);

		cout << "  Salario: ";
		cin >> sala; cout << endl;
		cout << "   Digite la cedula del empleado que desea ligar a este contrato: ";
		cin >> ced; cout << endl;

		if (ar->existeEmpleadoConCed(ced) == false)msjNoExisteCedula();
		else
		{
			if (ar->existeContratoConEmpleado(ced)) msjEmpleadoAsociado();
			else
			{
				emp = ar->buscarEmpleadoPorCed(ced);

				if (typeid(*emp) == typeid(Administrativo) || typeid(*emp) == typeid(Miscelaneo))
				{
					plazo = new  PlazoFijo(desc, cod, sala, *emp, *fIng, *fCul);

					if (ar->existeContrato(cod) == false) {
						if (ar->ingresarContrato(*plazo))msjExitoIngresar();
						else msjErorrIngresar();
					}
					else msjErorrIngresar();

					cout << ar->imprimeContratos();
				}
				else
				{
					if (ar->ListaAvionEstaVacio()) msjNoAvionesDisponibles();
					else
					{
						if (typeid(*emp) == typeid(Piloto)) {

							cout << ar->imprimeAviones();
							cout << "   Digite la placa del avion que desea ligar a este contrato: ";
							cin >> pla; cout << endl;

							if (ar->existeAvionPorPlaca(pla) == false) msjNoAvionPlaca();
							else
							{
								if (ar->existeAvionConPiloto(pla)) msjAvionConPiloto();
								else
								{
									avi = ar->buscarAvionPorPlaca(pla);

									plazo = new  PlazoFijo(desc, cod, sala, *avi, *emp, *fIng, *fCul);

									if (ar->existeContrato(cod) == false) {
										if (ar->ingresarContrato(*plazo))msjExitoIngresar();
										else msjErorrIngresar();
									}
									else msjErorrIngresar();

									cout << ar->imprimeContratos();


								}

							}
						}

						if (typeid(*emp) == typeid(Copiloto)) {

							if (ar->existeAvionCivil() == false) msjNoAvionCivil();
							else
							{
								cout << ar->imprimeAvionesCiviles();
								cout << "   Digite la placa del avion que desea ligar a este contrato: ";
								cin >> pla; cout << endl;

								if (ar->existeAvionCivilPorPlaca(pla) == false) msjNoAvionCivilPlaca();
								else
								{
									if (ar->existeAvionConCopiloto(pla)) msjAvionCopiloto();
									else
									{
										avi = ar->buscarAvionPorPlaca(pla);

										plazo = new  PlazoFijo(desc, cod, sala, *avi, *emp, *fIng, *fCul);

										if (ar->existeContrato(cod) == false) {
											if (ar->ingresarContrato(*plazo))msjExitoIngresar();
											else msjErorrIngresar();
										}
										else msjErorrIngresar();

										cout << ar->imprimeContratos();

									}

								}
							}
						}
						if (typeid(*emp) == typeid(Azafata)) {

							if (ar->existeAvionComercial() == false) msjNoAvionComercial();
							else
							{
								cout << ar->imprimeAvionesComerciales();
								cout << "   Digite la placa del avion que desea ligar a este contrato: ";
								cin >> pla; cout << endl;

								if (ar->existeAvionComercialPorPlaca(pla) == false) msjNoAvionComercialPlaca();
								else
								{
									if (ar->existeAvionConAzafata(pla)) msjAvionComercialAzafata();
									else
									{
										avi = ar->buscarAvionPorPlaca(pla);

										plazo = new  PlazoFijo(desc, cod, sala, *avi, *emp, *fIng, *fCul);

										if (ar->existeContrato(cod) == false) {
											if (ar->ingresarContrato(*plazo))msjExitoIngresar();
											else msjErorrIngresar();
										}
										else msjErorrIngresar();

										cout << ar->imprimeContratos();

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
void Interfaz::ingresarTiempoIndefinido(Aeropuerto* ar)
{
	ContratoBase* aux = NULL;
	ContratoBase* plazo = NULL;
	Plaza* pla = NULL;
	Fecha* act = NULL;
	Fecha* fIng = NULL;
	Fecha* fCul = NULL;
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
	cin >> yy; cout << endl;

	act = new Fecha(dd, mm, yy);


	if (ar->existenContratosVencidos(*act) == false)msjNoContratosVencidos();
	else
	{
		cout << ar->imprimirContratosVencidos(*act);
		cout << "   Digite el codigo del contrato que desea seleccionar: ";
		cin >> cod; cout << endl;

		if (ar->existeContratoVencidoConCod(*act, cod) == false) msjNoRenovarContratoCodigo();
		else
		{
			plazo = ar->buscarContratoPorCod(cod);


			if (ar->existePlazaParaPuesto(plazo->getEmpleado()->getOcupacion()) == false)
			{
				msjPlaza();
				system("pause");
				system("cls");
				cout << endl;
				cout << "---------------RENOVANDO PLAZO FIJO-----------------" << endl;
				cout << "----------------------------------------------------" << endl;
				cout << "--------------INGRESANDO DATOS NUEVOS---------------" << endl;
				cout << "----------------------------------------------------" << endl << endl;
				cout << "   Digite el nuevo codigo del contrato: ";
				cin >> cod; cout << endl;

				cout << "   Salario: ";
				cin >> sala; cout << endl;

				cout << "   Ingrese la fecha de Ingreso: " << endl;
				cout << "   Ingrese el dia: ";
				cin >> dd;
				cout << "   Ingrese el mes: ";
				cin >> mm;
				cout << "   Ingrese el anio: ";
				cin >> yy;  cout << endl;

				fIng = new Fecha(dd, mm, yy);
				fCul = new Fecha(dd, mm, yy + 2);

				if (typeid(*plazo->getEmpleado()) == typeid(Administrativo) || typeid(*plazo->getEmpleado()) == typeid(Miscelaneo))aux = new PlazoFijo(plazo->getDescPuesto(), cod, sala, *plazo->getEmpleado(), *fIng, *fCul);
				else aux = new PlazoFijo(plazo->getDescPuesto(), cod, sala, *plazo->getAvion(), *plazo->getEmpleado(), *fIng, *fCul);

				ar->eliminaContratoPorCodigo(plazo->getCodContrato());

				if (ar->existeContrato(cod) == false) {
					if (ar->ingresarContrato(*aux))msjExitoIngresar();

					else msjErorrIngresar();
				}
				else msjErorrIngresar();


				cout << ar->imprimeContratos();

			}
			else

			{
				system("pause");
				system("cls");
				cout << endl;
				cout << "---------------CREANDO NUEVO CONTRATO DE TIEMPO INDEFINIDO-----------------" << endl;
				cout << "---------------------------------------------------------------------------" << endl;
				cout << "--------------------------INGRESANDO DATOS NUEVOS--------------------------" << endl;
				cout << "---------------------------------------------------------------------------" << endl << endl;
				cout << ar->imprimirPlazasDisponibles(plazo->getEmpleado()->getOcupacion());

				cout << "   Digite el codigo de la plaza que desea seleccionar: ";
				cin >> cod; cout << endl;

				if (ar->existePlazaDisponible(cod, plazo->getEmpleado()->getOcupacion()) == false) msjPlazaCodigo();
				else
				{

					pla = ar->buscarPlazaPorCodigo(cod);

					cout << "   Digite el nuevo codigo del contrato: ";
					cin >> cod; cout << endl;

					cout << "   Salario: ";
					cin >> sala; cout << endl;

					cout << "   Ingrese la fecha de Ingreso: " << endl;
					cout << "   Ingrese el dia: ";
					cin >> dd;
					cout << "   Ingrese el mes: ";
					cin >> mm;
					cout << "   Ingrese el anio: ";
					cin >> yy;  cout << endl;

					fIng = new Fecha(dd, mm, yy);

					if (typeid(*plazo->getEmpleado()) == typeid(Administrativo) || typeid(*plazo->getEmpleado()) == typeid(Miscelaneo))aux = new TiempoIndefinido(plazo->getDescPuesto(), cod, sala, *plazo->getEmpleado(), *pla, *fIng);
					else aux = new TiempoIndefinido(plazo->getDescPuesto(), cod, sala, *plazo->getAvion(), *plazo->getEmpleado(), *pla, *fIng);

					ar->eliminaContratoPorCodigo(plazo->getCodContrato());

					if (ar->existeContrato(cod) == false) {
						if (ar->ingresarContrato(*aux)) {

							pla->setOcupada(true);
							msjExitoIngresar();

						}

						else msjErorrIngresar();
					}
					else msjErorrIngresar();


					cout << ar->imprimeContratos();
				}

			}

		}

	}

	system("pause");
}

void Interfaz::editarNombre(Aeropuerto* ar)
{
	string ced, nom;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR NOMBRE-----------" << endl;
	cout << "*---------------------------------*" << endl << endl;
	if (ar->ListaEmpleadoEstaVacio()) msjSinEmpleados();
	else
	{
		cout << ar->imprimeEmpleados();

		cout << "   Digite la cedula del empleado al que desea editar el nombre: ";
		cin >> ced; cout << endl;

		if (ar->existeEmpleadoConCed(ced) == false)msjNoExisteCedula();
		else {

			cout << "   Ingrese el nuevo nombre: ";
			cin >> nom; cout << endl;

			ar->buscarEmpleadoPorCed(ced)->setNombre(nom);
		}
	}

	system("pause");
}

void Interfaz::editarEdad(Aeropuerto* ar)
{
	string ced;
	int ed;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR EDAD-------------" << endl;
	cout << "*---------------------------------*" << endl << endl;
	if (ar->ListaEmpleadoEstaVacio()) msjSinEmpleados();
	else
	{
		cout << ar->imprimeEmpleados();

		cout << "   Digite la cedula del empleado al que desea editar la edad: ";
		cin >> ced; cout << endl;

		if (ar->existeEmpleadoConCed(ced) == false)msjNoExisteCedula();
		else {

			cout << "   Ingrese la nueva edad: ";
			cin >> ed; cout << endl;

			ar->buscarEmpleadoPorCed(ced)->setEdad(ed);
		}
	}

	system("pause");
}

void Interfaz::editarOcupacion(Aeropuerto* ar)
{
	string ced, ocu;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR OCUPACION-------------" << endl;
	cout << "*--------------------------------------*" << endl << endl;
	if (ar->ListaEmpleadoEstaVacio()) msjSinEmpleados();
	else
	{
		cout << ar->imprimeEmpleados();

		cout << "   Digite la cedula del empleado al que desea editar la ocupacion: ";
		cin >> ced; cout << endl;

		if (ar->existeEmpleadoConCed(ced) == false)msjNoExisteCedula();
		else {

			cout << "   Ingrese la nueva ocupacion: ";
			cin >> ocu; cout << endl;

			ar->buscarEmpleadoPorCed(ced)->setOcupacion(ocu);
		}
	}

	system("pause");
}

void Interfaz::editarAniosExperiencia(Aeropuerto* ar)
{
	string ced;
	int anios;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR ANIOS DE EXPERIENCIA-------------" << endl;
	cout << "*-------------------------------------------------*" << endl << endl;
	if (ar->existePiloto() == false) msjSinEmpleados();
	else
	{
		cout << ar->imprimirPilotos();

		cout << "   Digite la cedula del empleado al que desea editar los anios de experiencia: ";
		cin >> ced; cout << endl;

		if (ar->existePilotoConCed(ced) == false)msjNoExisteCedula();
		else {

			cout << "   Ingrese los nuevos anios de experiencia: ";
			cin >> anios; cout << endl;

			ar->buscarEmpleadoPorCed(ced)->setAniosExp(anios);
		}
	}

	system("pause");
}

void Interfaz::editarTelefono(Aeropuerto* ar)
{
	string ced, tel;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR NUMERO DE TELEFONO-------------" << endl;
	cout << "*-----------------------------------------------*" << endl << endl;
	if (ar->existeCopiloto() == false) msjSinEmpleados();
	else
	{
		cout << ar->imprimirCopilotos();

		cout << "   Digite la cedula del empleado al que desea editar el telefono: ";
		cin >> ced; cout << endl;

		if (ar->existeCopilotoConCed(ced) == false)msjNoExisteCedula();
		else {

			cout << "   Ingrese el nuevo telefono: ";
			cin >> tel; cout << endl;

			ar->buscarEmpleadoPorCed(ced)->setNumeroTelefono(tel);
		}
	}

	system("pause");
}

void Interfaz::editarNacionalidad(Aeropuerto* ar)
{
	string ced, nac;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR NACIONALIDAD-------------" << endl;
	cout << "*------------------------------------------*" << endl << endl;
	if (ar->existeAzafata() == false) msjSinEmpleados();
	else
	{
		cout << ar->imprimirAzafatas();

		cout << "   Digite la cedula del empleado al que desea editar la nacionalidad: ";
		cin >> ced; cout << endl;

		if (ar->existeAzafataConCed(ced) == false)msjNoExisteCedula();
		else {

			cout << "   Ingrese la nueva nacionalidad: ";
			cin >> nac; cout << endl;

			ar->buscarEmpleadoPorCed(ced)->setNacionalidad(nac);
		}
	}

	system("pause");
}

void Interfaz::editarTitulo(Aeropuerto* ar)
{
	string ced, tit;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR TITULO-------------" << endl;
	cout << "*-----------------------------------*" << endl << endl;
	if (ar->existeAdministrativo() == false) msjSinEmpleados();
	else
	{
		cout << ar->imprimirAdministrativos();

		cout << "   Digite la cedula del empleado al que desea editar el titulo: ";
		cin >> ced; cout << endl;

		if (ar->existeAdministrativoConCed(ced) == false)msjNoExisteCedula();
		else {

			cout << "   Ingrese el nuevo titulo: ";
			cin >> tit; cout << endl;

			ar->buscarEmpleadoPorCed(ced)->setTitulo(tit);
		}
	}

	system("pause");
}

void Interfaz::editarGradoEscolaridad(Aeropuerto* ar)
{
	string ced, gra;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR GRADO DE ESCOLARIDAD-------------" << endl;
	cout << "*------------------------------------------*" << endl << endl;
	if (ar->existeMiscelaneo() == false) msjSinEmpleados();
	else
	{
		cout << ar->imprimirMiscelaneos();

		cout << "   Digite la cedula del empleado al que desea editar el grado de escolaridad: ";
		cin >> ced; cout << endl;

		if (ar->existeMiscelaneoConCed(ced) == false)msjNoExisteCedula();
		else {

			cout << "   Ingrese el nuevo grado de escolaridad: ";
			cin >> gra; cout << endl;

			ar->buscarEmpleadoPorCed(ced)->setGradoEsc(gra);
		}
	}

	system("pause");

}

void Interfaz::editarDisRecorrida(Aeropuerto* ar)
{
	string pla;
	double dist;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR DISTANCIA RECORRIDA-------------" << endl;
	cout << "*------------------------------------------------*" << endl << endl;
	if (ar->ListaAvionEstaVacio()) msjNoAvionesDisponibles();
	else
	{
		cout << ar->imprimeAviones();

		cout << "   Digite la placa del avion al que desea editar la distacia recorrida: ";
		cin >> pla; cout << endl;

		if (ar->existeAvionPorPlaca(pla) == false)msjNoAvionPlaca();
		else {

			cout << "   Ingrese la nueva distacia recorrida: ";
			cin >> dist; cout << endl;

			ar->buscarAvionPorPlaca(pla)->setDistanciaRecorrida(dist);
		}
	}

	system("pause");
}

void Interfaz::editarCategoria(Aeropuerto* ar)
{
	string pla, cat;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR CATEGORIA-------------" << endl;
	cout << "*--------------------------------------*" << endl << endl;
	if (ar->ListaAvionEstaVacio()) msjNoAvionesDisponibles();
	else
	{
		cout << ar->imprimeAviones();

		cout << "   Digite la placa del avion al que desea editar la categoria: ";
		cin >> pla; cout << endl;

		if (ar->existeAvionPorPlaca(pla) == false)msjNoAvionPlaca();
		else {

			cout << "   Ingrese la nueva categoria: ";
			cin >> cat; cout << endl;

			ar->buscarAvionPorPlaca(pla)->setCategoria(cat);
		}
	}

	system("pause");
}

void Interfaz::editarTipo(Aeropuerto* ar)
{
	string pla, tip;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR TIPO-------------" << endl;
	cout << "*---------------------------------*" << endl << endl;
	if (ar->ListaAvionEstaVacio()) msjNoAvionesDisponibles();
	else
	{
		cout << ar->imprimeAviones();

		cout << "   Digite la placa del avion al que desea editar el tipo: ";
		cin >> pla; cout << endl;

		if (ar->existeAvionPorPlaca(pla) == false)msjNoAvionPlaca();
		else {

			cout << "   Ingrese el nuevo tipo: ";
			cin >> tip; cout << endl;

			ar->buscarAvionPorPlaca(pla)->setTipo(tip);
		}
	}

	system("pause");
}

void Interfaz::editarAnchoPuerta(Aeropuerto* ar)
{
	string pla;
	double anch;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR ANCHO DE LA PUERTA-------------" << endl;
	cout << "*-----------------------------------------------*" << endl << endl;
	if (ar->existeAvionCarga() == false) msjNoAvionesDisponibles();
	else
	{
		cout << ar->imprimeAvionesCarga();

		cout << "   Digite la placa del avion al que desea editar el ancho de la puerta: ";
		cin >> pla; cout << endl;

		if (ar->existeAvionCargaPorPlaca(pla) == false)msjNoAvionPlaca();
		else {

			cout << "   Ingrese el nuevo ancho de la puerta: ";
			cin >> anch; cout << endl;

			ar->buscarAvionPorPlaca(pla)->setAnchoPuerta(anch);
		}
	}

	system("pause");

}

void Interfaz::editarAltoPuerta(Aeropuerto* ar)
{
	string pla;
	double alt;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR ALTO DE LA PUERTA-------------" << endl;
	cout << "*-----------------------------------------------*" << endl << endl;
	if (ar->existeAvionCarga() == false) msjNoAvionesDisponibles();
	else
	{
		cout << ar->imprimeAvionesCarga();

		cout << "   Digite la placa del avion al que desea editar el alto de la puerta: ";
		cin >> pla; cout << endl;

		if (ar->existeAvionCargaPorPlaca(pla) == false)msjNoAvionPlaca();
		else {

			cout << "   Ingrese el nuevo alto de la puerta: ";
			cin >> alt; cout << endl;

			ar->buscarAvionPorPlaca(pla)->setAlturaPuerta(alt);
		}
	}

	system("pause");
}

void Interfaz::editarVelocidadMaxima(Aeropuerto* ar)
{
	string pla;
	double vel;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR VELOCIDAD MAXIMA-------------" << endl;
	cout << "*---------------------------------------------*" << endl << endl;
	if (ar->existeAvionMilitar() == false) msjNoAvionesDisponibles();
	else
	{
		cout << ar->imprimeAvionesMilitares();

		cout << "   Digite la placa del avion al que desea editar la velocidad maxima: ";
		cin >> pla; cout << endl;

		if (ar->existeAvionMilitarPorPlaca(pla) == false)msjNoAvionPlaca();
		else {

			cout << "   Ingrese el nuevo alto de la velocidad maxima: ";
			cin >> vel; cout << endl;

			ar->buscarAvionPorPlaca(pla)->setVelocidadMaxima(vel);
		}
	}

	system("pause");
}

void Interfaz::editarSalario(Aeropuerto* ar)
{
	string cod;
	double sal;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR SALARIO-------------" << endl;
	cout << "*---------------------------------*" << endl << endl;
	if (ar->ListaContratosEstaVacio()) msjNoContratosDispobibles();
	else
	{
		cout << ar->imprimeContratos();

		cout << "   Digite el codigo del contrato al que desea editar el salario: ";
		cin >> cod; cout << endl;

		if (ar->existeContrato(cod) == false)msjNoContratosCod();
		else {

			cout << "   Ingrese el nuevo salario: ";
			cin >> sal; cout << endl;

			ar->buscarContratoPorCod(cod)->setSalario(sal);
		}
	}

	system("pause");
}

void Interfaz::editarHorario(Aeropuerto* ar)
{
	string cod,hor;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR HORARIO-------------" << endl;
	cout << "*---------------------------------*" << endl << endl;
	if (ar->existeServicioProfesional()==false) msjNoContratosDispobibles();
	else
	{
		cout << ar->imprimirServiciosProfesionales();

		cout << "   Digite el codigo del contrato al que desea editar el horario: ";
		cin >> cod; cout << endl;

		if (ar->existeServicioProfesionalConCod(cod) == false)msjNoContratosCod();
		else {

			cout << "   Ingrese el nuevo horario: ";
			cin >> hor; cout << endl;

			ar->buscarContratoPorCod(cod)->setHorario(hor);
		}
	}

	system("pause");
}

void Interfaz::editarAceptado(Aeropuerto* ar)
{
	string cod;
	bool estado = false;
	system("cls");
	cout << endl;
	cout << "-----------EDITAR ESTADO DE RENOVACION-------------" << endl;
	cout << "*-------------------------------------------------*" << endl << endl;
	if (ar->existePlazoFijo() == false) msjNoContratosDispobibles();
	else
	{
		cout << ar->imprimirPlazosFijos();

		cout << "   Digite el codigo del contrato al que desea cambiar el estado de renovacion: ";
		cin >> cod; cout << endl;

		if (ar->existePlazoFijoConCod(cod) == false)msjNoContratosCod();
		else {

			estado = ar->buscarContratoPorCod(cod)->getAceptado();

			ar->buscarContratoPorCod(cod)->setAceptado(!estado);
		}
	}

	system("pause");
}

void Interfaz::eliminarEmpleado(Aeropuerto* ar)
{
	string ced;
	system("cls");
	cout << endl;
	cout << "-----------ELIMINAR EMPLEADO-------------" << endl;
	cout << "*---------------------------------------*" << endl << endl;

	if (ar->ListaEmpleadoEstaVacio()) msjSinEmpleados();
	else
	{
		cout << ar->imprimeEmpleados();

		cout << "   Digite la cedula del empleado al que desea eliminar: ";
		cin >> ced; cout << endl;

		if (ar->existeEmpleadoConCed(ced) == false)msjNoExisteCedula();
		else {

			if (ar->eliminarEmpleadoPorCedula(ced)) 
			{
				if (ar->existeContratoConEmpleado(ced)) 
					if(ar->eliminarContratoPorCedula(ced));
					else msjErrorEliminar();

				msjExitoEliminar();
			}
			else msjErrorEliminar();

		}
	}

	system("pause");
}

void Interfaz::eliminarAvion(Aeropuerto* ar)
{
	Empleado* emp = NULL;
	string pla;
	system("cls");
	cout << endl;
	cout << "-----------ELIMINAR AVION-------------" << endl;
	cout << "*------------------------------------*" << endl << endl;

	if (ar->ListaAvionEstaVacio()) msjAvionNoDisponible();
	else
	{
		cout << ar->imprimeAviones();

		cout << "   Digite la placa del avion que desea eliminar: ";
		cin >> pla; cout << endl;

		if (ar->existeAvionPorPlaca(pla) == false)msjNoAvionPlaca();
		else {

			

			if (ar->eliminarEmpleadoPorCedula(pla))
			{
				if (ar->existeContratoConEmpleado(pla))
					if (ar->eliminarContratoPorCedula(pla));
					else msjErrorEliminar();

				msjExitoEliminar();
			}
			else msjErrorEliminar();

		}
	}

	system("pause");
}

void Interfaz::eliminarContrato(Aeropuerto* ar)
{
	string cod;
	system("cls");
	cout << endl;
	cout << "-----------ELIMINAR CONTRATO-------------" << endl;
	cout << "*---------------------------------------*" << endl << endl;

	if (ar->ListaContratosEstaVacio()) msjNoContratosDispobibles();
	else
	{
		cout << ar->imprimeContratos();

		cout << "   Digite el codigo del contrato al que desea eliminar: ";
		cin >> cod; cout << endl;

		if (ar->existeContrato(cod) == false)msjNoContratosDispobibles();
		else {

			if (ar->eliminaContratoPorCodigo(cod))msjExitoEliminar();
			else msjErrorEliminar();

		}
	}

	system("pause");
}

void Interfaz::reporteAviones(Aeropuerto* ar)
{
	system("cls");
	cout << endl;
	cout << "-----------REPORTE DE TODOS LOS AVIONES-------------" << endl;
	cout << "*--------------------------------------------------*" << endl << endl;

	if (ar->ListaAvionEstaVacio()) msjAvionNoDisponible();
	else 
	{
		cout<<ar->imprimeAviones();
	}

	system("pause");
}


void Interfaz::msjErorrIngresar()
{
	cout << "   Fallo al ingresar" << endl << endl;
}

void Interfaz::msjExitoIngresar()
{
	cout << "   Se ingreso con exito" << endl << endl;
}

void Interfaz::msjSinEmpleados()
{

	cout << "   No hay ningun empleado registrado" << endl << endl;
}

void Interfaz::msjNoExisteCedula()
{
	cout << "   No existe ningun empleado con esa cedula" << endl << endl;
}

void Interfaz::msjEmpleadoAsociado()
{
	cout << "	El empleado ya esta asociado a un contrato" << endl << endl;
}

void Interfaz::msjAvionNoDisponible()
{
	cout << "	No hay aviones disponibles" << endl << endl;
}

void Interfaz::msjNoAvionPlaca()
{
	cout << "	No existe ningun avion con esa placa" << endl << endl;
}

void Interfaz::msjAvionConPiloto()
{
	cout << "	Este avion ya posee un Piloto" << endl << endl;
}

void Interfaz::msjNoAvionCivil()
{
	cout << "	No existe ningun avion civil" << endl << endl;
}

void Interfaz::msjNoAvionCivilPlaca()
{
	cout << "	No existe ningun avion civil con esa placa" << endl << endl;
}

void Interfaz::msjAvionCopiloto()
{
	cout << "	Este avion ya posee un Copiloto" << endl << endl;
}

void Interfaz::msjNoAvionComercial()
{
	cout << "	No existe ningun avion comercial" << endl << endl;
}

void Interfaz::msjNoAvionComercialPlaca()
{
	cout << "	No existe ningun avion comercial con esa placa" << endl << endl;
}

void Interfaz::msjAvionComercialAzafata()
{
	cout << "	Este avion ya posee una azafata" << endl << endl;
}

void Interfaz::msjNoAvionesDisponibles()
{
	cout << "	No hay aviones disponibles" << endl << endl;
}

void Interfaz::msjNoContratosDispobibles()
{
	cout << "	No hay contratos disponibles" << endl << endl;
}

void Interfaz::msjNoContratosCod()
{
	cout << "	No hay contratos disponibles con ese codigo" << endl << endl;
}

void Interfaz::msjNoContratosVencidos()
{
	cout << "	No hay contratos vencidos disponibles" << endl << endl;
}

void Interfaz::msjNoRenovarContratoCodigo()
{
	cout << "	No existe nigun contrato para renovar con ese codigo" << endl << endl;
}

void Interfaz::msjPlaza()
{
	cout << "	No existen plazas en su ocupacion " << endl << endl;
}

void Interfaz::msjPlazaCodigo()
{
	cout << "	No hay plazas disponibles con ese codigo" << endl << endl;
}

void Interfaz::msjErrorEliminar()
{
	cout << "   Fallo al Eliminar" << endl << endl;
}

void Interfaz::msjExitoEliminar()
{
	cout << "   Se elimino con exito" << endl << endl;
}


