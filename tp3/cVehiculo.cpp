#define _CRT_SECURE_NO_WARNINGS

#include "cVehiculo.h"




cVehiculo::cVehiculo(int precio_dia,int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler) {
	this->capacidad_pasajeros = capacidad_pasajeros;
	this->precio_dia = precio_dia;
	this->color = color;
	this->fecha_ult_mantenimiento = fecha_ult_mantenimiento;
	this->numero_chasis = numero_chasis;
	this->patente = patente;
	this->poliza = poliza;
	this->precio_alquiler = precio_alquiler;

}



cVehiculo::~cVehiculo() {
	if (fecha_ult_mantenimiento != NULL)
	{
		delete fecha_ult_mantenimiento;  
	}
	
}

void cVehiculo::pasos_mantenimiento()
{
	cout << "1) chequear aire de las ruedas \n 2) chequear aceite \n 3) chequear luces \n 4) chequear freno \n " << endl ;
	//actualiza la fecha de ultimo mantenimiento 
	
	std::time_t t = std::time(0);   // get time  
	std::tm* now = std::localtime(&t);
	fecha_ult_mantenimiento->Set_dia(now->tm_mday);
	fecha_ult_mantenimiento->Set_dia(now->tm_mon+1);
	fecha_ult_mantenimiento->Set_dia(now->tm_mday);
	
	
}

void cVehiculo::Imprimir()
{
	cout << " " << ToString() << endl;

}

string cVehiculo::ToString()
{
	string aux;
	aux = "\nCapacidad de pasajeros : " + to_string(capacidad_pasajeros) + "\nColor :  " + color +
		"\nNumero de chasis  :  " + to_string(numero_chasis) + "\n Patente:  " + patente + "\n Poliza: " + to_string(poliza) +
		fecha_ult_mantenimiento->getFecha();
	return aux;

}

int cVehiculo::getclave()
{
	return numero_chasis;
}


