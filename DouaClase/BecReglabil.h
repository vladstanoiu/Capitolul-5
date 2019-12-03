#ifndef BECREGLABIL_H
#define BECREGLABIL_H
#include <iostream>

class BecReglabil
{
private:
    unsigned short putereMaxima;
    unsigned short putereCurenta;
    bool aprins;

    public:

        void SetPutereMaxima (unsigned short putMaxima) { putereMaxima = putMaxima;}
        void SetPutereCurenta (unsigned short putCurenta) {putereCurenta = putCurenta;}

        unsigned short GetPutereMaxima() {return putereMaxima;}
        unsigned short GetPutereCurenta() {return putereCurenta;}

        void Aprinde();
        void Stinge();
        short MaresteLumina(short);
        short ReduceLumina (short);
        void StareaBec();


        BecReglabil();
        virtual ~BecReglabil();

    protected:


};

#endif // BECREGLABIL_H
