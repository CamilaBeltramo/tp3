#pragma once
#include <iostream>
#include <string>
#include"cVehiculo.h"
using namespace std;



class cCamioneta :

	public cVehiculo
{
private:
	int sillaDeSeg;
	int portaEq;
public:

	cCamioneta(int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler, int sillaDeSeg, int portaEq);
	friend ostream& operator<<(ostream& os,  cCamioneta& C);
	
	int Get_accesorios();

	void Imprimir();
	string toString();
	~cCamioneta();

};
