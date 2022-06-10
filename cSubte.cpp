#include "cSubte.h"
#include "cPasajero.h"
#include "cCorta.h"
#include "cLarga.h"

cSubte::cSubte():cMedioTransporte()
{
}

bool cSubte::Cobrar(cPasajero*P)
{
	float monto = 0;

	if (dynamic_cast<cCorta*>(P) != NULL)
		monto = 8;
	else if (dynamic_cast<cLarga*>(P) != NULL)
		monto = 15;
	else
		throw exception("que se subio????");

	if (P->getDinero() < monto)
		return false;

	P->setDinero(P->getDinero() - monto);

	return true;
}
