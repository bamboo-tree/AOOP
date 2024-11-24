#include "City.h"


bool is_woman(Citizen citizen){
    return citizen.get_sex() == 'F';
}

// --------------------------------------------------------------------

City::City(std::string _city_name){
    city_name = _city_name;
}

void City::add_citizen(Citizen new_citizen){
    citizens.push_back(new_citizen);
}


// so fucking overkill, but it looks cool...
void City::delete_citizen(std::string _surname, int _age){

    auto it = std::find_if(citizens.begin(), citizens.end(), [&_surname, &_age](Citizen& citizen){
        return citizen.get_surname() == _surname && citizen.get_age() == _age;
    });

    if(it != citizens.end()){
        std::cout << "usunieto mieszkanca\n";
        citizens.erase(it);
    }
    else{
        std::cout << "uzytkownik nie istnieje\n";
    }
}

void City::show_citizens(){
    auto it = citizens.begin();
    std::cout << "lista mieszkancow\n";
    for(it; it != citizens.end(); it++){
        it->show();
    }
}

void City::show_city(){
    std::cout << city_name << "\n";
}

int City::count_women(){
    return std::count_if(citizens.begin(), citizens.end(), is_woman);
}

int City::count_citizens(){
    return citizens.size();
}

// mhmmmmmm lambda again
int City::count_adults(){
    return std::count_if(citizens.begin(), citizens.end(), [](Citizen citizen){
        return citizen.get_age() >= 18;
    });
}

void City::postal_codes(){
    std::unordered_map<std::string, int> map;

    for(auto it = citizens.begin(); it != citizens.end(); it++){
        // auto map_it = std::find(map.begin(), map.end(), it->get_postal_code());

        auto map_it = map.find(it->get_postal_code());

        if(map_it != map.end()){
            map[it->get_postal_code()] += 1;
        }
        else{
            map[it->get_postal_code()] = 1;
        }
    }

    for(auto map_it = map.begin(); map_it != map.end(); map_it++){
        std::cout << map_it->first << " = " << map_it->second << "\n";
    }
}

std::vector<Citizen> City::get_citizens(){
    return citizens;
}