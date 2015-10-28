#ifndef ROSLINA_H
#define ROSLINA_H
#include "Roslina.h"

class Roslina
{
    public:
        Roslina();
        virtual ~Roslina();
    protected:
        int inicjatywa = 0;
        void akcja();
        void kolizja();

    private:
};

#endif // ROSLINA_H
