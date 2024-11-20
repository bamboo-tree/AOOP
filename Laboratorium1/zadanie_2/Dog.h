#include <string>
#include <iostream>

#include "Animal.h"

#ifndef DOG_H
#define DOG_H
#pragma ONCE

class Dog : public Animal{
    private:
        std::string breed;
        int level_of_guide_skills;
        int level_of_tracker_skills;
    
    public:
        Dog(std::string _breed, int _level_of_guide_skills, int _level_of_tracker_skills);
        Dog(int _limb_number, std::string _name, bool _is_protected);

        void set_breed(std::string _breed);
        void set_skill_level(int skill_type, int value);

        void voice();
        void info();
};
#endif // DOG_H