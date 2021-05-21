#pragma once
#include <iostream>
#include <string>
#include"cVehiculo.h"
using namespace std;


class cTrafic :

	public cVehiculo
{
private:
	int sillaDeSeg;
	int asientito;

public:

	cTrafic(int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler, int sillaDeSeg, int asientito);

	friend ostream& operator<<(ostream& os,  cTrafic& C);
	int Get_accesorios();
	void Imprimir();
	string toString();
	~cTrafic();

};
