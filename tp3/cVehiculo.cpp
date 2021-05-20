///////////////////////////////////////////////////////////
//  cVehiculo.cpp
//  Implementation of the Class cVehiculo
//  Created on:      19-may.-2021 17:33:15
//  Original author: beltr
///////////////////////////////////////////////////////////

#include "cVehiculo.h"


cVehiculo::cVehiculo(int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler) {
	this->capacidad_pasajeros = capacidad_pasajeros;
	this->color = color;
	this->fecha_ult_mantenimiento = fecha_ult_mantenimiento;
	this->numero_chasis = numero_chasis;
	this->patente = patente;
	this->poliza = poliza;
	this->precio_alquiler = precio_alquiler;

}



cVehiculo::~cVehiculo() {

}

//hacer metodo imprimir y to_string
