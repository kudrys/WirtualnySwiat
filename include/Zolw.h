#ifndef ZOLW_H
#define ZOLW_H
#include "Zwierze.h"


class Zolw:public Zwierze
{
    public:
        Zolw();
        virtual ~Zolw();
    protected:
        int sila = 2;
        int inicjatywa = 1;
        char label = 'Z';
    private:
        void akcja();
        void rozmnazanie();
        void kolizja();
};

#endif // ZOLW_H
