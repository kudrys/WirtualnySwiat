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
