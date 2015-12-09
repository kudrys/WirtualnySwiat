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
        bool atak(Organizm);
        void rozmnazanie();
        void akcja();
        bool kolizja();
};

#endif // LEW_H
