#include "Cat.h"

Cat::Cat(int _limb_number, std::string _name, bool _is_protected) : Animal(_limb_number, _name, _is_protected){
    std::cout << "konstruktor Cat z wartosciami Animal\n";
}

Cat::Cat(){
    std::cout << "konstruktor bezparametrowy Cat\n";
}

void Cat::init_mice(){
    for(int i = 0; i < 5; i++){
        int value = -1;
        while(value < 1 || value > 5){
            std::cout << "podaj wartosc myszy na rok " << 2024 - 4 + i << " - ";
            std::cin >> value;
        }
        mice[i] = value;
    }
    std::cout << "myszotablica zainicjowana\n";
}

void Cat::init_cat(){
    std::cout << "imie - ";
    std::string temp_string;
    std::getline(std::cin >> std::ws, temp_string);
    set_name(temp_string);

    std::cout << "liczba konczyn - ";
    int temp_int;
    std::cin >> temp_int;
    set_limb_number(temp_int);

    std::cout << "czy chronione (0 - 1) - ";
    bool temp_bool;
    std::cin >> temp_bool;
    set_is_protected(temp_bool);

    std::cout << "poziom lapania myszy (1 - 10) - ";
    std::cin >> temp_int;
    set_level_of_mouse_hunting(temp_int);

    std::cout << "uzupelnij tablice\n";
    init_mice();
}

void Cat::set_level_of_mouse_hunting(int value){
    if(value >= 1 && value <= 10){
        level_of_mouse_hunting = value;
    }
}

int Cat::get_level_of_mouse_hunting(){
    return level_of_mouse_hunting;
}

int Cat::get_mice(int index){
    if(index >= 0 && index < 5){
        return mice[index];
    }
    return -1;
}

void Cat::voice(){
    std::cout << "miau miau\n";
}

void Cat::info(){
    Animal::info();
    std::cout << level_of_mouse_hunting << " myszotablica [";
    for(int i = 0; i < 5; i++){
        std::cout << mice[i] << " ";
    }
    std::cout << "]\n";
}

void Cat::how_many_cats(Cat* array, int size){
    for(int i = 0; i < size; i++){
        std::cout << array->get_name() << " - ";
        for(int j = 0; j < 5; j++){
            std::cout << array->get_mice(j) << " ";
        }
        std::cout << "\n";
    }
}