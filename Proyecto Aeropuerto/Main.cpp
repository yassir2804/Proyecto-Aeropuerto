#include "ListaAvion.h"
#include "ListaEmpleado.h"
#include "TiempoIndefinido.h"
#include "PlazoFijo.h"

int main() {

	Fecha* fech1 = new Fecha(12, 2, 2023);
	Fecha* fech2 = new Fecha(30, 4, 2024);

	Avion* av3 = new AvionMilitar(*fech1, 4000, "a34", 200, "Caza");
	Empleado* pil = new Piloto("Carlos", "4000", 33, "Supervisor", 10);

	Plaza* pla = new Plaza("1234", "Aviador");
	ContratoBase* tiem = new TiempoIndefinido("Contratacion en el puesto de aviador", "a456", 4500, *av3, *pil, *pla, *fech1, *fech2);
	ContratoBase* plFij = new PlazoFijo("Contratacion en el puesto de aviador", "a456", 4500, *av3, *pil, *fech1, *fech2);


	cout << tiem->toString()<<endl;
	cout << plFij->toString() << endl;

	//delete listE;


	//delete listAv;
	system("pause");
}