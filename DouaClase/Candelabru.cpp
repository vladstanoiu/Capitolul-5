#include "Candelabru.h"
#include "BecReglabil.h"
#include <iostream>


using namespace std;
unsigned short nrBecuri;

Candelabru::Candelabru()
{
    //ctor
}

Candelabru::~Candelabru()
{
    //dtor
}

void Candelabru::ConfigureazaCandelabru(unsigned short parametru)
{
    nrBecuri = parametru;
    listaBecuri = new BecReglabil[nrBecuri];

    for (int i=0; i < nrBecuri; i++)
    {
        listaBecuri[i].SetPutereCurenta(0);
        listaBecuri[i].SetPutereMaxima(100);

    }

}

void Candelabru::AprindeLumina()
{
    int i;
    for ( i=0; i< nrBecuri; i++)
    {
        listaBecuri[i].Aprinde();
    }
}

void Candelabru::StingeLumina()
{
    for (int i = 0; i < nrBecuri; i++)
    {
        listaBecuri[i].Stinge();
    }
}

void Candelabru::MaresteLumina(unsigned short parametru)
{
    for (int i = 0; i < nrBecuri; i++)
    {
        listaBecuri[i].MaresteLumina(parametru);
    }
}

void Candelabru::ReduceLumina(unsigned short parametru)
{
    for (int i = 0; i < nrBecuri; i++)
    {
        listaBecuri[i].ReduceLumina(parametru);
    }
}

int Candelabru::PutereMaximaCandelabru()
{
    unsigned short suma = 0;
    for (int i = 0; i < nrBecuri; i++)
    {
        suma += listaBecuri[i].GetPutereMaxima();
    }
    return  suma;
}

bool Candelabru::StareCandelabru() {
    for(int i = 0; i < nrBecuri; ++i) {
        if(listaBecuri[i].GetPutereCurenta() > 0)
            return true;
    }
    return false;
}


/*primește numărul de becuri al candelabrului sub forma unui parametru unsigned short
inițializează corespunzător membrul nrBecuri
inițializează listaBecuri prin crearea pe heap a unui array cu numărul necesar de elemente
inițializează fiecare bec din listă punându-i puteream curentă pe 0 și cea maximă pe 100
nu returnează nimic*/
