#include <iostream>
#include <string>


#ifndef CONTACT_H
#define CONTACT_H
#pragma ONCE

class Contact{
    public:
        std::string name;
        std::string surname;
        int age;
        std::string phone_number;
        std::string address;

        Contact();
        Contact(std::string _name, std::string _surname, int _age, std::string _phone_number, std::string _address);
        void show();
};
#endif // CONTACT_H