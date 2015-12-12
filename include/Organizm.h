#ifndef ORGANIZM_H
#define ORGANIZM_H
//#include "Swiat.h"

/**
 * base classs
 */
class Organizm
{
    public:
        Organizm();
<<<<<<< HEAD
        Organizm * next = 0;
=======
        virtual ~Organizm();
        Organizm * next;
>>>>>>> 8bcdc596a6988eceef46ce9b0d4aa45b18468bc1
        void przypiszXY(int, int);
        //getters
        int getX();
        int getY();
        int getSila();
        int getInicjatywa();
        int getSzansa();
        char getOrganizmMark();
        char getLabel();
        //methods
        int akcja(Organizm *);
        int kolizja(Organizm *);
        int whoDied(Organizm *);
        void rozmnazanie();
        void increaseSila(int);
        bool szansaNaSukces();
    protected:
        char label;
        char OrganizmMark;
        int x;
        int y;
        int sila;
        int inicjatywa;
        int szansa;
    private:


};

#endif // ORGANIZM_H
