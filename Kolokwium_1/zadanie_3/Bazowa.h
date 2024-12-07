#include <iostream>

#ifndef BAZOWA_H
#define BAZOWA_H
#pragma ONCE

class Bazowa{ 
    public:
        int liczba;
        Bazowa(int _liczba){
            liczba = _liczba;
        }
        void print(){
            std::cout << "Liczba bazowa " << liczba << '\n';
        }
        virtual void show(){
            std::cout << "Liczba bazowa virtual " << liczba << '\n';
        }
};
#endif // BAZOWA_H