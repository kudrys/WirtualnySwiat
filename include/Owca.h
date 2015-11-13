#ifndef OWCA_H
#define OWCA_H
#include "Zwierze.h"

class Owca:public Zwierze
{
    public:
        Owca();
        virtual ~Owca();
    protected:
        int sila;
        int inicjatywa;
        char label;
    private:
        void akcja();
        void rozmnazanie();
        void kolizja();
};

#endif // OWCA_H
