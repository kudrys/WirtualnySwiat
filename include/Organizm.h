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
        void kolizja();
        void rozmnazanie();
    protected:
        char label;
        char OrganizmMark;
        int x;
        int y;
        int sila;
        int inicjatywa;

//Swiat *swiat;

        void rysowanie();
    private:


};

#endif // ORGANIZM_H
