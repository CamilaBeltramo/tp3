#include "cMoto.h"
#include "cFecha.h"
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
	aux ="\n Cascos : " + to_string(cascos) + cVehiculo::ToString();
	return aux;

}

int cMoto::Get_accesorios()
{
	return cascos;
}

ostream& operator<<(ostream& os,  cMoto& C)
{
	os << C.toString();
	return os;
}
