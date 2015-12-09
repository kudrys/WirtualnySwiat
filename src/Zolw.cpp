#include "Zolw.h"

Zolw::Zolw(){
    sila = 2;
    inicjatywa = 1;
    label = 'Z';

}

Zolw::~Zolw(){
    //dtor
}

void Zolw::akcja(){
/*
W 75% przypadk�w nie zmienia swojego po�o�enia.
*/
}


int Zolw::kolizja(Organizm * attacking)
{
//Odpiera ataki zwierz�t o sile <5. Napastnik musi wr�ci� na swoje poprzednie pole
    if(attacking->sila<5)
        return 3;
    else
        return whoDied(attacking);
}
