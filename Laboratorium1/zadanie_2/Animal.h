#include <string>
#include <iostream>

#ifndef ANIMAL_H
#define ANIMAL_H
#pragma ONCE

class Animal{
    private:
        int limb_number;
        std::string name;
        bool is_protected;

    public:
        Animal();
        Animal(int _limb_number, std::string _name, bool _is_protected = true);

        void set_limb_number(int _limb_number);
        void set_name(std::string _name);
        void set_is_protected(bool _is_protected);

        int get_limb_number();
        std::string get_name();
        bool get_is_protected();

        void voice();
        void info();

        static void how_many_protected_animals(Animal* array, int size);
};
#endif // ANIMAL_H