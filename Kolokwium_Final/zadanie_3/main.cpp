#include <iostream>
#include "GrupaDziekanska.h"

int main(){

    GrupaDziekanska test = GrupaDziekanska();

    test.grupa.insert({"anna.nowak@gmail.com", "1100"});
    test.grupa.insert({"s54321@pollub.edu.pl", "1101"});
    test.grupa.insert({"s55555@pollub.edu.pl", "1102"});
    test.grupa.insert({"jan.kowalski@gmail.com", "1010"});

    // zadanie A
    test.show();
    // zadanie B
    test.find_klucz("jan.kowalski@gmail.com");
    // zadanie C
    test.szukaj_wartosc("1100");

    return 0;
}