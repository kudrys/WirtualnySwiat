#include "Swiat.h"
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <iostream>
using namespace std;

Swiat::Swiat(){
    //ctor
}

Swiat::~Swiat(){
    //dtor
}

void Swiat::losowanieXY(){
    srand( time( 0 ));
    int tabLosowychXY[400];
    for(int i=0;i<399;i++){
        tabLosowychXY[i]=i;
    }
    for(int i=0;i<32;i++){
        int temp = rand()%400;
        int temp2 = tabLosowychXY[399-i];
        tabLosowychXY[399-i] = tabLosowychXY[temp];
        tabLosowychXY[temp] = temp2;

        //cout<<tabLosowychXY[399-i]<<endl;
    }
}

void Swiat::rysujSwiat(){

}

void Swiat::wykonajTure(){

}
