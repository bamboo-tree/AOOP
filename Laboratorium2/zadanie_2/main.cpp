#include <iostream>

#include "Developer.h"
#include "TeamLeader.h"

int main(){

    // test klasy Developer
    Developer developer_1 = Developer("Kowalski", 24, 4, 3000);
    developer_1.show();
    std::cout << "calculate salary - " << developer_1.calculate_salary(6) << "\n";


    // test klasy TeamLeader
    TeamLeader team_leader_1 = TeamLeader("Nowak", 46, 30, 6000);
    team_leader_1.show();
    std::cout << "calculate salary - " << developer_1.calculate_salary(13) << "\n";


    // test metod statycznych klasy Employee
    Employee* employee_array[3] = {
        new Developer("dev_1", 26, 3, 4000),
        new Developer("dev_2", 25, 4, 5000),
        new TeamLeader("leader_1", 36, 10, 9000)
    };

    Employee::how_many_earn_less_than_mean(employee_array, 3);
    Employee::who_work_more_than_5_years(employee_array, 3);



    

    return 0;
}