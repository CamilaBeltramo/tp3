#include "cMoto.h"
cMoto::cMoto(int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler, int cascos): cVehiculo(precio_dia,capacidad_pasajeros, color, fecha_ult_mantenimiento, numero_chasis, patente, poliza, precio_alquiler)
{
	this->cascos = cascos;
}


cMoto::~cMoto()
{
}

void cMoto::Imprimir()
{
	cout << " " << toString() << endl;
}

string cMoto::toString()
{
	string aux;
	aux = "\nCapacidad de pasajeros : " + to_string(capacidad_pasajeros) + "\nColor :  " + color +
		"\nNumero de chasis  :  " + to_string(numero_chasis) + "\n Patente:  " + patente + "\n Poliza: " + to_string(poliza) +
		"\n Cascos : " + to_string(cascos) + to_string(fecha_ult_mantenimiento.Getfecha());
	return aux;

}

