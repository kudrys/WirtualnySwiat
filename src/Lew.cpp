#include "Lew.h"

Lew::Lew()
{
    label = 'L';

    sila = 11;
    inicjatywa = 7;
}

Lew::~Lew()
{
    //dtor
}
bool Lew::atak(Organizm napotkany)
{
    bool isAlive;
    if(napotkany.getLabel()==this->label){
        rozmnazanie();
        isAlive=1;
    }else{
        return kolizja();
    }
    return isAlive;
}

void Lew::akcja()
{

}
void Lew::rozmnazanie()
{

}

bool Lew::kolizja()
{
//Kr�l zwierz�t: �adne zwierz� o sile < 5 nie o�mieli si� wej�� na pole zajmowane przez lwa
}
