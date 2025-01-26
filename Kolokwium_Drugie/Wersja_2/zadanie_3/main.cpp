#include <iostream>
#include <tuple>
#include <algorithm>
#include <vector>

std::vector<std::tuple<std::string, std::string, int>> cars{
  {"Mazda", "benzyna", 2018},
  {"Peugeot", "diesel", 2019},
  {"Skoda", "benzyna", 2009},
  {"Toyota", "benzyna", 2025},
  {"Audi", "diesel", 2020},
  {"Hunday", "diesel", 2015}
};


int main(){
  std::cout << "Przed zmianami\n\n";
  for(auto car : cars){
    std::cout << std::get<0>(car) << '\t' << std::get<1>(car) << '\t' << std::get<2>(car) << '\n'; 
  }

  std::vector<std::tuple<std::string, std::string, int>> petrol;
  // usuniecie samochodow nie w benzynie
  std::for_each(cars.begin(), cars.end(), [&petrol](auto car){
      if(std::get<1>(car) == "benzyna"){
        petrol.push_back(car);
      }
    }
  );

  // sortowanie pozstałych samochodów
  std::sort(petrol.begin(), petrol.end(), [](auto car_1, auto car_2){
      return std::get<2>(car_1) > std::get<2>(car_2);
    }
  );
  
  std::cout << "\nPo zmianach\n\n";
  for(auto car : petrol){
    std::cout << std::get<0>(car) << '\t' << std::get<1>(car) << '\t' << std::get<2>(car) << '\n'; 
  }

  return 0;
}