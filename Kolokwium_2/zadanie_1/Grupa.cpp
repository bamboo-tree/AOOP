#include "Grupa.h"

/*
    Pusty konstruktor
*/
Grupa::Grupa(){}

/*
    Metoda wyszukuje i wyświetla informacje o studencie na podstwie indeksu
*/
void Grupa::szukaj_po_indeksie(int indeks){
    auto it = studenci.find(indeks);
    if(it != studenci.end()){
        /*
            jeśli indeks nie jest unikatowy

        for(auto it = studenci.begin(); it != studenci.end(); it++){
            if(it->first == indeks){
                std::cout << it->first << " : " << it->second.first << " " << it->second.second << '\n';
            }
        }
        */
        std::cout << it->first << " : " << it->second.first << " " << it->second.second << '\n';
    }
    else{
        std::cout << "Nie znaleziono\n";
    }
}

/*
    Metoda wyszukuje i wyświetla informacje o studentach z podanym nazwiskiem
*/

void Grupa::szukaj_po_nazwisku(std::string nazwisko){
    bool czy_znaleziono = false;
    std::cout << "Studenci z nazwiskiem : " << nazwisko << '\n';
    for(auto it = studenci.begin(); it != studenci.end(); it++){
        if(it->second.second == nazwisko){
            std::cout << it->first << " : " << it->second.first << " " << it->second.second << '\n';
            czy_znaleziono = true;
        }
    }
    if(!czy_znaleziono){
        std::cout << "Nie znaleziono\n";
    }
}