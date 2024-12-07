#include <iostream>
#include "Bazowa.h"
#include "Pochodna.h"


int main(){

    Bazowa b = Bazowa(1);
    Pochodna p = Pochodna(5);
    
    b.print();
    b.show();

    p.print();
    p.show();


    return 0;
}