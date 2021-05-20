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
