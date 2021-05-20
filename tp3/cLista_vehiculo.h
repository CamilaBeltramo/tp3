#pragma once
///////////////////////////////////////////////////////////
//  cLista_vehiculo.h
//  Implementation of the Class cLista_vehiculo
//  Created on:      19-may.-2021 17:33:14
//  Original author: beltr
///////////////////////////////////////////////////////////
class cVehiculo; 


class cLista_vehiculo
{

public:
	cLista_vehiculo();
	virtual ~cLista_vehiculo();

private:
	cVehiculo** vehiculos; 


};
