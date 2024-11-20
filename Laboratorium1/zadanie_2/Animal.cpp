#include "Animal.h"

Animal::Animal(){
    std::cout << "konstruktor bezparametrowy Animal\n";
}

Animal::Animal(int _limb_number, std::string _name, bool _is_protected){
    limb_number = _limb_number;
    name = _name;
    is_protected = _is_protected;
    std::cout << "konstruktor z parametrami Animal\n";
}

void Animal::voice(){
    std::cout << "zwierze wydaje dzwieki\n";
}

void Animal::info(){
    std::cout << name << " " << limb_number << " " << is_protected << "\n";
}

void Animal::set_limb_number(int _limb_number){
    limb_number = _limb_number;
}
void Animal::set_name(std::string _name){
    name = _name;
}
void Animal::set_is_protected(bool _is_protected){
    is_protected = _is_protected;
}

int Animal::get_limb_number(){
    return limb_number;
}
std::string Animal::get_name(){
    return name;
}
bool Animal::get_is_protected(){
    return is_protected;
}