#include "cColectivo.h"
#include "cPasajero.h"
#include "cCorta.h"
#include "cLarga.h"

cColectivo::cColectivo(int TAM):cMedioTransporte(TAM)
{

}

bool cColectivo::Cobrar(cPasajero*P)
{
	float monto = 0;

	if (dynamic_cast<cCorta*>(P) != NULL)
		monto = 5;
	else if (dynamic_cast<cLarga*>(P) != NULL)
		monto = 10;
	else
		throw exception("que se subio????");

	if (P->getDinero() < monto)
		return false;

	P->setDinero(P->getDinero() - monto);

	return true;
}
