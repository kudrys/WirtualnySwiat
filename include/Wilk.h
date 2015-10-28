#ifndef WILK_H
#define WILK_H
#include "Zwierze.h"


class Wilk
{
    public:
        Wilk();
        virtual ~Wilk();
    protected:
        int sila = 9;
        int inicjatywa = 5;
        char label = 'W';
    private:
        void akcja();
        void rozmnazanie();
};

#endif // WILK_H
