#include <iostream>
#include "Swiat.h"
using namespace std;

int main(){
    cout<<"RYSZARD KUDUK 143271\n";
    Swiat nowy(15,17);
    nowy.losowanieXY();
    cout<<"\n";

    //nowy.wsadzZwierzakaDoSwiata(12,'W');
    //nowy.wsadzZwierzakaDoSwiata(14,'L');
    nowy.rysujSwiat();
}
