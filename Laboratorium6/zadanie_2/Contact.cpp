#include "Contact.h"

Contact::Contact(){}

Contact::Contact(std::string _name, std::string _surname, int _age, std::string _phone_number, std::string _address){
    name = _name;
    surname = _surname;
    age = _age;
    phone_number = _phone_number;
    address = _address;
}

void Contact::show(){
    std::cout << name << " " << surname << " " << age << " " << phone_number << " " << address << '\n';
}