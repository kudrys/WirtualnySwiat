#include "Organizm.h"


Organizm::~Organizm(){
    //dtor
}

void Organizm::akcja(){

}

void Organizm::kolizja(){

}

int Organizm::getInicjatywa(){
    return inicjatywa;
}
void Organizm::przypiszXY(int x, int y)
{
    this->x=x;
    this->y=y;
}
