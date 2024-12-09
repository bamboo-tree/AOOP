#include "Bazowa.h"

Bazowa::Bazowa(int _liczba){
    liczba = _liczba;
}

void Bazowa::print(){
    std::cout << "liczba bazowa : " << liczba << '\n';
}
void Bazowa::show(){
    std::cout << "liczba bazowa virtual : " << liczba << '\n';
}