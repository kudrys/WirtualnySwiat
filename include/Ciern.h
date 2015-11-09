#ifndef CIERN_H
#define CIERN_H
#include "Roslina.h"

class Ciern:public Roslina
{
    public:
        Ciern();
        virtual ~Ciern();
    protected:
        char label = 'C';
        int sila = 2;
    private:
};

#endif // CIERN_H
