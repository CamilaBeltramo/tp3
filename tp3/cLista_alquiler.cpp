///////////////////////////////////////////////////////////
//  cLista_alquiler.cpp
//  Implementation of the Class cLista_alquiler
//  Created on:      19-may.-2021 17:33:11
//  Original author: beltr
///////////////////////////////////////////////////////////

#include "cLista_alquiler.h"

cLista_alquiler::cLista_alquiler(string adicional, string cliente,cFecha* fecha_fin, cFecha* fecha_inicio, int monto_total, string vehiculo)
{
	this->adicional = adicional;
	this->cliente = cliente;
	this->fecha_fin = fecha_fin;
	this->fecha_inicio = fecha_inicio;
	this->monto_total = monto_total;
	this->vehiculo = vehiculo;
}


cLista_alquiler::~cLista_alquiler() {

}