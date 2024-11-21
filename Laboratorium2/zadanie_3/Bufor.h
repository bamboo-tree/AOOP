#include <iostream>

#ifndef BUFOR_H
#define BUFOR_H
#pragma ONCE

class Bufor{
    private:
        int* array;
        int size;
        int first_free_index;
    
    public:
        Bufor();
        Bufor(int _size);
        virtual ~Bufor();

        virtual void add(int value);
        virtual double calculate() = 0;

        int get_index();
        int get_size();
        int get_tab(int index);
        void show();



};
#endif // BUFOR_H