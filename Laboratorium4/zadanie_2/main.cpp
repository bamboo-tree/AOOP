#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>


void print(int &element){
    std::cout << element << " ";
}


int main(){

    srand(time(NULL));
    int random_size = rand() % 10 + 5;
    std::vector<int> my_vector;


    for(int i = 0; i < random_size; i++){
        int random_value = rand() % 11 - 5; // <-5; 5>

        if(random_value >= 0)
            my_vector.insert(my_vector.begin(), random_value);
        else
            my_vector.push_back(random_value); 
    }


    std::cout << "iterator + for()\n";
    for(std::vector<int>::iterator it = my_vector.begin(); it != my_vector.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << "\n\n";

    std::cout << "foreach\n";
    for_each(my_vector.begin(), my_vector.end(), print);
    std::cout << "\n\n";

    std::cout << "for() + auto\n";
    for(auto it = my_vector.begin(); it != my_vector.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}