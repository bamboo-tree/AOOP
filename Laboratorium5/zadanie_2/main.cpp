#include <iostream>
#include <set>
#include <algorithm>

template <typename T>
T my_epic_function(std::set<T> set_1, std::set<T> set_2){

    std::set<T> temp_1;
    std::set_union(set_1.begin(), set_1.end(), set_2.begin(), set_2.end(), std::insert_iterator(temp_1, temp_1.begin()));

    std::set<T> temp_2;
    std::set_intersection(set_1.begin(), set_1.end(), set_2.begin(), set_2.end(), std::insert_iterator(temp_2, temp_2.begin()));

    T sum_1 = 0;
    for(auto it = temp_1.begin(); it != temp_1.end(); it++){
        sum_1 += *it;
    }
    T sum_2 = 0;
    for(auto it = temp_2.begin(); it != temp_2.end(); it++){
        sum_2 += *it;
    }

    return sum_1 - sum_2;
}

int main(){
    // set_1 = 26, set_2 = 24, result = 21 + 19 = 40
    std::set<int> test_set_1 = {2, 4, 7, 1, 9, 3}; 
    std::set<int> test_set_2 = {3, 5, 6, 8, 0, 2};

    int result = my_epic_function(test_set_1, test_set_2);
    std::cout << "sum = " << result << '\n';


    return 0;
}