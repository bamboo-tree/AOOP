#include "Pochodna.h"

Pochodna::Pochodna(int _liczba) : Bazowa(_liczba*100){};
void Pochodna::print(){
    std::cout << "liczba pochodna : " << liczba << '\n';
}
void Pochodna::show(){
    std::cout << "liczba pochodna virtual : " << liczba << '\n'; 
}