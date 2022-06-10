#pragma once
#include "cPasajero.h"
class cLarga :
    public cPasajero
{

public:

    cLarga(string DNI):cPasajero(DNI, 5) {
        
    }

    cLarga(const cPasajero& P) :cPasajero(P.getDNI(), P.getDinero()){
    
    }

    void H1() {}
};

