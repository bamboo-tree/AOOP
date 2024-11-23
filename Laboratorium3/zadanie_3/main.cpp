#include <iostream>
#include <string>


template <int divider, typename T>
void show_converting_from_grams(T value_in_grams){
    T result = value_in_grams / divider;
    std::cout << result << "\n";
}



template <int divider, typename T>
void show_converting_from_grams(std::string value_in_grams){
    std::cout << "zły typ danych\n";
}
// template <int T_int, typename T>
// void show_converting_from_grams(double value_in_grams){
//     std::cout << "zły typ danych\n";
// }






int main(){

    show_converting_from_grams<100, int>(1000);
    show_converting_from_grams<100, float>(100.7);
    // show_converting_from_grams<0.001, float>(100.7); // ??? nie wiem na jakiej zasadzie przesłać float do template'a!!!

    show_converting_from_grams<100, std::string>("your mum is big");
    show_converting_from_grams<100, double>(4.20);


    std::cout << "Hello world\n";
    return 0;
}