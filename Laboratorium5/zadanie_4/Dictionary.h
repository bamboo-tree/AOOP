#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>


#ifndef DICTIONARY_H
#define DICTIONARY_H

class Dictionary{
private:
    std::unordered_map<std::string, std::string> words;

public:
    Dictionary();
    void add(std::string word, std::string translation);
    void remove(std::string word);
    void print();
    void translate(std::string word_to_translate);
    void sort_words();
};
#endif // DICTIONARY_H