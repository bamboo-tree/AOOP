#include "MaxBufor.h"

MaxBufor::MaxBufor() : Bufor(){}

MaxBufor::MaxBufor(int _size) : Bufor(_size){}

double MaxBufor::calculate(){
    int max = 0;
    for(int i = 0; i < get_index(); i++){
        max = std::max(max, get_tab(i));
    }
    return double(max);
}