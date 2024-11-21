#include "Developer.h"

Developer::Developer(){
    std::cout << "konstruktor bez parametrowy Developer\n";
}

Developer::Developer(std::string _surname, int _age, int _experience, float _salary) : Employee(_surname, _age, _experience, _salary){
    std::cout << "konstruktor parametrowy Developer\n";
}

int Developer::calculate_salary(int value){
    return value + 0.2 * value * (get_age() + get_experience());
}