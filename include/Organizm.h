#ifndef ORGANIZM_H
#define ORGANIZM_H
//#include "Swiat.h"

/**
 * base classs
 */
class Organizm
{
    public:
<<<<<<< HEAD
        Organizm();
=======
        virtual Organizm();
>>>>>>> 9966f5c477477ece0250437016cb2030f473aaa4
        Organizm * next = 0;
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
