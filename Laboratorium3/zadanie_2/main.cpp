#include <iostream>


template <typename T>
T find_min(T* array, int size){
    T min = 0;
    for(int i = 0; i < size; i++){
        min = std::min(array[i], min);
    }

    std::cout << "min = " << min << "\n";
    return min;
}


int main(){

    int int_array[] = {1, 5, 2, 8, 0, -12, 2};
    float float_array[] = {3.14, 0.99, -9.01, -9999.9, 21.37};

    find_min<int>(int_array, sizeof(int_array)/sizeof(int));
    find_min<float>(float_array, sizeof(float_array)/sizeof(float));



    std::cout << "Hello world\n";
    return 0;
}