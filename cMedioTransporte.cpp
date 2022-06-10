#include "cMedioTransporte.h"
#include  "cPasajero.h"

#include "cCorta.h"
#include "cLarga.h"
cMedioTransporte::cMedioTransporte(int TAM):ID(counter++)
{

	this->TAM = TAM;
	CA = 0;
	lista = new cPasajero*[TAM];
	for (int i = 0; i < TAM; i++)
	{
		lista[i] = NULL;
	}

}

cMedioTransporte::~cMedioTransporte()
{
	if (lista != NULL) {
		// depende de la ocacion
		if (false) {
			for (int i = 0; i < CA; i++)
			{
				if (lista[i] != NULL)
					delete lista[i];
			}
		
		}
	
		delete[] lista;
	}

}

void cMedioTransporte::Agregar(cPasajero*P)
{
	if (CA >= TAM)throw exception("no hay lugar");

	if (Cobrar(P))
		lista[CA++] = P;
	else
		throw exception("bajate !!!");

}

cPasajero* cMedioTransporte::Quitar(string dni)
{
	int pos = 0;
	for (pos = 0; pos < CA; pos++)
	{
		if (lista[pos]->getDNI() == dni)
			break;
	}

	if (pos==CA)return nullptr;

	cPasajero* aux = lista[pos];

	for (int i = pos; i < CA-1; i++)
	{
		lista[i] = lista[i + 1];
	}
	CA--;
	lista[CA] = NULL;
	return aux;
}

void cMedioTransporte::Eliminar(string dni)
{
	cPasajero* p = Quitar(dni);
	if (p != NULL)
		delete p;
}

void cMedioTransporte::Listar() const
{
	for (int i = 0; i < CA; i++)
	{
		if (dynamic_cast<cCorta*>(lista[i]))
			cout << *((cCorta*)lista[i]) << endl; // VER ACA!!!
		else
			cout << *((cLarga*)lista[i]) << endl; // VER ACA!!!


	}

}

cPasajero* cMedioTransporte::operator[](int pos) const
{
	if (pos > 0 && pos < CA)
		return lista[pos];
	return nullptr;
}

int cMedioTransporte::counter = 0;

int cMedioTransporte::getCounter()
{
	return counter;
}

void operator+(cMedioTransporte& T, cPasajero* P)
{
	T.Agregar(P);
}

cPasajero* operator-(cMedioTransporte* T, string clave)
{
	return T->Quitar(clave);
}
