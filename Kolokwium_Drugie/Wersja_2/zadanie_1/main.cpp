#include <iostream>
#include <time.h>

int main(){
  // generowanie wartosci losowej
  srand(time(NULL));
  int random = rand() % 11; // [0; 10]

  // petla gry
  while(true){
    int user;
    std::cout << "Zgadnij liczbe z przedzialu [0; 10] >> ";
    try{
      // wybranie wartosci
      std::cin >> user;

      // sprawdzenie wystapienia wyjatku
      if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore();
        throw std::invalid_argument("Podaj liczbe calkowita\n");
      }
      if(user != random){
        throw std::out_of_range("Nie odgadels, sprobuj ponownie\n");
      }
      if(user == random){
        std::cout << "Udalo ci sie odgadnac liczbe " << random << "! Gratualcje!\n";
        break;
      }
    }
    // obsluga wyjatkow
    catch(const std::out_of_range& e){
      std::cerr << e.what();
    }
    catch(const std::invalid_argument& e){
      std::cerr << e.what();
    }
    catch(...){
      std::cout << "Nieoczekiwany blad\n";
    }
  }
  return 0;
}