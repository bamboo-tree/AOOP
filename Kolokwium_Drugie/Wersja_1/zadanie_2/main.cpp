#include <iostream>
#include <fstream>
#include <vector>
#include <regex>


bool check_datetime(const std::string& datetime, std::string& format) {
  // wyrazenie regularne
  std::regex format_1(R"((\d{4})-(\d{2})-(\d{2}) (\d{2}):(\d{2}):(\d{2}))");
  std::regex format_2(R"((\d{4})\.(\d{2})\.(\d{2}) (\d{2}):(\d{2}):(\d{2}))");
  std::regex format_3(R"((\d{2})-(\d{2})-(\d{4}) (\d{2}):(\d{2}):(\d{2}))");
  std::regex format_4(R"((\d{2})\.(\d{2})\.(\d{4}) (\d{2}):(\d{2}):(\d{2}))");

  // sprawdzenie ktore wyrazenie regularne jest uzyte
  if (std::regex_match(datetime, format_1)) {
    format = "YYYY-MM-DD HH:mm:ss";
    return true;
  } else if (std::regex_match(datetime, format_2)) {
    format = "YYYY.MM.DD HH:mm:ss";
    return true;
  } else if (std::regex_match(datetime, format_3)) {
    format = "DD-MM-YYYY HH:mm:ss";
    return true;
  } else if (std::regex_match(datetime, format_4)) {
    format = "DD.MM.YYYY HH:mm:ss";
    return true;
  }
  // jesli nie ma dopasaowania zwroc false
  return false;
}

bool time_range(const std::string& time) {
  // rozbicie godziny na skladowe (stoi - string to integer)
  int hour = std::stoi(time.substr(0, 2));
  int minute = std::stoi(time.substr(3, 2));
  int second = std::stoi(time.substr(6, 2));

  // sprawdzenie warunku
  if (hour < 16 || hour > 20) {
    return false;
  } else if (hour == 20 && (minute > 30 || (minute == 30 && second > 59))) {
    return false;
  }
  return true;
}

int main(){

  // zapisanie danych z pliku do wektora
  std::vector<std::string> date;
  std::ifstream file;
  file.open("./plik.txt");
  while(!file.eof()){
    std::string temp;
    getline(file, temp);
    date.push_back(temp);
  }
  file.close();

  for (const auto& datetime : date) {
    std::string format;
    // sprawdzenie czy data jest poprawna i do jakiego formatu nalezy
    if (check_datetime(datetime, format)) {
      std::cout << "Data i godzina: " << datetime << " jest poprawna w formacie: " << format << '\t';
      // wyciagniecie godziny oddzielonej spacja
      std::string time = datetime.substr(datetime.find(' ') + 1);
      if (time_range(time)) {
        std::cout << "godzina w przedziale" << '\n';
      } else {
        std::cout << "godzina spoza przedzialu" << '\n';
      }
    } else {
      std::cout << "Data i godzina: " << datetime << " jest niepoprawna" << '\n';
    }
  }

  return 0;
}