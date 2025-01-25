#include <iostream>
#include <time.h>
#include <exception>

// rekurencyjna funkcja do zgadywania
void guess_value(int random_number){
  int user;
  try{
      std::cout << "zgadnij liczbe z przedzialu 0 - 10 : ";
      std::cin >> user;
      if(std::cin.fail()){
        // wazne jest zeby wyczyscic bufor cin
        std::cin.clear();
        std::cin.ignore();
        throw std::invalid_argument("Podaj liczbe calkowita");
      }
      if(user != random_number){
        throw std::out_of_range("Nie odgadles, sprobuj ponownie");
      }
      else{
        std::cout << "Udalo ci sie odgadnac wartosc " << random_number << "!\n";
      }
    }
    // obsluga wyjatkow
    catch(const std::invalid_argument& e){
      std::cout << e.what() << '\n';
      guess_value(random_number);
    }
    catch(const std::out_of_range& e){
      std::cout << e.what() << '\n';
      guess_value(random_number);
    }
    catch(...){
      std::cout << "Nieoczekiwany blad!\n";
      guess_value(random_number);
    }
}


int main(){

  // losowa liczba 0 - 10
  srand(time(NULL));
  int random_number = rand() % 11;

  guess_value(random_number);
  
  return 0;
}