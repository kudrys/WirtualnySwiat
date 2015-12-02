#ifndef ORGANIZM_H
#define ORGANIZM_H
//#include "Swiat.h"

/**
 * base classs
 */
class Organizm
{
    public:
        virtual ~Organizm();
        int getInicjatywa();
        Organizm * next = 0;
        char label;
        void przypiszXY(int, int);
        int getX();
        int getY();
    protected:
        int x;
        int y;
        int sila;
        int inicjatywa;

//Swiat *swiat;
        void akcja();
        void kolizja();
        void rysowanie();
    private:


};

#endif // ORGANIZM_H
