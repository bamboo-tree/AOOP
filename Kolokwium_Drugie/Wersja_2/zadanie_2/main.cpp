#include <iostream>
#include <regex>
#include <vector>

// lepiej nie działało 

int main(){
  std::regex my_pattern(R"(([-+]?[1-9]\d*|[-+]?\d*)(x(\^\d+)?)([-+](\d*x(\^\d+)?|\d+))*)");
    

  std::vector<std::string> test = {
    // "2x^4+3x^3+4x^2+5x+6",
    "5x^4+x^3+x-3",     // good
    "5x^4+x^3+x",       // good
    "-5x^4-4x^3+x^2-4", // good
    "5x4-2x^3+x-3",     // bad
    "5x^4+0x^3+x-3",    // bad
    "5x^4+x^3+x--3"     // bad
    // "5x^4+x^3+x-3",     // good
    // "5x^4+x^3+x",       // good
    // "-5x^4-4x^3+x^2-4", // good
    // "5x4-2x^3+x-3",     // bad
    // "5x^4+0x^3+x-3",    // bad
    // "5x^4+x^3+x--3"     // bad
  };

  for(auto element : test){
    if(std::regex_match(element, my_pattern)){
      std::cout << element << "\t GOOD\n";
    }
    else{
      std::cout << element << "\t WRONG\n";
    }
  }


  return 0;
}