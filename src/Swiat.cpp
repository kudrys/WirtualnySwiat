#include "Swiat.h"
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <iostream>
#include "Lew.h"
#include "Wilk.h"
using namespace std;

Swiat::Swiat(int wys , int szer){
    wysokosc = wys;
    szerokosc = szer;

    // Create 2D array of pointers:
    Organizm*** organizmyTab = new Organizm**[wysokosc];
    for (int i = 0; i < wysokosc; ++i) {
      organizmyTab[i] = new Organizm*[szerokosc];
    }

    // Null out the pointers contained in the array:
    for (int i = 0; i < wysokosc; ++i) {
      for (int j = 0; j < szerokosc; ++j) {
        organizmyTab[i][j] = NULL;
      }
    }
}

Swiat::~Swiat(){
    //dtor
}

void Swiat::losowanieXY(){
    srand( time( 0 ));
    int tabLosowychXY[szerokosc*wysokosc];
    for(int i=0;i<szerokosc*wysokosc;i++){
        tabLosowychXY[i]=i;
    }
    for(int i=0;i<(szerokosc*wysokosc)/10;i++){
        int temp = rand()%szerokosc*wysokosc-1;
        int temp2 = tabLosowychXY[szerokosc*wysokosc-1-i];
        tabLosowychXY[szerokosc*wysokosc-1-i] = tabLosowychXY[temp];
        tabLosowychXY[temp] = temp2;
    }
    for(int i = 0; i < szerokosc; i++){
        for(int j = 0; j < wysokosc; j++){
            cout<<tabLosowychXY[i*wysokosc+j]<<" ";
        }
        cout<<endl;
    }
}

int Swiat::getXfromValue(int value)
{
    return value/szerokosc;
}

int Swiat::getYfromValue(int value)
{
    return value%szerokosc;
}

void Swiat::wsadzZwierzaka(int value, char zwierzakAscii)
{
    Organizm * organizmWsadzany;


    switch(zwierzakAscii){
        case 'L':
        {
            organizmWsadzany = new Lew();
            break;
        }

        case 'W':
        {
            Wilk * w = new Wilk();
            break;
        }
        default:
        break;
    }

    organizmyTab[getXfromValue(value)][getYfromValue(value)]=
}













void Swiat::rysujSwiat(){

}

void Swiat::wykonajTure(){

}
