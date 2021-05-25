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
	friend class cAlquiler;  //clase amiga con calquiler 
public:
	cVehiculo(int precio_dia, int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler);
	virtual ~cVehiculo();
	//imprime los pasos de mantenimiento q necesita cada vehiculo y actualiza la fecha de ultimo mantenimiento 
	void pasos_mantenimiento();
	void Imprimir();
	string ToString();
	virtual int Get_accesorios() = 0; 
	 friend ostream& operator<<(ostream& os,  cVehiculo& C); //Sobrecargar el operador de impresión para poder imprimir los datos de un vehiculo.
	int getclave();


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
