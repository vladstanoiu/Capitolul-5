#include "BecReglabil.h"

BecReglabil::BecReglabil()
{
    //ctor
}

BecReglabil::~BecReglabil()
{
    //dtor
}

void BecReglabil::Aprinde()
{
    aprins = true;
    putereCurenta = putereMaxima;
}
void BecReglabil::Stinge()
{
    aprins = false;
    putereCurenta = 0;
}
short BecReglabil::MaresteLumina(short)
{
    short lumina;
    putereCurenta += lumina;
    if (putereCurenta > putereMaxima)
    {
        putereCurenta = putereMaxima;
    }
    aprins = true;
    return 0;
}
short BecReglabil::ReduceLumina(short)
{
    short lumina;
    putereCurenta -= lumina;
    if (putereCurenta < 0)
    {
        putereCurenta = 0;
        if (putereCurenta == 0)
        {
            aprins = false;
        }
    }
    return 0;
}
void BecReglabil::StareaBec()
{
    if(aprins == true)
    {
        std::cout << "Becul e aprins" << std::endl;
    }
    else
    {
        std::cout << "Becul e stins" << std::endl;
    }
}
