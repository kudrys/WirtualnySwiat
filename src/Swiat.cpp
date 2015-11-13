#include "Swiat.h"
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <iostream>
#include "Lew.h"
#include "Wilk.h"
#include "Ciern.h"
#include "Dinozaur.h"
#include "Guarana.h"
#include "Owca.h"
#include "Trawa.h"
#include "Zolw.h"

using namespace std;

Swiat::Swiat(int szer , int wys){
    wysokosc = wys;
    szerokosc = szer;
    first = 0;

    organizmyTab = new Organizm**[wysokosc];
    for (int i = 0; i < wysokosc; ++i) {
      organizmyTab[i] = new Organizm*[szerokosc];
    }

    for (int i = 0; i < wysokosc; ++i) {
      for (int j = 0; j < szerokosc; ++j) {
        organizmyTab[i][j] = 0;
      }
    }

}

Swiat::~Swiat(){
    //dtor
}

void Swiat::losowanieXY(){
    srand( time( 0 ));
    int tabSize = szerokosc*wysokosc;
    int iloscWylosowanych = (tabSize)/10;
    int tabLosowychXY[tabSize];
    int wylosowaneTab[iloscWylosowanych];
    char zwierzakiDoWylosowania[]="CDGLOTWZ";

    for(int i=0;i<tabSize;i++){
        tabLosowychXY[i]=i;
    }
    for(int i=0;i<iloscWylosowanych;i++){
        int temp = rand()%tabSize-1;
        int temp2 = tabLosowychXY[tabSize-1-i];
        tabLosowychXY[tabSize-1-i] = tabLosowychXY[temp];
        tabLosowychXY[temp] = temp2;
        wylosowaneTab[i]=tabLosowychXY[tabSize-1-i];
        cout<<wylosowaneTab[i]<<endl;

        int losIndex = rand()%8;
        wsadzZwierzakaDoSwiata(wylosowaneTab[i],zwierzakiDoWylosowania[losIndex]);
    }

//rysowanie wylosowanych:
//    for(int i = 0; i < szerokosc; i++){
//        for(int j = 0; j < wysokosc; j++){
//            cout<<tabLosowychXY[i*wysokosc+j]<<" ";
//        }
//        cout<<endl;
//    }
}

int Swiat::getXfromValue(int value)
{
    return value/szerokosc;
}

int Swiat::getYfromValue(int value)
{
    return value%szerokosc;
}

void Swiat::wsadzZwierzakaDoSwiata(int value, char zwierzakAscii)
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
            organizmWsadzany = new Wilk();
            break;
        }
         case 'C':
        {
            organizmWsadzany = new Ciern();
            break;
        }
         case 'D':
        {
            organizmWsadzany = new Dinozaur();
            break;
        }
         case 'G':
        {
            organizmWsadzany = new Guarana();
            break;
        }
         case 'O':
        {
            organizmWsadzany = new Owca();
            break;
        }
         case 'T':
        {
            organizmWsadzany = new Trawa();
            break;
        }
         case 'Z':
        {
            organizmWsadzany = new Zolw();
            break;
        }
        default:
        break;
    }
    int x = getXfromValue(value);
    int y = getYfromValue(value);
    organizmyTab[x][y] = organizmWsadzany;
    organizmWsadzany->przypiszXY(x,y);
}

void Swiat::dodajZwierzakaDoListy(Organizm * wsadzany)
{   Organizm * temp = first;
    while(temp){
        if(wsadzany->getInicjatywa()<temp->getInicjatywa()){
            wsadzany->next = temp->next;
            temp->next = wsadzany;
            break;
        }
        temp = temp->next;
    }
    if (temp == 0)
        temp = wsadzany;
}
//dsdsds
void Swiat::usunZwierzakaZListy()
{

}













void Swiat::rysujSwiat(){

    for(int i=0;i<wysokosc;i++){
        for(int j=0;j<szerokosc;j++){
                //cout<<"i: "<<i<<"  j: "<<j<<endl;
                //cout<<organizmyTab[i][j];
            if(organizmyTab[i][j]==0){
                cout<<"*";
            }else{
                cout<<organizmyTab[i][j]->label;
            }
        }
        cout<<endl;
    }
}

void Swiat::wykonajTure(){

}
