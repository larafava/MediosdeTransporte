#pragma once
#include "cMedioTransporte.h"
class cColectivo :
    public cMedioTransporte
{
    protected:


    public:

        cColectivo(int TAM);
        virtual ~cColectivo() {};
        bool Cobrar(cPasajero*);
        void PararBruscamente() {
            cout << "AHHHHHHH lpm" << endl;
        }
};

