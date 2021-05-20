#pragma once
///////////////////////////////////////////////////////////
//  cLista_cliente.h
//  Implementation of the Class cLista_cliente
//  Created on:      19-may.-2021 17:33:12
//  Original author: beltr
///////////////////////////////////////////////////////////
#include <string>
#include <iostream>
using namespace std;


class cCliente
{
private:
	string nombre;
	string apellido;
	int telefono;
public:
	cCliente(string nombre, string apellido, int telefono);
	virtual ~cCliente();
	void Imprimir();
	string toString();

};

