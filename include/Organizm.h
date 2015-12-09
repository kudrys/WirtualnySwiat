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

        void przypiszXY(int, int);
        int getX();
        int getY();
        char getOrganizmMark();
        char getLabel();
        void akcja();
        int kolizja(Organizm *);
        int whoDied(Organizm *);
        void rozmnazanie();
        int sila;
    protected:
        char label;
        char OrganizmMark;
        int x;
        int y;
        int inicjatywa;

//Swiat *swiat;

        void rysowanie();
    private:


};

#endif // ORGANIZM_H
