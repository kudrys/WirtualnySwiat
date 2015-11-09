#ifndef LEW_H
#define LEW_H
#include "Zwierze.h"

class Lew: public Zwierze
{
    public:
        Lew();
        virtual ~Lew();
    protected:
     int sila = 11;
        int inicjatywa = 7;
        char label = 'L';
    private:
        void akcja();
        void rozmnazanie();
        void kolizja();
};

#endif // LEW_H
