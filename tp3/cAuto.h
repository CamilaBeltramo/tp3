#pragma once
#include <iostream>
#include <string>
#include"cVehiculo.h"
using namespace std;


class cAuto :
	public cVehiculo
{
private:
	int sillaDeSeg;
	
public:

	cAuto( int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler, int sillaDeSeg);
	
	friend ostream& operator<<(ostream& os,  cAuto& C);
	int Get_accesorios();
	void Imprimir();
	string toString() ;
	~cAuto();

};
