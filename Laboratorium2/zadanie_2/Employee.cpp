#include "Employee.h"


Employee::Employee(std::string _surname, int _age, int _experience, float _salary){
    surname = _surname;
    age = _age;
    experience = _experience;
    salary = _salary;
    std::cout << "konstruktor parametrowy Employee\n";
}

Employee::Employee(){
    std::cout << "konstruktor bez parametrowy Employee\n";
}

Employee::~Employee(){
    std::cout << "destruktor wirtualny Employee\n";
}

void Employee::show(){
    std::cout << "surname - " << surname << "\n";
    std::cout << "age - " << age << "\n";
    std::cout << "experience - " << experience << "\n";
    std::cout << "salary - " << salary << "\n";   
}

int Employee::age_employment(){
    return age - experience;
}

int Employee::get_age(){
    return age;
}

int Employee::get_experience(){
    return experience;
}

void Employee::who_work_more_than_5_years(Employee** array, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        if(array[i]->experience > 5){
            sum += 1;
        }
    }
    std::cout << "liczba osob pracujacych wiecej niz 5 lat - " << sum << "\n";
}

void Employee::how_many_earn_less_than_mean(Employee** array, int size){
    float mean = 0;
    for(int i = 0; i < size; i++){
        mean += float(array[i]->salary);
    }

    mean /= size;
    for(int i = 0; i < size; i++){
        if(array[i]->salary < float(mean)){
            std::cout << array[i]->surname << "\n";
        }
    }
}