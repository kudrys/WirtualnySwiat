#ifndef TRAWA_H
#define TRAWA_H
#include "Roslina.h"

class Trawa:public Roslina
{
    public:
        Trawa();
        virtual ~Trawa();
    protected:
        char label = 'T';
        int sila = 0;
    private:
        void akcja();
        void kolizja();
};

#endif // TRAWA_H
