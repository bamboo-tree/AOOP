#include <string>
#include <iostream>

#include "Animal.h"

#ifndef CAT_H
#define CAT_H
#pragma ONCE

class Cat : public Animal{
    private:
        int level_of_mouse_hunting;
        int mice[5];

    public:
        Cat();
        Cat(int _limb_number, std::string _name, bool _is_protected);

        void init_mice();
        void init_cat();
        void set_level_of_mouse_hunting(int value);
        int get_level_of_mouse_hunting();
        int get_mice(int index);
        void voice();
        void info();

        static void how_many_cats(Cat* array, int size);
};
#endif // CAT_H