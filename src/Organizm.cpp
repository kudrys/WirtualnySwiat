#include "Organizm.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Organizm::~Organizm(){
    szansa = 100;
}

/*
* flag 1 - organizm to roslina
* flag 2 - organizm to NULL
* flag 3 - te same organizmy, rozmnazanie
*/
int Organizm::akcja(Organizm * napotkany){
    if(szansaNaSukces()){
        if(OrganizmMark=='R'){
            return 1;
        }
        if(this==0){
            return 2;
        }
        if(label==napotkany->getLabel()){
            return 3;
        }
    }
}

bool Organizm::szansaNaSukces()
{
    srand( time( 0 ));
    int r = rand()%100 +1;
    if(r<=szansa){
        return 1;
    }else{
        return 0;
    }
}


int Organizm::kolizja(Organizm * attacking){
    return whoDied(attacking);
}

/**
 *  2 - def zyje
 *  1 - att zyje
 *  3 - obydwoje zyja
 */
int Organizm::whoDied(Organizm * attacking){
    int defAlive = 1;
    int attAlive = 1;
    if (this->sila <= attacking->sila){
        defAlive = 0;
    }else{
        attAlive = 0;
    }
    return defAlive*2+attAlive;
}

void Organizm::rozmnazanie(){

}
void Organizm::przypiszXY(int x, int y){
    this->x=x;
    this->y=y;
}
int Organizm::getX(){
    return x;
}
int Organizm::getY(){
    return y;
}
int Organizm::getSila(){
    return sila;
}
void Organizm::increaseSila(int v){
    this->sila = this->sila+v;
}
int Organizm::getInicjatywa(){
    return inicjatywa;
}
int Organizm::getSzansa(){
    return szansa;
}
char Organizm::getLabel(){
    return label;
}
char Organizm::getOrganizmMark(){
    return OrganizmMark;
}
