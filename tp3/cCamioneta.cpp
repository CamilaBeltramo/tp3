#include "cCamioneta.h"
#include "cVehiculo.h"
cCamioneta::cCamioneta(int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler, int sillaDeSeg, int portaEq):  cVehiculo(precio_dia,capacidad_pasajeros, color, fecha_ult_mantenimiento,numero_chasis, patente, poliza, precio_alquiler)
{
	this->sillaDeSeg = sillaDeSeg; //ver lo del this si va asi 
	this->portaEq = portaEq; 
}



void cCamioneta::Imprimir()
{
	cout << " " << toString() << endl;
}

string cCamioneta::toString()
{
	string aux;
	aux = "\nCapacidad de pasajeros : " + to_string(capacidad_pasajeros) + "\nColor :  " + color +
		"\nNumero de chasis  :  " + to_string(numero_chasis) + "\n Patente:  " + patente + "\n Poliza: " + to_string(poliza) +
		"\n Silla de seguridad : " + to_string(sillaDeSeg) + "\nPorta equipaje : " + to_string(portaEq)
		+ to_string(fecha_ult_mantenimiento.Getfecha()); 
	return aux;
	
}
   
cCamioneta::~cCamioneta()
{
}
