#include <iostream>
#include <vector>
#include <algorithm>
#include <random>


struct my_order{
    bool operator()(int a, int b) const {
        return a < b;
    }
};

void print(int &element){
    std::cout << element << " ";
}

/*

    nie robie drugiej wersji bo to kestia zmiany warunkow sortowania

*/



int main(){

    std::vector<int> my_vector = {4, -1, 5, 3, 2, 8, 0, 1, 12, 5, 3, 6, 7};
    

    // sortowanie z for_each
    std::shuffle(my_vector.begin(), my_vector.end(), std::default_random_engine(0));
    
    std::sort(my_vector.begin(), my_vector.end());
    std::for_each(my_vector.begin(), my_vector.end(), print);
    std::cout << std::endl;


    // sortowanie lambda
    std::shuffle(my_vector.begin(), my_vector.end(), std::default_random_engine(0));
    std::sort(my_vector.begin(), my_vector.end(), [](int a, int b){
        return a < b;
    });
    std::for_each(my_vector.begin(), my_vector.end(), print);
    std::cout << std::endl;


    // sortowanie z operatorem
    std::shuffle(my_vector.begin(), my_vector.end(), std::default_random_engine(0));
    std::sort(my_vector.begin(), my_vector.end(), my_order());
    std::for_each(my_vector.begin(), my_vector.end(), print);
    std::cout << std::endl;
    
    return 0;
}