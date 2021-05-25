#include "cCamioneta.h"
#include "cVehiculo.h"
cCamioneta::cCamioneta(int capacidad_pasajeros, string color, cFecha* fecha_ult_mantenimiento, int numero_chasis, string patente, int poliza, int precio_alquiler, int sillaDeSeg, int portaEq):  cVehiculo(precio_dia,capacidad_pasajeros, color, fecha_ult_mantenimiento,numero_chasis, patente, poliza, precio_alquiler)
{
	this->sillaDeSeg = sillaDeSeg; //ver lo del this si va asi 
	this->portaEq = portaEq; 
}



int cCamioneta::Get_accesorios()
{
	return sillaDeSeg+portaEq;
}

void cCamioneta::Imprimir()
{
	cout << " " << toString() << endl;
}

string cCamioneta::toString() 
{
	string aux;
	aux = "\n Silla de seguridad : " + to_string(sillaDeSeg) + "\nPorta equipaje : " + to_string(portaEq) + cVehiculo::ToString();
		
	return aux;
	
}
   
cCamioneta::~cCamioneta()
{
	
}

ostream& operator<<(ostream& os,  cCamioneta& C)
{
	os << C.toString();
	return os;
}
