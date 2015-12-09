#ifndef ZWIERZE_H
#define ZWIERZE_H
#include "Organizm.h"

class Zwierze:public Organizm
{
    public:
        Zwierze();
        virtual ~Zwierze();
        int atak(Organizm *);
    protected:
        int sila;
        int inicjatywa;
    private:
        void akcja();
        void rozmnazanie();
};

#endif // ZWIERZE_H
