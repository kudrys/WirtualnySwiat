#ifndef SWIAT_H
#define SWIAT_H
#include "Organizm.h"

class Swiat
{
    public:
        Swiat(int,int);
        virtual ~Swiat();
        void losowanieXY();
        int getXfromValue(int);
        int getYfromValue(int);
        Organizm * first;
        void rysujSwiat();
        void wykonajTure();
        void wsadzZwierzakaDoSwiata(int, char);
        void dodajZwierzakaDoListy(Organizm*);
        void usunZwierzakaZListy();
        void poruszenie(char,int,int);
    protected:
        int wysokosc;   //y
        int szerokosc;  //x
        Organizm *** organizmyTab;  //wskaznik na wskaznik (tablica tablic)
    private:


};

#endif // SWIAT_H
