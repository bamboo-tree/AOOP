#include <iostream>
#include <string>


#ifndef CITIZEN_H
#define CITIZEN_H
#pragma ONCE

class Citizen{
    private:
        std::string name;
        std::string surname;
        int age;
        char sex;
        std::string postal_code;

    public:
        Citizen();
        Citizen(std::string _name, std::string _surname, int _age, char _sex, std::string _postal_code);
        void show();

        std::string get_surname();
        int get_age();
        char get_sex();
        std::string get_postal_code();
        
};
#endif // CITIZEN_H