#ifndef ROSLINA_H
#define ROSLINA_H
#include "Organizm.h"

class Roslina:public Organizm
{
    public:
        Roslina();
        virtual ~Roslina();
        OrganizmMark ='R';
    protected:
        int inicjatywa = 0;
        void akcja();
        void kolizja();

    private:
};

#endif // ROSLINA_H
