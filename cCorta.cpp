#include "cCorta.h"

ostream& operator<<(ostream& out, const cCorta& C)
{
    const cPasajero& P = C;

    out << P;
    out << "Chupetin al " << C.chupetin << "%" << endl;

    return out;
    // TODO: insert return statement here
}

istream& operator>>(istream& in, cCorta& C)
{
    cPasajero& P = C;
    cin >> P;

    cout << "ingerese nivel de chupetin: ";
    in >> C.chupetin;

    // TODO: insert return statement here
    return in;
}
