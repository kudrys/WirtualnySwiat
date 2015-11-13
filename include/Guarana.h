#ifndef GUARANA_H
#define GUARANA_H
#include "Roslina.h"

class Guarana:public Roslina
{
    public:
        Guarana();
        virtual ~Guarana();
    protected:
        char label;
        int sila;
    private:
        void akcja();
        void kolizja();
};

#endif // GUARANA_H
