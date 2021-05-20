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
	int Get_fecha_nro();
	int Get_dia();
	int Get_mes();
	int Get_anio();
	int Set_dia(int dia_mant);
	int Set_mes(int mes_mant);
	int Set_anio(int anio_mant);
	//string Set_fecha();

};