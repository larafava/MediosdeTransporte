#pragma once
#include "cMedioTransporte.h"
class cSubte :
    public cMedioTransporte
{
protected:


public:

    cSubte();
    virtual ~cSubte() {};

    bool Cobrar(cPasajero*);

    void AnuncioInentendible() {
        cout << "bla bla bla kjgjksfjrhjgfikhs" << endl;
    }
};

