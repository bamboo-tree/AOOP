#include <iostream>


#ifndef BAZOWA_H
#define BAZOWA_H
#pragma ONCE

class Bazowa{
    protected:
        int liczba;
    public:
        Bazowa(int _liczba);
        void print();
        virtual void show();
};
#endif // BAZOWA_H