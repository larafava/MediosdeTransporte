#pragma once
#include "cPasajero.h"
class cCorta :
    public cPasajero
{
protected:
    int chupetin;
    bool libro;

public:
    cCorta(string DNI) :cPasajero(DNI, 10){
        chupetin = 100;
        libro = false;
    };
    void H1() {}

    friend ostream& operator<<(ostream&, const cCorta&);
    friend istream& operator>>(istream&, cCorta&);

    
};

