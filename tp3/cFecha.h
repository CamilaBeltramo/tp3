#pragma once
#include <iostream>
#include <string>
using namespace std;
//CLASE PARA MANEJO DE FECHA
class cFecha
{
protected:
	int dia;
	int mes;
	int anio;


public:
	cFecha(int dia, int mes, int anio);
	//hacemos un string que	tiene tdos los datos de la fecha
	string getFecha();
	int Get_dia();
	int Get_mes();
	int Get_anio();
}; 