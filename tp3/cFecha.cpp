#include "cFecha.h"

cFecha::cFecha(int dia, int mes, int anio)
{
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;

}

string cFecha::getFecha()
{
	string aux;
	aux = " " + to_string(dia) + "/" + to_string(mes) + "/" + to_string(anio);
	return aux;
}

int cFecha::Get_fecha_nro()
{
	return dia + mes + anio;
}

int cFecha::Get_dia()
{
	return dia;
}

int cFecha::Get_mes()
{
	return mes;
}

int cFecha::Get_anio()
{
	return anio;
}

int cFecha::Set_dia(int dia_mant)
{
	dia = dia_mant;
	return dia;
}

int cFecha::Set_mes(int mes_mant)
{
	mes = mes_mant;
	return mes;
}

int cFecha::Set_anio(int anio_mant)
{
	anio = anio_mant; 
	return anio;
}

//string cFecha::Set_fecha()
//{
//	string aux
//	return string();
//}
