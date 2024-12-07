#include <iostream>
#include <string>

template <typename T>
T show_converting_from_grams(int divider, T in_grams){
    std::string unit = "g";
    switch (divider){
        case 1:
            unit = "g";
            break;
        case 10:
            unit = "dag";
            break;
        case 1000:
            unit = "kg";
            break;
        default:
            unit = "error";
            break;
    }
    if(unit != "error"){
        T value = in_grams / float(divider);
        std::cout << in_grams << "g = " << value << unit << '\n';
        return value;
    }
    else{
        std::cout << "Wrong divider!\n";
        return 0;
    }
}

template <>
std::string show_converting_from_grams(int divider, std::string in_grams){
    std::cout << "This method works only for INT and FLOAT\n";
    return "";
}

template <>
char show_converting_from_grams(int divider, char in_grams){
    std::cout << "This method works only for INT and FLOAT\n";
    return ' ';
}



int main(){
    // poprawnie oblicza
    show_converting_from_grams<int>(10, 1000);
    show_converting_from_grams<float>(1000, 12500);

    // dla string oraz char zwraca odpowiednia informacje
    show_converting_from_grams<std::string>(10, "1000");
    show_converting_from_grams<char>(10, '1');
    return 0;
}

