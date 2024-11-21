#include <iostream>

#include "Bufor.h"

#ifndef MEAN_BUFOR_H
#define MEAN_BUFOR_H
#pragma ONCE

class MeanBufor : public Bufor{
    public:
        MeanBufor();
        MeanBufor(int _size);

        virtual double calculate() override;
};
#endif // MEAN_BUFOR_H