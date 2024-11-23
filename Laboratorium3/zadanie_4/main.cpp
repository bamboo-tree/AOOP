#include <iostream>

#include "Array.h"


int main(){

    Array int_array = Array<int>(10);
    int_array.add(2);
    int_array.add(4);
    int_array.add(6);
    int_array.add(8);
    int_array.add(0);
    int_array.add(2);
    int_array.add(4);
    int_array.add(6);
    int_array.add(8);
    int_array.add(0);

    int_array.sort();
    int_array.show();
    std::cout << "max = " << int_array.max() << "\n";
    int_array.get_type();


    Array str_array = Array<std::string>(4);
    str_array.add("aaa");
    str_array.add("b");
    str_array.add("ccccc");
    str_array.add("dddddd");

    str_array.sort();
    str_array.show();
    std::cout << "max = " << str_array.max() << "\n";
    str_array.get_type();

    std::cout << "^~^\n";
    return 0;
}