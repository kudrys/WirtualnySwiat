#include "Organizm.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
using namespace std;

Organizm::Organizm(){
    szansa = 100;
}

/**
* flag 1 - organizm to roslina
* flag 2 - napotkany to NULL
* flag 3 - te same organizmy, rozmnazanie
* flag 4 - kolizja
*/
int Organizm::akcja(Organizm * napotkany){
    if(szansaNaSukces()){
        if(this->OrganizmMark=='R'){
            cout<<"organizm to roslina"<<endl;
            return 1;
        }
        if(napotkany==0){
            cout<<"napotkany to null"<<endl;
            return 2;
        }
        if(this->label==napotkany->getLabel()){
            cout<<"Labele sa takie same"<<endl;
            return 3;
        }
        return 4;
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
