#pragma once

///////////////////////////////////////////////////////////
//  cVehiculo.h
//  Implementation of the Class cVehiculo
//  Created on:      19-may.-2021 17:33:15
//  Original author: beltr
///////////////////////////////////////////////////////////
#include <iostream>
#include <ctime>
using namespace std;
#include <string>
#include "cFecha.h"


class cVehiculo
{
	friend class cAlquiler; 
public:
	cVehiculo(int precio_dia, int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler);
	virtual ~cVehiculo();
	virtual void pasos_mantenimiento();
	
	//void imprimir();
	//tostring

protected:
	int precio_dia;
	int capacidad_pasajeros;
	string color;
	cFecha* fecha_ult_mantenimiento;
	int numero_chasis;
	string patente;
	int poliza;
	int precio_alquiler;//es la tarifa inicial fija para este vehiculo 

};
