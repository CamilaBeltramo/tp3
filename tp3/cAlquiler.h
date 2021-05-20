#pragma once

#include "cFecha.h"
#include <string>
#include "cVehiculo.h"
#include "cCliente.h"
using namespace std;


class cAlquiler
{

public:
	cAlquiler( cCliente* cliente, cFecha* fecha_fin, cFecha* fecha_inicio, int monto_total, cVehiculo* vehiculo);
	~cAlquiler();
	int calcular_tarifa(); 
	void Imprimir();
	string toString();

private:
	cFecha* fecha_fin;
	cFecha* fecha_inicio;
	cCliente* cliente;
	int monto_total;
	cVehiculo* vehiculo;

};

