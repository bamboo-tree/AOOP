#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

std::vector<std::tuple<std::string, float, float, float, float, float, int, std::string>> planety {
  {"Merkury", 0.3825, 0.552, 0.3871, 0.2408, 58.64306, 0, "skalista"},
  {"Wenus", 0.9489, 0.8148, 0.7233, 0.6152, 243.01875, 0, "skalista"}
  // usupelnic brakujace
};

void show(std::tuple<std::string, float, float, float, float, float, int, std::string> planeta){
  std::cout << "NAZWA: " << std::get<0>(planeta) << "\nSREDNICA: " << std::get<1>(planeta) << "\nMASA: " << std::get<2>(planeta) << "\nODLEGLOSC OD SLONCA: " << std::get<3>(planeta) << "\nCZAS OBIEGU WOKOL SLONCA: " << std::get<4>(planeta) << "\nCZAS OBIEGU WOKOL OSI: " << std::get<5>(planeta) << "\nLICZBA KSIEZYCOW: " << std::get<6>(planeta) << "\nRODZAJ PLANETY: " << std::get<7>(planeta) << '\n'; 
}


int main(){
  // wyswietlenie planet
  for(auto planeta : planety){
    show(planeta);
  }

  // sortowanie przy uzyciu lambdy
  std::sort(planety.begin(), planety.end(), [](auto a, auto b) {
      return std::get<1>(a) < std::get<1>(b) ;
    }
  );

  std::cout << "\n\nPO SORTOWANIU\n\n\n";
  std::for_each(planety.begin(), planety.end(), [](auto planeta) {
    show(planeta);
    }
  );

  return 0;
}