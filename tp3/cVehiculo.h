#pragma once

///////////////////////////////////////////////////////////
//  cVehiculo.h
//  Implementation of the Class cVehiculo
//  Created on:      19-may.-2021 17:33:15
//  Original author: beltr
///////////////////////////////////////////////////////////

using namespace std;
#include <string>
class cFecha;

class cVehiculo
{
	friend class cLista_vehiculo;
public:
	cVehiculo(int capacidad_pasajeros, string color,cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler );
	virtual ~cVehiculo();

	virtual int calcular_tarifa()=0;
	virtual void pasos_mantenimiento();
	virtual bool accesorios()=0;
	void imprimir();
	//tostring

private:
	int capacidad_pasajeros;
	string color;
	cFecha* fecha_ult_mantenimiento;
	int numero_chasis;
	string patente;
	int poliza;
	int precio_alquiler;

};
