#include "Swiat.h"
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <iostream>
#include <windows.h>
#include "Lew.h"
#include "Wilk.h"
#include "Ciern.h"
#include "Dinozaur.h"
#include "Guarana.h"
#include "Owca.h"
#include "Trawa.h"
#include "Zolw.h"
#include "Queue.h"

using namespace std;

Swiat::Swiat(int szer , int wys){
    wysokosc = wys;
    szerokosc = szer;
    first = 0;
    kolejka = Queue();

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
}

int Swiat::getXfromValue(int value)
{
    return value/szerokosc;
}

int Swiat::getYfromValue(int value)
{
    return value%szerokosc;
}

int Swiat::getSzeroskosc()
{
    return szerokosc;
}

int Swiat::getWysokosc()
{
    return wysokosc;
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

    kolejka.addNode(organizmWsadzany);
    int x = getXfromValue(value);
    int y = getYfromValue(value);
    organizmyTab[y][x] = organizmWsadzany;
    organizmWsadzany->przypiszXY(x,y);
}

void Swiat::usunZwierzaka(int x, int y){
    kolejka.deleteNode(organizmyTab[y][x]);
    organizmyTab[y][x]=0;
}

void Swiat::rysujSwiat(){

    for(int i=0;i<wysokosc;i++){
        for(int j=0;j<szerokosc;j++){
            if(organizmyTab[i][j]==0){
                cout<<"*";
            }else{
                cout<<organizmyTab[i][j]->getLabel();
            }
        }
        cout<<endl;
    }
}

void Swiat::poruszenie(char kierunek, int x, int y)
{
    Organizm * aktualny = organizmyTab[y][x];
    int newX = x;
    int newY = y;
    //char kierunek = aktualny->akcja();

    switch(kierunek){
        case 'G':{
            newY--;
            break;
        }
        case 'D':{
            newY++;
            break;
        }
        case 'P':{
            newX++;
            break;
        }
        case 'L':{
            newX--;
            break;
        }
        default: {}
    }
    if(newX<szerokosc && newY<wysokosc && newX>=0 && newY>=0){
        organizmyTab[newY][newX] = organizmyTab[y][x];
        organizmyTab[newY][newX]->przypiszXY(newX, newY);
        organizmyTab[y][x]=0;

//        aktualny = organizmyTab[aktualny->getY()][aktualny->getX()];   //jakby cos sie zjebalo to zamienic mniejscami
//        organizmyTab[x][y] = 0;
    }
}


int Swiat::wylosujPoleDoOkola(int x, int y){
    wylosujPole(x,y,false);
}

int Swiat::wylosujWolnePole(int x, int y){
    wylosujPole(x,y,true);
}

int Swiat::wylosujPole(int x, int y, bool mustBeFree){
    srand( time( 0 ));
    int TempX[4];
    int TempY[4];

    int kierunkiX[4]={x,x+1,x,x-1};
    int kierunkiY[4]={y-1,y,y+1,y};

    for(int i=0; i<4; i++){
        bool isInWorld = kierunkiX[i]<szerokosc && kierunkiY[i]<wysokosc && kierunkiX[i]>=0 && kierunkiY[i]>=0;
        bool isEmpty = isInWorld ? !mustBeFree||organizmyTab[kierunkiY[i]][kierunkiX[i]]==0 : false;
        if(isInWorld && isEmpty){
            TempX[i] = kierunkiX[i];
            TempY[i] = kierunkiY[i];
        }else{
            TempX[i] = -1;
            TempY[i] = -1;
        }
    }
    int r=rand()% 4;
    int value=TempX[r];

    if(TempX[0]==-1 && TempX[1]==-1 && TempX[2]==-1 && TempX[3]==-1){
        return -1;
    }

    while(value == -1){
        r = rand()% 4;
        value = TempX[r];
    }

    //cout<<"wynik: "<<TempX[r]*szerokosc+TempY[r]<<endl;
    return TempX[r]*szerokosc+TempY[r];

}

char Swiat::coToZaKierunek(int x, int y, int newx, int newy){
    //1-w lewo, 2-w dol, 3-w prawo, 4-w gora
    int kierunkiX[4]={x,x+1,x,x-1};
    int kierunkiY[4]={y-1,y,y+1,y};
    int index;
    for(int i=0; i<=3; i++){
        if(newx==kierunkiX[i]&&newy==kierunkiY[i]){
            index = i;
            break;
        }
    }
    if(index==0){
        return 'G';
    }
    if(index==1){
        return 'P';
    }
    if(index==2){
        return 'D';
    }
    if(index==3){
        return 'L';
    }
}

void Swiat::tura(Organizm * aktualny){
    if (aktualny->getActive()==0){
        return;
    }
    rysujSwiat();
    kolejka.wypisz();
    Sleep(500);

    int aktX = aktualny->getX();
    int aktY = aktualny->getY();
    int value = wylosujPoleDoOkola(aktX,aktY);

    int napotkanyX = getXfromValue(value);
    int napotkanyY = getYfromValue(value);
    Organizm * napotkany = organizmyTab[napotkanyY][napotkanyX];

    cout<<"Aktualny: "<<aktualny->getLabel()<<", ("<<aktX<<";"<<aktY<<")"<<endl;
    cout<<"wylosowane pole: "<<value<<endl;

    //roslina
    if(aktualny->akcja(napotkany)==1){
        cout<<"//roslina"<<endl;
        int value2 = wylosujWolnePole(aktX,aktY);
        if (value2 == -1){
            return;
        }
        napotkanyX = getXfromValue(value2);
        napotkanyY = getYfromValue(value2);
        wsadzZwierzakaDoSwiata(value2, aktualny->getLabel());
    }
    //poruszanie
    if(aktualny->getOrganizmMark()=='Z'&&aktualny->akcja(napotkany)==2){
            cout<<"* kierunek: "<<coToZaKierunek(aktX,aktY,napotkanyX,napotkanyY)<<endl;
            cout<<"napotX:"<<napotkanyX<<" napotY:"<<napotkanyY<<endl;
            poruszenie(coToZaKierunek(aktX,aktY,napotkanyX,napotkanyY),aktX,aktY);
    }
    //rozmnazanie
    if(aktualny->akcja(napotkany)==3){
        cout<<"//rozmnazanie"<<endl;
        int value2 = wylosujWolnePole(aktX,aktY);
        if (value2 = -1)
            return;
        cout<<"wylosowane wolne pole:"<<value2<<"\n";
        napotkanyX = getXfromValue(value2);
        napotkanyY = getYfromValue(value2);
        wsadzZwierzakaDoSwiata(value2, aktualny->getLabel());
    }
    //kolizja
    if(aktualny->akcja(napotkany)==4){
            if(napotkany->kolizja(aktualny)==2){
                cout<<"** kierunek: "<<coToZaKierunek(aktX,aktY,napotkanyX,napotkanyY)<<endl;
                cout<<"//aktualny przegrywa! =NULL"<<endl;
                //organizmyTab[aktY][aktX]=0;
                usunZwierzaka(aktY, aktX);
            }
            if(napotkany->kolizja(aktualny)==1){
                cout<<"*** kierunek: "<<coToZaKierunek(aktX,aktY,napotkanyX,napotkanyY)<<endl;
                cout<<"//aktualny wygrywa! napotkany zjedzony =NULL"<<endl;

                //organizmyTab[napotkanyY][napotkanyX]=0;
                cout<<"napotX:"<<napotkanyX<<" napotY:"<<napotkanyY<<endl;

                usunZwierzaka(napotkanyX, napotkanyY);
                poruszenie(coToZaKierunek(aktX,aktY,napotkanyX,napotkanyY),aktX,aktY);
            }
    }
}


void Swiat::runda(){
    while(kolejka.aktualny){
        tura(kolejka.aktualny);
        kolejka.aktualny->activate();
        kolejka.next();
        //if(kolejka.aktualny!=0)
          //  cout<<"next: "<<kolejka.aktualny->getLabel()<<endl;
        //rysujSwiat();

        //kolejka.wypisz();
    }
    kolejka.reset();
    Sleep(1000);
}
