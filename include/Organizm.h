#ifndef ORGANIZM_H
#define ORGANIZM_H


class Organizm
{
    public:
        Organizm(int,int);
        virtual ~Organizm();
    protected:
    private:
        int x;
        int y;
        int sila;
        int inicjatywa;
        void akcja();
        void kolizja();
        void rysowanieOrganizmu();
};

#endif // ORGANIZM_H
