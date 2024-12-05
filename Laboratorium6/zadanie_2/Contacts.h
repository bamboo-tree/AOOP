#include <iostream>
#include <string>
#include <vector>
#include <set>

#include "Contact.h"

#include <boost/multi_index/member.hpp>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>


using namespace boost::multi_index;

typedef multi_index_container<Contact, indexed_by<
            hashed_non_unique<member<Contact, std::string, &Contact::name>>,
            hashed_non_unique<member<Contact, std::string, &Contact::surname>>,
            hashed_non_unique<member<Contact, int, &Contact::age>>,
            hashed_unique<member<Contact, std::string, &Contact::phone_number>>,
            hashed_non_unique<member<Contact, std::string, &Contact::address>>
        >> book;

typedef book::nth_index<0>::type name_type;
typedef book::nth_index<1>::type surname_type;
typedef book::nth_index<2>::type age_type;
typedef book::nth_index<3>::type phone_number_type;
typedef book::nth_index<4>::type address_type;


#ifndef CONTACTS_H
#define CONTACTS_H
#pragma ONCE

class Contacts{
    public:
        book all_contacts;

        Contacts();

        void add(Contact new_contact);
        void remove(std::string phone_number);
        void same_address(std::string address);
        void age_range(int min, int max);
        void find_contact(std::string phone_number);
        void change_address(std::string current_name, std::string new_name);
        void count_adult();
        void show();
        void unique_surname();

};
#endif // CONTACTS_H