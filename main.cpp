#include <iostream>
#include "Swiat.h"
using namespace std;

int main(){
    cout<<"RYSZARD KUDUK 143271\n";
    Swiat nowy(5,17);
    nowy.losowanieXY();
    cout<<"\n";

    //nowy.wsadzZwierzakaDoSwiata(12,'W');
    //nowy.wsadzZwierzakaDoSwiata(14,'L');
    nowy.rysujSwiat();
    cout<<endl;
    nowy.wsadzZwierzakaDoSwiata(7,'L');
    nowy.wsadzZwierzakaDoSwiata(0,'L');
    nowy.rysujSwiat();
    cout<<endl;
    nowy.poruszenie('D',0,0);
    cout<<endl;
    nowy.rysujSwiat();
//    nowy.poruszenie('G',3,14);
//    nowy.rysujSwiat();
//    nowy.poruszenie('G',3,14);
//    nowy.rysujSwiat();
}
