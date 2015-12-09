#include "Dinozaur.h"

Dinozaur::Dinozaur()
{
    sila = 20;
    inicjatywa = 10;
    label = 'D';

}

Dinozaur::~Dinozaur()
{
    //dtor
}
void Dinozaur::akcja()
{

}

void Dinozaur::rozmnazanie()
{

}

int Dinozaur::kolizja(Organizm * attacking)
{
    //dinozaur ginie kiedy atakuje go zwierze o sile<2 //"po rozmiarze mnie oceniasz?"
    if(attacking->sila<=2)
        return 2; //dino ginie (1 0)
    else
        return whoDied(attacking);
}
