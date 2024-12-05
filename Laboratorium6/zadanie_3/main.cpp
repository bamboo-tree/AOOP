#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <numeric>


template <typename T>
void epic_super_cool_function_which_does_nothing_useful_skibidi_send_help(std::vector<T> vec){
    
    T sum = std::accumulate(vec.begin(), vec.end(), T(0));
    double average = static_cast<double>(sum) / vec.size();

    std::vector<T> sortedVec = vec;
    std::sort(sortedVec.begin(), sortedVec.end());
    double median = 0.0;
    if (sortedVec.size() % 2 == 0) {
        median = (sortedVec[sortedVec.size() / 2 - 1] + sortedVec[sortedVec.size() / 2]) / 2.0;
    } else {
        median = sortedVec[sortedVec.size() / 2];
    }

    std::cout << "Elementy mniejsze niż średnia arytmetyczna (" << average << "): ";
    std::for_each(vec.begin(), vec.end(), [&](T val) {
        if (val < average) std::cout << val << " ";
    });
    std::cout << std::endl;

    std::cout << "Elementy między średnią (" << average << ") a medianą (" << median << "): ";
    std::for_each(vec.begin(), vec.end(), [&](T val) {
        if (val >= average && val <= median) std::cout << val << " ";
    });
    std::cout << std::endl;

    std::cout << "Elementy dodatnie: ";
    std::for_each(vec.begin(), vec.end(), [](T val) {
        if (val > 0) std::cout << val << " ";
    });
    std::cout << std::endl;
}

int main(){

    std::vector<int> my_vector = {1, -3, 5, 7, 9, -2, 4, 6};
    epic_super_cool_function_which_does_nothing_useful_skibidi_send_help(my_vector);


    return 0;
}