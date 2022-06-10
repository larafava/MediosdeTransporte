#pragma once
#include <string>
#include <iostream>
#define NMAX 50

using namespace std;

class cPasajero;
class cMedioTransporte
{
protected:
	cPasajero** lista;
	int CA, TAM;

	const int ID;
	static int counter;

public:
	cMedioTransporte(int TAM = NMAX);
	virtual ~cMedioTransporte();

	virtual bool Cobrar(cPasajero*) = 0;

	void Agregar(cPasajero*);
	cPasajero* Quitar(string dni);
	void Eliminar(string dni);
	void Listar()const;

	cPasajero* operator[](int pos)const;
	int getCa()const { return CA; }
	int getTam()const { return TAM; }

	static int getCounter();
};

void operator+(cMedioTransporte&T, cPasajero* P);
cPasajero* operator-(cMedioTransporte* T, string clave);


