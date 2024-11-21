#include <iostream>

#include "Bufor.h"

#ifndef MAX_BUFOR_H
#define MAX_BUFOR_X
#pragma ONCE

class MaxBufor : public Bufor{
    public:
        MaxBufor();
        MaxBufor(int _size);

        virtual double calculate() override;
};
#endif // MAX_BUFOR_H