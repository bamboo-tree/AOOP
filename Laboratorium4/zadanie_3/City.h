#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

#include "Citizen.h"

#ifndef CITY_H
#define CITY_H

class City{
    private:
        std::vector<Citizen> citizens;
        std::string city_name;

    public:
        City(std::string _city_name);
        void add_citizen(Citizen new_citizen);
        void delete_citizen(std::string _surname, int _age);
        void show_citizens();
        void show_city();
        int count_women();
        int count_citizens();
        int count_adults();
        void postal_codes();

};
#endif // CITY_H