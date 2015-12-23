#include <iostream>
#include "Swiat.h"
#include <windows.h>
using namespace std;
//0 - *****
//1 - WLTZ*
//2 - *LC**
//3 - *****
//4 - *****
//5 - *****
//6 - *****
//7 - *****
int main(){
    cout<<"RYSZARD KUDUK 143271\n";
    Swiat nowy(5,5);
    //nowy.losowanieXY();
    nowy.wsadzZwierzakaDoSwiata(1,'W');
    nowy.kolejka.wypisz();
    nowy.wsadzZwierzakaDoSwiata(6,'L');
    nowy.wsadzZwierzakaDoSwiata(11,'T');
    nowy.wsadzZwierzakaDoSwiata(16,'Z');
    nowy.wsadzZwierzakaDoSwiata(7,'L');
    nowy.wsadzZwierzakaDoSwiata(12,'C');

    nowy.rysujSwiat();
    cout<<endl;
    nowy.tura(nowy.organizmyTab[2][1]);   //do organizmyTab trzeba podawac odwrotnie X i Y, chuj wie czemu
    cout<<endl<<"----WYNIK---"<<endl;
    nowy.rysujSwiat();
    nowy.kolejka.wypisz();
    for(int i=0;i<10;i++){
        nowy.runda();cout << "---------------\n\n";
        nowy.kolejka.wypisz();
        nowy.rysujSwiat();
    }
}

// Rozmnazanie sie roslin, zatrzymuje sie gdy roslina nie ma gdzie sie rozsiewac.
// Czasami pada przy rozmnarzaniu zwierzat, ale nie zawsze

