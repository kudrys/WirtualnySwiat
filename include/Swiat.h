#ifndef SWIAT_H
#define SWIAT_H
#include "Organizm.h"

class Swiat
{
    public:
        Swiat(int,int);
        virtual ~Swiat();
        void losowanieXY();
    protected:
        int wysokosc;   //y
        int szerokosc;  //x
        Organizm *** organizmyTab;  //wskaznik na wskaznik (tablica tablic)

    private:
        void rysujSwiat();
        void wykonajTure();

};

#endif // SWIAT_H
