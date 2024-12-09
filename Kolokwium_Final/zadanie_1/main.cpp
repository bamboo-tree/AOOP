#include <iostream>

#include "Bazowa.h"
#include "Pochodna.h"


int main(){

    Bazowa b = Bazowa(12);
    Pochodna p = Pochodna(10);

    b.print();
    b.show();

    p.print();
    p.show();

    return 0;
}