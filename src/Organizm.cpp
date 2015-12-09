#include "Organizm.h"

Organizm::~Organizm(){
    //dtor
}
void Organizm::akcja(){

}
int Organizm::kolizja(Organizm * attacking){
    return whoDied(attacking);
}

/**
 *
 *
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
int Organizm::getInicjatywa(){
    return inicjatywa;
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
char Organizm::getLabel(){
    return label;
}
char Organizm::getOrganizmMark(){
    return OrganizmMark;
}
