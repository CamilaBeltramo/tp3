#include "cTrafic.h"
cTrafic::cTrafic(int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler, int sillaDeSeg, int asientito) : cVehiculo(precio_dia, capacidad_pasajeros, color, fecha_ult_mantenimiento, numero_chasis, patente, poliza, precio_alquiler)
{
	this->sillaDeSeg = sillaDeSeg;
	this->asientito = asientito;
}


cTrafic::~cTrafic()
{
}

int cTrafic::Get_accesorios()
{
	return sillaDeSeg+asientito;
}

void cTrafic::Imprimir()
{
	cout << " " << toString() << endl;
}

string cTrafic::toString() 
{
	string aux;
	aux ="\n Silla de seguridad  : " + to_string(sillaDeSeg) + "\n Asiento extra : " + to_string(asientito) + cVehiculo::ToString();
	return aux;

}

ostream& operator<<(ostream& os,  cTrafic& C)
{
	os << C.toString();
	return os;
}
