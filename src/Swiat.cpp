#include "Swiat.h"
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <iostream>
using namespace std;

Swiat::Swiat(int wys , int szer){
    wysokosc = wys;
    szerokosc = szer;

    // Create 2D array of pointers:
    Organizm*** organizmyTab = new Organizm**[szerokosc];
    for (int i = 0; i < szerokosc; ++i) {
      organizmyTab[i] = new Organizm*[wysokosc];
    }

    // Null out the pointers contained in the array:
    for (int i = 0; i < szerokosc; ++i) {
      for (int j = 0; j < wysokosc; ++j) {
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
    for(int i=0;i<szerokosc*wysokosc-1;i++){
        tabLosowychXY[i]=i;
    }
    for(int i=0;i<32;i++){
        int temp = rand()%szerokosc*wysokosc;
        int temp2 = tabLosowychXY[szerokosc*wysokosc-1-i];
        tabLosowychXY[szerokosc*wysokosc-1-i] = tabLosowychXY[temp];
        tabLosowychXY[temp] = temp2;
    }
//    for(int i = 0; i < szerokosc; i++){
//        for(int j = 0; j < wysokosc; j++){
//            cout<<tabLosowychXY[i*wysokosc+j]<<" ";
//        }
//        cout<<endl;
//    }
}

void Swiat::rysujSwiat(){

}

void Swiat::wykonajTure(){

}
