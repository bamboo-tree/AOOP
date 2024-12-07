#include <iostream>
#include "Bazowa.h"

#ifndef POCHODNA_H
#define POCHODNA_H
#pragma ONCE

class Pochodna : public Bazowa{
    public:
        Pochodna(int _liczba) : Bazowa(_liczba * 100){}
        void print(){
            std::cout << "Liczba pochodna " << liczba << '\n';
        }
        void show(){
            std::cout << "Liczba pochodna virtual " << liczba << '\n';
        }
};
#endif // POCHODNA_H