#include "cPasajero.h"

cPasajero::cPasajero(string dni, float money)
{
	this->DNI = dni;
	dinero = money;
}

ostream& operator<<(ostream&out, const cPasajero&P)
{
	// TODO: insert return statement here

	out << "DNI: " << P.getDNI() << " Dinero: " << P.getDinero() << endl;

	return out;
}

istream& operator>>(istream& in, cPasajero&P)
{
	// TODO: insert return statement here
	cout << "Cuanta plata quiere cargar?: ";
	float aux;
	in >> aux;

	aux += P.getDinero();
	P.setDinero(aux);

	return in;

}
