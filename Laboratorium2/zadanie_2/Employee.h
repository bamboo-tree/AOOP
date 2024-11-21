#include <iostream>
#include <string>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#pragma ONCE

class Employee{
    private:
        std::string surname;
        int age;
        int experience;
        float salary;
    
    public:
        Employee(std::string _surname, int _age, int _experience, float _salary);
        Employee();
        virtual ~Employee();
        
        virtual void show();
        virtual int calculate_salary(int value) = 0;
        int age_employment();

        int get_age();
        int get_experience();

        static void who_work_more_than_5_years(Employee** array, int size);
        static void how_many_earn_less_than_mean(Employee** array, int size);

};
#endif // EMPLOYEE_H