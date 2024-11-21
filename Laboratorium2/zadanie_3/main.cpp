#include <iostream>

#include "MeanBufor.h"
#include "MaxBufor.h"

int main(){

    MeanBufor mean_bufor = MeanBufor();
    mean_bufor.add(1);
    mean_bufor.add(2);
    mean_bufor.add(3);
    mean_bufor.add(4);
    mean_bufor.add(5);
    mean_bufor.add(6);
    mean_bufor.add(7);
    mean_bufor.show();
    std::cout << "calculate - " << mean_bufor.calculate() << "\n";
    

    MaxBufor max_bufor = MaxBufor(6);
    max_bufor.add(1);
    max_bufor.add(2);
    max_bufor.add(3);
    max_bufor.add(4);
    max_bufor.add(5);
    max_bufor.add(6);
    max_bufor.show();
    std::cout << "calculate - " << max_bufor.calculate() << "\n";





    return 0;
}
