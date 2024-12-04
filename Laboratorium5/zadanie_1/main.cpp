#include <iostream>
#include <vector>
#include <set>

std::pair<int, int> my_function(std::vector<int> my_vector){
    std::set<int> my_set;
    std::pair<int, int> result;

    for(std::vector<int>::iterator it = my_vector.begin(); it != my_vector.end(); it++){
        if(my_set.find(*it) != my_set.end()){
            result.first = *it;
        }
        else{
            my_set.insert(*it);
            result.second += *it;
        }
    }

    return result;
}



int main(){

    std::vector<int> test_vector = {5, 3, 8, 2, 1, 8, 4};
    std::pair<int, int> result = my_function(test_vector);

    std::cout << "duplicated value = " << result.first << ", sum of unique values = " << result.second << '\n';


    return 0;
}