#pragma once
#include <iostream>
#include <string>
#include"cVehiculo.h"
using namespace std;


class cMoto :
	
	public cVehiculo //clase abstracta 
	
{

protected:
	int cascos; //accesorio
	

public:

	cMoto(int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler, int cascos);
	
	void Imprimir();
	string toString();
	int Get_accesorios();
	friend ostream& operator<<(ostream& os, cMoto& C); //Sobrecargar el operador de impresi�n para poder imprimir los datos de un vehiculo.
	~cMoto();

};
