#include <iostream>
#include "Bazowa.h"


#ifndef POCHODNA_H
#define POCHODNA_H
#pragma ONCE


class Pochodna : public Bazowa{
    protected:
        int liczba;
    public:
        Pochodna(int _liczba);
        void print();
        virtual void show() override;
};
#endif // POCHODNA_H