#pragma once

#include "cFecha.h"
#include <string>
#include "cVehiculo.h"
#include "cCliente.h"
#include "cMoto.h"
#include "cAuto.h"
#include "cCamioneta.h"
#include "cTrafic.h"
using namespace std;


class cAlquiler
{

public:
	cAlquiler( int nro_alquiler,cCliente* cliente, cFecha* fecha_fin, cFecha* fecha_inicio, int monto_total, cVehiculo* vehiculo);
	~cAlquiler();
	//calcular el costo final de alquiler que consta de una tarifa base + un precio por día
	int calcular_tarifa(); 
	//imprime datos. llama a la funcion toString
	void Imprimir();
	//unifica los atributos del paciente a un string y lo retorna
	string toString();
	int getclave();

private:
	int nro_alquiler;
	cFecha* fecha_fin;
	cFecha* fecha_inicio;
	cCliente* cliente;
	int monto_total;
	cVehiculo* vehiculo;

};

