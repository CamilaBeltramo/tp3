#pragma once
#include <string>
#include<string.h>
#include<iostream>
#define MAX 300

using namespace std;
template<class T>
class cLista
{
protected:
	T** vector;
	int CA, TAM;

public:
	cLista(int TAM = MAX);
	bool Agregar(T* ptr);
	T* Quitar(string clave);
	T* getrandom();
	int getPos(string clave);
	void Listar();
	void ListarP();
	~cLista();
};


template<class T>
cLista<T>::cLista(int TAM)
{
	vector = new T * [TAM];
	for (int i = 0; i < TAM; i++)
	{
		vector[i] = NULL;
	}

	this->TAM = TAM;
	CA = 0;

};

template<class T>
bool cLista<T>::Agregar(T* ptr)
{
	int pos = getPos(ptr->getclave());

	if (pos >= 0)//el elemento ya está en la lista 
		return false;

	else if (ptr != NULL)
	{
		if (CA < TAM)
			vector[CA++] = ptr;
		return true;
	}

	else
		return false; //  puntero NULL
}

template<class T>
T* cLista<T>::Quitar(string clave)
{
	int pos = getPos(clave);
	if (pos >= CA || pos == -1) // el elemento no esta en la lista
		return NULL;

	T* aux = vector[pos];

	for (int i = pos; i < CA - 1; i++)
	{
		vector[i] = vector[i + 1];
	}

	vector[CA - 1] = NULL;
	CA--;
	return aux;

}

template<class T>
T* cLista<T>::getrandom()
{
	return vector[rand() % CA];
}

template<class T>
int cLista<T>::getPos(string clave)
{
	for (int i = 0; i < CA; i++)
	{
		if (vector[i]->getclave() == clave)
			return i; // se encontro al elemento
	}
	return -1; // no se encontro al elemento
}

template<class T>
void cLista<T>::Listar()
{
	for (int i = 0; i < CA; i++)
	{
		cout << vector[i]->getclave() << endl;
	}


}

template <class T>
void cLista<T> ::ListarP()
{
	for (int i = 0; i < CA; i++)
	{
		vector[i]->imprimirp();
	}
}

template<class T>
cLista<T>::~cLista()
{
	if (vector != NULL)
	{
		for (unsigned int i = 0; i < CA; i++)
		{
			if (vector[i] != NULL)
				delete vector[i]; // elimina cada elemento
		}
		delete[] vector; // elimina la lista
	}

}



