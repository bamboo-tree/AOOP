#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/fusion/include/vector.hpp>
#include <boost/fusion/include/for_each.hpp>

void show(boost::fusion::vector<std::string, float, float, float, float, float, int, std::string> planeta){
    // trochę przerobione, ale dobrze wygląda przy wyśiwetlaniu :D
    std::string tytul[] = {
        "Nazwa:                    ",
        "Średnica:                 ",
        "Masa:                     ",
        "Odległość od Słońca:      ",
        "Czas obiegu wokół Słońca: ",
        "Czas obrotu wokół osi:    ",
        "Liczba księżyców:         ",
        "Rodzaj planety:           "
    };
    int indeks = 0;
    boost::fusion::for_each(planeta, [tytul, &indeks](const auto &wartosc){
        std::cout << tytul[indeks%8] << wartosc << "\n";
        indeks +=1 ;
    });
    std::cout << '\n';
}


int main(){

    // potrzebowałem przerobić deklarację vectora ponieważ było problem z biblioteką
    std::vector<boost::fusion::vector<std::string, float, float, float, float, float, int, std::string>> planety = { 
    boost::fusion::vector<std::string, float, float, float, float, float, int, std::string>(
        "Merkury", 0.3825, 0.552, 0.3871, 0.2408, 58.64306, 0, "skalista"),
    boost::fusion::vector<std::string, float, float, float, float, float, int, std::string>(
        "Wenus", 0.9489, 0.8149, 0.7233, 0.6152, 243.01875, 0, "skalista"),
    boost::fusion::vector<std::string, float, float, float, float, float, int, std::string>(
        "Ziemia", 1.0, 1.0, 1.0, 1.0, 0.99727, 1, "skalista"),
    boost::fusion::vector<std::string, float, float, float, float, float, int, std::string>(
        "Mars", 0.5335, 0.1074, 1.5237, 1.8808, 1.02596, 2, "skalista"),
    boost::fusion::vector<std::string, float, float, float, float, float, int, std::string>(
        "Jowisz", 11.2092, 317.8, 5.2034, 11.8637, 0.41354, 79, "gazowa"),
    boost::fusion::vector<std::string, float, float, float, float, float, int, std::string>(
        "Saturn", 9.494, 95.1620, 9.5371, 29.4484, 0.44400, 82, "gazowa"),
    boost::fusion::vector<std::string, float, float, float, float, float, int, std::string>(
        "Uran", 4.0074, 14.5360, 19.1913, 84.0711, 0.71833, 27, "gazowo-lodowa"),
    boost::fusion::vector<std::string, float, float, float, float, float, int, std::string>(
        "Neptun", 3.8827, 17.1470, 30.0690, 164.8799, 0.67125, 14, "gazowo-lodowa")
    };

    for(auto p : planety){
        show(p);
    }



    return 0;
}