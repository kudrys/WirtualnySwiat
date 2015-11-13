#ifndef TRAWA_H
#define TRAWA_H
#include "Roslina.h"

class Trawa:public Roslina
{
    public:
        Trawa();
        virtual ~Trawa();
    protected:

    private:
        void akcja();
        void kolizja();
};

#endif // TRAWA_H
