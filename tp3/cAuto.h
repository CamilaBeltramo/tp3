#pragma once
#include <iostream>
#include <string>
#include"cVehiculo.h"
using namespace std;


class cAuto :
	public cVehiculo //clase abstracta 
{
private:
	int sillaDeSeg; //agregamos accesorios en cada clase con sus respectivos accesorios.
	
public:

	cAuto( int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler, int sillaDeSeg);
	
	friend ostream& operator<<(ostream& os,  cAuto& C); //Sobrecargar el operador de impresión para poder imprimir los datos de un vehiculo.

	int Get_accesorios();
	void Imprimir();
	string toString() ;
	~cAuto();

};
