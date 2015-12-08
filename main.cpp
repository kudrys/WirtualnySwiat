#include <iostream>
#include "Swiat.h"
using namespace std;

int main(){
    cout<<"RYSZARD KUDUK 143271\n";
    Swiat nowy(5,8);
    nowy.wsadzZwierzakaDoSwiata(1,'W');
    nowy.wsadzZwierzakaDoSwiata(6,'L');
    nowy.wsadzZwierzakaDoSwiata(11,'T');
    nowy.wsadzZwierzakaDoSwiata(16,'Z');
    nowy.wsadzZwierzakaDoSwiata(7,'L');
    nowy.wsadzZwierzakaDoSwiata(12,'C');
    cout<<"tylko puste: "<<nowy.wylosujWolnePole(1,2)<<endl;
    cout<<"byle jakie: "<<nowy.wylosujPoleDoOkola(1,2)<<endl;
    nowy.rysujSwiat();


}
