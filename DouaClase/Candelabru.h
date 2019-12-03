#ifndef CANDELABRU_H
#define CANDELABRU_H

class BecReglabil;
class Candelabru
{
private:
    unsigned short nrBecuri;
    BecReglabil* listaBecuri;

public:

    void ConfigureazaCandelabru(unsigned short nrBecuri);
    void AprindeLumina();
    void StingeLumina();
    void MaresteLumina(unsigned short);
    void ReduceLumina(unsigned short);
    int PutereMaximaCandelabru();
    bool StareCandelabru();


    Candelabru();
    virtual ~Candelabru();

protected:

};

#endif // CANDELABRU_H
