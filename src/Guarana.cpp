#include "Guarana.h"

Guarana::Guarana()
{
    label = 'G';
    sila = 0;

}

Guarana::~Guarana()
{
    //dtor
}

void Guarana::akcja()
{

}


int Guarana::kolizja(Organizm * attacking)
{
    //Zwi�ksza si�� zwierz�cia, kt�re zjad�o t� ro�lin�, o 3.
    attacking->sila=attacking->sila+3;
    return whoDied(attacking);
}
