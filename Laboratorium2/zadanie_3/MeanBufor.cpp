#include "MeanBufor.h"

MeanBufor::MeanBufor() : Bufor(){}

MeanBufor::MeanBufor(int _size) : Bufor(_size){}

double MeanBufor::calculate(){
    double value = 0;
    for(int i = 0; i < get_index(); i++){
        value += get_tab(i);
    }
    return value / get_size();
}