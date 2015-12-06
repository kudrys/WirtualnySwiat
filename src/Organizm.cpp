#include "Organizm.h"


Organizm::~Organizm(){
    //dtor
}

void Organizm::akcja(){

}

void Organizm::kolizja(){

}

void Organizm::rozmnazanie(){

}

int Organizm::getInicjatywa(){
    return inicjatywa;
}
void Organizm::przypiszXY(int x, int y)
{
    this->x=x;
    this->y=y;
}
int Organizm::getX()
{
    return x;
}
int Organizm::getY()
{
    return y;
}

char Organizm::getOrganizmMark()
{
    return OrganizmMark;
}
