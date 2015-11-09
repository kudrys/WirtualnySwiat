#ifndef GUARANA_H
#define GUARANA_H
#include "Roslina.h"

class Guarana:public Roslina
{
    public:
        Guarana();
        virtual ~Guarana();
    protected:
        char label = 'G';
        int sila = 0;
    private:
};

#endif // GUARANA_H
