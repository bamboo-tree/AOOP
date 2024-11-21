#include "Bufor.h"

Bufor::Bufor(){
    size = 10;
    array = new int[size];
    first_free_index = 0;
}

Bufor::Bufor(int _size){
    size = _size;
    array = new int[size];
    first_free_index = 0;
}

Bufor::~Bufor(){}

void Bufor::add(int value){
    array[first_free_index] = value;
    first_free_index = std::min(first_free_index+1, size);
}

int Bufor::get_index(){
    return first_free_index;
}

int Bufor::get_size(){
    return size;
}

int Bufor::get_tab(int index){
    return array[index];
}

void Bufor::show(){
    std::cout << "Tablica\n";
    for(int i = 0; i < size; i++){
        if(i < first_free_index)
            std::cout << array[i] << " ";
        else
            std::cout << "? ";
    }
    std::cout << "\n";
}
