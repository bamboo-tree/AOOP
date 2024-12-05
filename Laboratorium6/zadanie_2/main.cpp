#include <iostream>
#include "Contact.h"
#include "Contacts.h"


int main(){

    Contacts all;

    all.add(Contact("Jan", "Kowalski", 20, "123123123", "Lublin"));
    all.add(Contact("Jozef", "Kowalski", 30, "123123111", "Krasnik"));
    all.add(Contact("Anna", "Nowak", 21, "222333444", "Lublin"));
    all.add(Contact("Michal", "Podkowa", 35, "999000999", "Krasnik"));
    all.add(Contact("Jan", "Podkowa", 20, "111222333", "Lublin"));
    all.add(Contact("Jan", "Kowalski", 20, "111222333", "Lublin"));

    all.remove("111222333");
    all.same_address("Lublin");
    all.age_range(19, 21);
    all.find_contact("123123123");
    all.unique_surname();
    all.show();


    return 0;
}