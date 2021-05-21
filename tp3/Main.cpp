#include "cAlquiler.h"
#include "cAuto.h"
#include "cCamioneta.h"
#include "cCliente.h"
#include"cFecha.h"
#include "cLista.h"
#include "cMoto.h"
#include "cTrafic.h"
#include "cVehiculo.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
	cFecha* fecha1 = new cFecha(1, 2, 2020);
	cFecha* fecha2 = new cFecha(4, 3, 2020);
	cFecha* fecha3 = new cFecha(17, 4, 2020);
	cFecha* fecha4 = new cFecha(10, 5, 2020);
	cVehiculo* camio = new cCamioneta(5, "verde", fecha1, 8675, "AC403DM", 1234, 25000, 1, 1);
	cVehiculo* aut = new cAuto(4, "rojo", fecha2, 8472, "AC402DF", 4567, 30000, 1);
	cVehiculo* mot = new cMoto(2, "negra", fecha3, 8968, "AC469DF", 2587, 20000, 2);
	cVehiculo* traf = new cTrafic(6, "azul", fecha4, 8325, "AC789DM", 7894, 35000, 2, 1);
	cCliente* cliente1 = new cCliente("candela", "neumann", 2364651881);
	cCliente* cliente2 = new cCliente("gonzalo", "chemaya", 2364656941);
	cAlquiler* alquiler = new cAlquiler(cliente1, fecha1 = new cFecha(5, 3, 2020), fecha2, 0, aut);

	cLista<cCliente>* Listaclientes = new cLista<cCliente>(50);
	cLista<cVehiculo>* Listavehiculo = new cLista<cVehiculo>(200);
	cLista<cAlquiler>* Listaalquiler = new cLista<cAlquiler>(100);


	Listavehiculo->Agregar(mot);
	Listavehiculo->Agregar(aut);
	Listavehiculo->Agregar(camio);
	Listavehiculo->Agregar(traf);
	Listaclientes->Agregar(cliente1);
	Listaalquiler->Agregar(alquiler);

	






	Listaclientes->Agregar(cliente2);
	


	delete Listaclientes;
	delete Listavehiculo;
	delete Listaalquiler;
	delete fecha1;
	delete fecha2;
	delete fecha3; 
	delete fecha4;
	delete camio;
	delete aut;
	delete mot;
	delete traf;
	delete cliente1;
	delete cliente2;
	delete alquiler;







}