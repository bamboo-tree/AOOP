#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>


#ifndef GRUPA_H
#define GRUPA_H

class Grupa{
    public:
        Grupa();
        std::unordered_map<int, std::pair<std::string, std::string>> studenci;
        void szukaj_po_indeksie(int indeks);
        void szukaj_po_nazwisku(std::string nazwisko);
};
#endif // GRUPA_H