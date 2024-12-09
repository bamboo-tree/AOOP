#include "GrupaDziekanska.h"

/*
    Pusty konstruktor
*/
GrupaDziekanska::GrupaDziekanska(){}

/*
    Metoda wyswietla po kolei klucz i wartosc z mapy 'grupa'
*/
void GrupaDziekanska::show(){
    std::cout << "Zebrane dane o studentach\n";
    for(auto it = grupa.begin(); it != grupa.end(); it++){
        std::cout << "e-mail: " << it->first << ",\tindeks: " << it->second << '\n';
    }
}

/*
    Metoda znajduje element, którego klucz zgadza się z podanym argumentem
*/
void GrupaDziekanska::find_klucz(std::string email){
    auto it = grupa.find(email);
    if(it != grupa.end()){
        std::cout << "Znaleziono student z adresem e-mail " << email << " --> indeks " << it->second << '\n';
    }
    else{
        std::cout << "Nie znaleziono studenta z adresem e-mail " << email << '\n';
    }
}

/*
    Metoda dla zadanej wartosci wyswietla wszystkie pola w mapie, ktore zawieraja ta sama wartość.
*/
void GrupaDziekanska::szukaj_wartosc(std::string indeks){
    std::cout << "Informacje na temat indeksu " << indeks << '\n';
    for(auto it = grupa.begin(); it != grupa.end(); it++){
        if(it->second == indeks){  
            std::cout << "e-mail: " << it->first << ",\tindeks: " << it->second << '\n';
            break; // jesli byłoby kilka takich samych wartosci mozna usunac break i przeleci przez caly zbior
        }
    }
}