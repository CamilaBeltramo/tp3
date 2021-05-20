#pragma once
///////////////////////////////////////////////////////////
//  cLista_alquiler.h
//  Implementation of the Class cLista_alquiler
//  Created on:      19-may.-2021 17:33:11
//  Original author: beltr
///////////////////////////////////////////////////////////
#include "cFecha.h"
#include <string>
using namespace std; 


class cLista_alquiler
{

public:
	cLista_alquiler(string adicional, string cliente, cFecha* fecha_fin, cFecha* fecha_inicio, int monto_total, string vehiculo);
	virtual ~cLista_alquiler();

private:
	cFecha* fecha_fin;
	cFecha* fecha_inicio;
	string adicional;
	string cliente;
	int monto_total;
	string vehiculo;

};

