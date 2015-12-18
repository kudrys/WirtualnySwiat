#ifndef ROSLINA_H
#define ROSLINA_H
#include "Organizm.h"

class Roslina:public Organizm
{
    public:
        Roslina();
        virtual ~Roslina();
    protected:
        int inicjatywa = 0;

    private:
};

#endif // ROSLINA_H
