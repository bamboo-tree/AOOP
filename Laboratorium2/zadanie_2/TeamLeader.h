#include <iostream>
#include <string>

#include "Employee.h"

#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#pragma ONCE

class TeamLeader : public Employee{
    public:
        TeamLeader(std::string _surname, int _age, int _experience, float _salary);
        TeamLeader();

        virtual int calculate_salary(int value) override;
        virtual void show() override;
};
#endif // TEAMLEADER_H