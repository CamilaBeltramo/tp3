#include "cAuto.h"
cAuto::cAuto( int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler, int sillaDeSeg) : cVehiculo( precio_dia, capacidad_pasajeros, color, fecha_ult_mantenimiento, numero_chasis, patente, poliza, precio_alquiler)
{
	this->sillaDeSeg = sillaDeSeg;

}


cAuto::~cAuto()
{
}

int cAuto::Get_accesorios()
{
	return sillaDeSeg;
}

void cAuto::Imprimir()
{
	cout << " " << toString() << endl;
}

string cAuto::toString() 
{
	string aux;
	aux = "\n Silla de seguridad  : " + to_string(sillaDeSeg) + cVehiculo::ToString();
	return aux;

}

ostream& operator<<(ostream& os,  cAuto& C)
{
	os << C.toString();
	return os;
}