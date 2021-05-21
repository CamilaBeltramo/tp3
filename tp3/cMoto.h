#pragma once
#include <iostream>
#include <string>
#include"cVehiculo.h"
using namespace std;


class cMoto :
	
	public cVehiculo
	
{

protected:
	int cascos;
	

public:

	cMoto(int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler, int cascos);
	
	void Imprimir();
	string toString();
	int Get_accesorios();
	friend ostream& operator<<(ostream& os, cMoto& C);
	~cMoto();

};
