#include "Zolw.h"

Zolw::Zolw(){
    sila = 2;
    inicjatywa = 1;
    label = 'Z';
    OrganizmMark ='Z';
}

Zolw::~Zolw(){
    //dtor
}

void Zolw::akcja(){
/*
W 75% przypadk�w nie zmienia swojego po�o�enia.
*/
}

void Zolw::rozmnazanie(){

}
void Zolw::kolizja()
{
//Odpiera ataki zwierz�t o sile <5. Napastnik musi wr�ci� na swoje poprzednie pole
}
