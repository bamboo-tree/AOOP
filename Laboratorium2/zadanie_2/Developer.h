#include <iostream>
#include <string>

#include "Employee.h"

#ifndef DEVELOPER_H
#define DEVELOPER_H
#pragma ONCE

class Developer : public Employee{
    public:
        Developer(std::string _surname, int _age, int _experience, float _salary);
        Developer();
        virtual int calculate_salary(int value) override;

};
#endif // DEVELOPER_H