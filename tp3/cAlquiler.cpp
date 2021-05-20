///////////////////////////////////////////////////////////
//  cLista_alquiler.cpp
//  Implementation of the Class cLista_alquiler
//  Created on:      19-may.-2021 17:33:11
//  Original author: beltr
///////////////////////////////////////////////////////////

#include "cAlquiler.h"

cAlquiler::cAlquiler( cCliente* cliente, cFecha* fecha_fin, cFecha* fecha_inicio, int monto_total, cVehiculo* vehiculo)
{

	this->cliente = cliente;
	this->fecha_fin = fecha_fin;
	this->fecha_inicio = fecha_inicio;
	monto_total = calcular_tarifa();
	this->vehiculo = vehiculo;
}


cAlquiler::~cAlquiler() {

}

int cAlquiler::calcular_tarifa()
{
	int suma = vehiculo->precio_alquiler + (fecha_fin->Get_fecha_nro() - fecha_inicio->Get_fecha_nro()) * (vehiculo->precio_dia);
	//if(dynamic_cast<cMoto*>)
	//+precio_accesorio de cada vehiculo  * fecha fin- fecha inicio)
	return suma;
}

void cAlquiler::Imprimir()
{
	cout << " " << toString() << endl;
}

string cAlquiler::toString()
{
	string aux;
	aux = "\nCliente : " + cliente.toString() + "\nFecha fin :  " + fecha_fin->getFecha() +
		"\nFecha inicio :  " + fecha_inicio->getFecha() + "\n Monto total:  " + to_string(monto_total) + "\nVehiculo: " + vehiculo.toString(); //HAY QUE AGREGARLE LAS COSAS Q NO SE HEREDAN DE CADA VEHICULO 
	return aux;
}
