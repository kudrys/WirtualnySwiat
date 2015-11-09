#ifndef OWCA_H
#define OWCA_H
#include "Zwierze.h"

class Owca:public Zwierze
{
    public:
        Owca();
        virtual ~Owca();
    protected:
        int sila = 4;
        int inicjatywa = 4;
        char label = 'O';
    private:
        void akcja();
        void rozmnazanie();
};

#endif // OWCA_H
