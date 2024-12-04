#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string>

char even_more_epic_function(std::string short_string, std::string long_string){
    std::unordered_map<char, int> short_map;
    for(int i = 0; i < short_string.size(); i++){
        if(short_map.find(short_string[i]) != short_map.end()){
            short_map[short_string[i]] += 1;
        }
        else{
            short_map.insert({short_string[i], 1});
        }
    }

    std::unordered_map<char, int> long_map;
    for(int i = 0; i < long_string.size(); i++){
        if(long_map.find(long_string[i]) != long_map.end()){
            long_map[long_string[i]] += 1;
        }
        else{
            long_map.insert({long_string[i], 1});
        }
    }

    for(auto long_it = long_map.begin(); long_it != long_map.end(); long_it++){
        auto short_it = short_map.find(long_it->first);
        if(short_it != short_map.end()){
            if(short_it->second != long_it->second){
                return long_it->first;
            }
        }
        else{
            return long_it->first;
        }
    }
    return 1;
}



int main(){
    std::string text_1 = "ABCDE";
    std::string text_2 = "EBFADC";

    std::cout << even_more_epic_function(text_1, text_2) << '\n';



    return 0;
}