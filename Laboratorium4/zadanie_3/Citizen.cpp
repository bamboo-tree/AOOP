#include "Citizen.h"

Citizen::Citizen(){}

Citizen::Citizen(std::string _name, std::string _surname, int _age, char _sex, std::string _postal_code){
    name = _name;
    surname = _surname;
    age = _age;
    sex = _sex;
    postal_code = _postal_code;
}

void Citizen::show(){
    std::cout << "NAME        - " << name << "\n";
    std::cout << "SURNAME     - " << surname << "\n";
    std::cout << "AGE         - " << age << "\n";
    std::cout << "SEX         - " << sex << "\n";
    std::cout << "POSTAL CODE - " << postal_code << "\n";
}

std::string Citizen::get_surname(){
    return surname;
}

int Citizen::get_age(){
    return age;
}

char Citizen::get_sex(){    
    return sex;
}

std::string Citizen::get_postal_code(){
    return postal_code;
}