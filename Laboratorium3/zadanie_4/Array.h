#include <iostream>
#include <string>
#include <algorithm>
#include <boost/core/demangle.hpp>

#ifndef ARRAY_H
#define ARRAY_H
#pragma ONCE

template <typename T>
class Array{
    private:
        T* array;
        int size;
        int first_free_index;
    
    public:
        Array(int _size);
        Array();
        ~Array();

        void sort();
        T max();
        void show();
        void add(T element);
        T get(int index);
        void get_type();

};
#endif // ARRAY_H


template <typename T>
Array<T>::Array(int _size){
    size = _size;
    first_free_index = 0;
    array = new T[size];
}

template <typename T>
Array<T>::Array(){}

template <typename T>
Array<T>::~Array(){}

template <typename T>
void Array<T>::sort(){
    for(int i = 0; i < first_free_index; i++){
        for(int j = i; j < first_free_index; j++){
            if(array[i] > array[j]){
                T temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

template <>
void Array<std::string>::sort(){
    for(int i = 0; i < first_free_index; i++){
        for(int j = i; j < first_free_index; j++){
            if(array[i].length() > array[j].length()){
                std::string temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

template <typename T>
T Array<T>::max(){
    T result = array[0];
    for(int i = 1; i < first_free_index; i++){
        result = std::max(result, array[i]);
    }
    return result;
}

template <>
std::string Array<std::string>::max(){
    std::string result = array[0];
    for(int i = 1; i < first_free_index; i++){
        if(result.length() < array[i].length()){
            result = array[i];
        }
    }
    return result;
}


template <typename T>
void Array<T>::show(){
    for(int i = 0; i < size; i++){
        if(i < first_free_index){
            std::cout << array[i] << " ";
        }
        else{
            std::cout << "? ";
        }
    }
    std::cout << "\n";
}

template <typename T>
void Array<T>::add(T element){
    if(first_free_index < size){
        array[first_free_index] = element;
        first_free_index++;
    }
    else{
        std::cout << "Nie mozna dodac kolejnego elementu, tablica jest pelna\n";
    }
}

template <typename T>
T Array<T>::get(int index){
    return ((index >= 0 && index < size) ? array[index] : 0);
}

template <typename T>
void Array<T>::get_type(){
    std::cout << boost::core::demangle(typeid(T).name()) << "\n";
}


