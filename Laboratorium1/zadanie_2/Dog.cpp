#include "Dog.h"

Dog::Dog(std::string _breed, int _level_of_guide_skills, int _level_of_tracker_skills){
    breed = _breed;
    level_of_guide_skills = _level_of_guide_skills;
    level_of_tracker_skills = _level_of_tracker_skills;
    std::cout << "konstruktor Dog bez wartosci Animal\n";
}

Dog::Dog(int _limb_number, std::string _name, bool _is_protected) : Animal(_limb_number, _name, _is_protected){
    std::cout << "konstruktor Dog z wartosciami Animal\n";
}

void Dog::set_breed(std::string _breed){
    breed = _breed;
}

void Dog::set_skill_level(int type, int value){
    if(type == 0 && (value >= 1 && value <= 10 )){
        level_of_tracker_skills = value;
    }
    if(type == 1 && (value >= 1 && value <= 10 )){
        level_of_guide_skills = value;
    }
}

void Dog::voice(){
    std::cout << "hau hau\n";
}

void Dog::info(){
    Animal::info();
    std::cout << breed << " " << level_of_tracker_skills << " " << level_of_guide_skills << "\n";
}
