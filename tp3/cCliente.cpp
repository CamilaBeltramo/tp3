///////////////////////////////////////////////////////////
//  cLista_cliente.cpp
//  Implementation of the Class cLista_cliente
//  Created on:      19-may.-2021 17:33:12
//  Original author: beltr
///////////////////////////////////////////////////////////

#include "cCliente.h"


cCliente::cCliente(string nombre, string apellido, int telefono)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->telefono = telefono;

}



cCliente::~cCliente() {

}

void cCliente::Imprimir()
{
	cout << " " << toString() << endl;

}

string cCliente::toString()
{
	string aux;
	aux = "\nNombre : " + nombre + "\nApellido :  " + apellido + "\nTelefono  :  " + to_string(telefono);
	return aux;
}

int cCliente::getclave()
{
	return telefono;
}


