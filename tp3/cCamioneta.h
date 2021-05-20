#pragma once
#include <iostream>
#include <string>
#include"cVehiculo.h"
using namespace std;


class cCamioneta :

	public cVehiculo
{

public:

	cCamioneta(int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler);
	int calcular_tarifa();
	void pasos_mantenimiento();
	bool accesorios();
	
	void Imprimir();
	string toString();
	~cCamioneta();

};

