// MediosdeTransporte.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cMedioTransporte.h"
#include "cColectivo.h"
#include "cSubte.h"
#include "cPasajero.h"
#include "cCorta.h"
#include "cLarga.h"

int main()
{
    cMedioTransporte* colectivo = new cColectivo(20);
    cMedioTransporte* subte = new cSubte();  


    cPasajero* pLarga = new cLarga("1234");
    cPasajero* pCorta = new cCorta("567");
    cPasajero* pLarga2 = new cLarga(*pLarga);

    cPasajero* ptr;
    cin >> *pCorta;//VER
    cin >> *pLarga;//VER
    cout << *pCorta;
    cout << *pLarga;

    try
    {
        colectivo->Agregar(pLarga);
        subte->Agregar(pLarga);
    }
    catch (const std::exception&e)
    {
        cout << e.what() << endl;
    }

    try
    {
        *colectivo + pCorta;
        *subte + pCorta;
    }
    catch (const std::exception&e1)
    {
        cout << e1.what() << endl;

    }
    cout << endl;

    colectivo->Listar();
    subte->Listar();

    ptr = colectivo - pLarga->getDNI();
    ptr = subte->Quitar(pLarga->getDNI());
    ptr = colectivo[0][3];
    
    cout << endl;
    colectivo->Listar();

    colectivo->Quitar(pCorta->getDNI());
    subte->Eliminar(pCorta->getDNI());
    
    //system("pause");


    delete colectivo;
    delete subte;
    // ver de eliminar los pasajeros!! 
    // o si ya pusimos.. que lo borre colec/subte!!
    // pero recordar... que solo 1 debe borrarlos
    delete pLarga;
    delete pLarga2;
}

