#ifndef ZOLW_H
#define ZOLW_H
#include "Zwierze.h"


class Zolw:public Zwierze
{
    public:
        Zolw();
        virtual ~Zolw();
    protected:

    private:
        void akcja();
        void rozmnazanie();
        void kolizja();
};

#endif // ZOLW_H
