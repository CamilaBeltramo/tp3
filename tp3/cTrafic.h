#pragma once
#include <iostream>
#include <string>
#include"cVehiculo.h"
using namespace std;


class cTrafic :

	public cVehiculo
{
private:
	int sillaDeSeg;//accesorios
	int asientito;

public:

	cTrafic(int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler, int sillaDeSeg, int asientito);

	friend ostream& operator<<(ostream& os,  cTrafic& C); //Sobrecargar el operador de impresión para poder imprimir los datos de un vehiculo.
	int Get_accesorios();
	void Imprimir();
	string toString();
	~cTrafic();

};
