#ifndef SWIAT_H
#define SWIAT_H
#include "Organizm.h"

class Swiat
{
    public:
        Swiat();
        virtual ~Swiat();
        void losowanieXY();
    protected:
        Organizm organizmyTab[20][20];

    private:
        void rysujSwiat();
        void wykonajTure();

};

#endif // SWIAT_H
