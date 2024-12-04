#include "Dictionary.h"

Dictionary::Dictionary(){}

void Dictionary::print(){
    std::cout << "\nDICTIONARY\n\n";
    for(auto it = words.begin(); it != words.end(); it++){
        std::cout << it->first << " - " << it->second << '\n';
    }
}

void Dictionary::translate(std::string word_to_translate){
    auto it = words.find(word_to_translate);
    if(it != words.end()){
        std::cout << it->first << " - " << it->second << '\n';
    }
    else{
        std::cout << "word not found\n";
    }
}

void Dictionary::add(std::string word, std::string translation){
    auto it = words.find(word);
    if(it != words.end()){
        std::cout << "word already exists\n";
    }
    else{
        words.insert({word, translation});
        std::cout << "word " << word << " added successfuly\n";
    }
}

void Dictionary::remove(std::string word){
    auto it = words.begin();
    if(it != words.end()){
        words.erase(it);
    }
    else{
        std::cout << "word not found\n";
    }
}

void Dictionary::sort_words(){
    std::vector<std::pair<std::string, std::string>> my_vector;
    for(auto it = words.begin(); it != words.end(); it++){
        my_vector.push_back(*it);
    }

    std::sort(my_vector.begin(), my_vector.end(), [](const auto& a, const auto& b){
        return a.first < b.first;
    });

    for(auto it = my_vector.begin(); it != my_vector.end(); it++){
        std::cout << it->first << " - " << it->second << '\n';
    }
}