#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <vector>

#ifndef GRUPADZIEKANSKA_H
#define GRUPADZIEKANSKA_H
#pragma ONCE

class GrupaDziekanska{
    public:
        GrupaDziekanska();
        std::unordered_map<std::string, std::string> grupa;
        void show();
        void find_klucz(std::string email);
        void szukaj_wartosc(std::string indeks);
};
#endif // GRUPADZIEKANSKA_H