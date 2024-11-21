#include "TeamLeader.h"

TeamLeader::TeamLeader(){
    std::cout << "konstruktor bez parametrowy TeamLeader\n";
}

TeamLeader::TeamLeader(std::string _surname, int _age, int _experience, float _salary) : Employee(_surname, _age, _experience, _salary){
    std::cout << "konstruktor parametroey TeamLeader\n";
}

int TeamLeader::calculate_salary(int value){
    return value * (1 + get_age() + get_experience());
}

void TeamLeader::show(){
    std::cout << "TEAM LEADER\n";
    Employee::show();
}