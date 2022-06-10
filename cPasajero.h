#pragma once
#include <string>
#include <iostream>

using namespace std;

class cPasajero
{
protected:
	string DNI;
	float dinero;
public:

	cPasajero(string dni, float money);
	virtual ~cPasajero() {}
	string getDNI()const { return DNI; }
	float getDinero()const { return dinero; }
	void setDinero(float monto) { dinero = monto; }///validar que monto +0
	virtual void H1() = 0;

	friend ostream& operator<<(ostream&, const cPasajero&);
};

istream& operator>>(istream&, cPasajero&);