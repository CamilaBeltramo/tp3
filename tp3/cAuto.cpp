#include "cAuto.h"
cAuto::cAuto( int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler, int sillaDeSeg) : cVehiculo( precio_dia, capacidad_pasajeros, color, fecha_ult_mantenimiento, numero_chasis, patente, poliza, precio_alquiler)
{
	this->sillaDeSeg = sillaDeSeg;

}


cAuto::~cAuto()
{
}

void cAuto::Imprimir()
{
	cout << " " << toString() << endl;
}

string cAuto::toString()
{
	string aux;
	aux = "\nCapacidad de pasajeros : " + to_string(capacidad_pasajeros) + "\nColor :  " + color +
		"\nNumero de chasis  :  " + to_string(numero_chasis) + "\n Patente:  " + patente + "\n Poliza: " + to_string(poliza) +
		"\n Silla de seguridad  : " + to_string(sillaDeSeg) +  to_string(fecha_ult_mantenimiento.Getfecha());
	return aux;

}
