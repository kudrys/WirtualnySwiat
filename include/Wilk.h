#ifndef WILK_H
#define WILK_H
#include "Zwierze.h"

class Wilk:public Zwierze
{
    public:
        Wilk();
        virtual ~Wilk();
    protected:

    private:
        void akcja();
        void rozmnazanie();
        void kolizja();
};

#endif // WILK_H
