#ifndef LEW_H
#define LEW_H
#include "Zwierze.h"

class Lew: public Zwierze
{
    public:
        Lew();
        virtual ~Lew();
    protected:

    private:
        void akcja();
        void rozmnazanie();
        void kolizja();
};

#endif // LEW_H
