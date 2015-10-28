#ifndef SWIAT_H
#define SWIAT_H
#include "Organizm.h"

class Swiat
{
    public:
        Swiat();
        virtual ~Swiat();
    protected:
        Organizm organizmyTab[];
    private:
        void rysujSwiat();
        void wykonajTure();
};

#endif // SWIAT_H
