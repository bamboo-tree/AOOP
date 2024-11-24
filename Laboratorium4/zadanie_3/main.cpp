#include <iostream>

#include "Citizen.h"
#include "City.h"



template <typename T>
void show_vector(std::vecotr<T> my_vector){
    for(auto it = my_vector.begin(); it != my_vector.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
};


int main(){

    Citizen citizen_1 = Citizen("Adam", "Kowalski", 32, 'M', "12-345");
    citizen_1.show();


    City city_1 = City("Chrzaszczyszeboszyce");
    city_1.add_citizen(Citizen("Jan", "Kowalski", 21, 'M', "00-111"));
    city_1.add_citizen(Citizen("Jan", "Nowak", 17, 'M', "00-111")); // usuniety
    city_1.add_citizen(Citizen("Piotr", "Zyla", 13, 'M', "00-555"));
    city_1.add_citizen(Citizen("Ola", "Kot", 25, 'F', "11-222"));
    city_1.add_citizen(Citizen("Ala", "Iwan", 31, 'F', "11-222"));
    city_1.add_citizen(citizen_1);

    city_1.show_city();
    city_1.delete_citizen("Kowalski", 21);
    std::cout << "dorosli - " << city_1.count_adults() << "\n";
    std::cout << "kobiety - " << city_1.count_women() << "\n";
    std::cout << "mieszkancy - " << city_1.count_citizens() << "\n";
    city_1.show_citizens(); 


    city_1.postal_codes();   




    return 0;
}

