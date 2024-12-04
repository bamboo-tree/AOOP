#include <iostream>
#include "Dictionary.h"

int main(){

    Dictionary dic;

    dic.add("Kot", "Cat");
    dic.add("Pies", "Dog");
    dic.add("Dom", "House");
    dic.add("Telefon", "Smartphone");
    dic.add("Samochód", "Car");

    // dic.print();
    // dic.remove("Dom");
    // dic.translate("Telefon");

    dic.sort_words();


    return 0;
}