#include "Contacts.h"

Contacts::Contacts(){};

void Contacts::show(){
    for(Contact contact : all_contacts){
        contact.show();
    }
}

void Contacts::add(Contact new_contact){
    auto &phone_number_index = all_contacts.get<3>();
    auto it = phone_number_index.find(new_contact.phone_number);
    if(it != phone_number_index.end()){
        std::cout << "Taka osoba już istnieje\n";
    }
    else{
        all_contacts.insert(new_contact);
    }
};

void Contacts::remove(std::string phone_number){
    auto &phone_number_index = all_contacts.get<3>();
    auto it = phone_number_index.find(phone_number);
    if(it != phone_number_index.end()){
        phone_number_index.erase(it);
        std::cout << "Usunieto osobe z numerem " << phone_number << '\n';
    }
    else{
        std::cout << "Osoba z numerem " << phone_number << " nie istnieje\n";
    }
}


void Contacts::same_address(std::string address){
    std::cout << "Osoby mieszkajace na tej samej ulicy " << address << '\n';
    auto &address_index = all_contacts.get<4>();
    for(auto it = address_index.begin(); it != address_index.end(); it++){
        if(it->address == address){
            std::cout << it->name << " " << it->surname << " " << it->age << " " << it->address << " " << it->phone_number << '\n';
        }
    }
}

void Contacts::age_range(int min, int max){
    std::cout << "Osoby w przedziale wiekowym od " << min << " do " << max << '\n';
    auto &age_index = all_contacts.get<2>();
    for(auto it = age_index.begin(); it != age_index.end(); it++){
        if(min <= it->age && max >= it->age){
            std::cout << it->name << " " << it->surname << " " << it->age << " " << it->address << " " << it->phone_number << '\n';
        }
    }
}

void Contacts::find_contact(std::string phone_number){
    auto &phone_number_index = all_contacts.get<3>();
    auto it = phone_number_index.find(phone_number);
    if(it != phone_number_index.end()){
        std::cout << "Znaleziono osbe ktorej szukasz\n";
        std::cout << it->name << " " << it->surname << " " << it->age << " " << it->address << " " << it->phone_number << '\n';
    }
    else{
        std::cout << "Osoba z numerem telefonu " << phone_number << " nie istnieje\n";
    }
}


void Contacts::change_address(std::string current_name, std::string new_name){
    auto &address_index = all_contacts.get<4>();
    auto it = address_index.find(current_name);
    if(it != address_index.end()){
        std::vector<Contact> updated_contacts;
        for(auto it = address_index.begin(); it != address_index.end(); it++){
            Contact updated = *it;
            updated.address = new_name;
            updated_contacts.push_back(updated);
        }
        for(auto &updated : updated_contacts){
            address_index.insert(updated);
        }
    }
    else{
        std::cout << "Taki adres nie istnieje\n";
    }   
}

void Contacts::count_adult(){
    int adult = 0;
    auto &phone_number_index = all_contacts.get<3>();
    for(auto it = phone_number_index.begin(); it != phone_number_index.end(); it++){
        if(it->age >= 18){
            adult+=1;
        }
    }
    std::cout << "Jest " << adult << " osob pelnoletnich\n";
}

void Contacts::unique_surname(){
    std::set<std::string> surnames;
    auto &surname_index = all_contacts.get<1>();
    for(auto it = surname_index.begin(); it != surname_index.end(); it++){
        surnames.insert(it->surname);
    }
    std::cout << "Liczba unikatowych nazwisk " << surnames.size() << '\n';
}

