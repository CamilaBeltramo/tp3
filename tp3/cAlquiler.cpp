///////////////////////////////////////////////////////////
//  cLista_alquiler.cpp
//  Implementation of the Class cLista_alquiler
//  Created on:      19-may.-2021 17:33:11
//  Original author: beltr
///////////////////////////////////////////////////////////

#include "cAlquiler.h"
#include "cMoto.h"
#include "cAuto.h"

cAlquiler::cAlquiler( int nro_alquiler, cCliente* cliente, cFecha* fecha_fin, cFecha* fecha_inicio, int monto_total, cVehiculo* vehiculo)
{
	this->nro_alquiler = nro_alquiler;
	this->cliente = cliente;
	this->fecha_fin = fecha_fin;
	this->fecha_inicio = fecha_inicio;
	monto_total = calcular_tarifa();
	this->vehiculo = vehiculo;
}


cAlquiler::~cAlquiler() {
	delete cliente;
	delete fecha_fin;
	delete fecha_inicio;
	delete vehiculo;
}

int cAlquiler::calcular_tarifa()
{
	if (this->vehiculo != NULL)
	{
		int suma = vehiculo->precio_alquiler + (fecha_fin->Get_fecha_nro() - fecha_inicio->Get_fecha_nro()) * (vehiculo->precio_dia);

		cMoto* aux_moto = dynamic_cast<cMoto*>(vehiculo); //castea que tipo de vehiculo es, y en base a eso utiliza el precio de los accesorios correspondientes
		if (aux_moto != NULL) {
			suma += aux_moto->Get_accesorios() * (fecha_fin->Get_fecha_nro() - fecha_inicio->Get_fecha_nro()); //multiplica el precio por la cantidad de dias a usar
			return suma;
		}
		cAuto* aux_auto = dynamic_cast<cAuto*>(vehiculo);
		if (aux_auto != NULL) {
			suma += aux_auto->Get_accesorios() * (fecha_fin->Get_fecha_nro() - fecha_inicio->Get_fecha_nro());
			return suma;
		}
		cTrafic* aux_trafic = dynamic_cast<cTrafic*>(vehiculo);
		if (aux_trafic != NULL) {
			suma += aux_trafic->Get_accesorios() * (fecha_fin->Get_fecha_nro() - fecha_inicio->Get_fecha_nro());
			return suma;
		}
		cCamioneta* aux_camioneta = dynamic_cast<cCamioneta*>(vehiculo);
		if (aux_camioneta != NULL) {
			suma += aux_camioneta->Get_accesorios() * (fecha_fin->Get_fecha_nro() - fecha_inicio->Get_fecha_nro());
			return suma;
		}
	}
	return 0;
}

void cAlquiler::Imprimir()
{
	cout << " " << toString() << endl;
}

string cAlquiler::toString()
{
	string aux;
	aux = "\nCliente : " + cliente->toString() + "\n Numero de orden : " + to_string(nro_alquiler) + "\nFecha fin :  " + fecha_fin->getFecha() +
		"\nFecha inicio :  " + fecha_inicio->getFecha() + "\n Monto total:  " + to_string(monto_total); 
	cMoto* aux_moto = dynamic_cast<cMoto*>(vehiculo); //castea el tipo de vehiculo, y imprime lo particular de cada vehiculo
	if (aux_moto != NULL) {
		aux += "\n Datos de la moto : " + aux_moto->toString();
		return aux;
	}
	cAuto* aux_auto = dynamic_cast<cAuto*>(vehiculo);
	if (aux_auto != NULL) {
		aux+= "\n Datos del auto : " + aux_auto->toString();
		return aux;
	}
	cTrafic* aux_trafic = dynamic_cast<cTrafic*>(vehiculo);
	if (aux_trafic != NULL) {
		aux += "\n Datos de la trafic : " + aux_trafic->toString();
		return aux;
	}
	cCamioneta* aux_camioneta = dynamic_cast<cCamioneta*>(vehiculo);
	if (aux_camioneta != NULL) {
		aux += "\n Datos de la camioneta : " + aux_camioneta->toString();
		return aux;
	}
	return aux;
}

int cAlquiler::getclave()
{
	return nro_alquiler;
}


