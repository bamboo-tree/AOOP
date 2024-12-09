#include <iostream>
#include <string>

template <typename T>
class Ulamek{
    private:
        T licznik;
        T mianownik;
    public:
        Ulamek(T _licznik, T _mianownik){
            licznik = _licznik;
            mianownik = _mianownik;
        }
        void dziesietny(){
            std::cout << licznik << '\n';
            std::cout << mianownik << '\n';
        }
};

template <>
class Ulamek<int>{
    private:
        int licznik;
        int mianownik;
    public:
        Ulamek(int _licznik, int _mianownik){
            licznik = _licznik;
            mianownik = _mianownik;
        }
        float dziesietny(){
            // wynik float
            return float(licznik) / float(mianownik);
        }
};

template <>
class Ulamek<float>{
    private:
        float licznik;
        float mianownik;
    public:
        Ulamek(float _licznik, float _mianownik){
            licznik = _licznik;
            mianownik = _mianownik;
        }
        float dziesietny(){
            return licznik / mianownik;
        }
};



int main(){

    Ulamek u1 = Ulamek<int>(2, 3);
    std::cout << "int = " << u1.dziesietny() << '\n';

    Ulamek u2 = Ulamek<float>(9.9, 3.2);
    std::cout << "float = " << u2.dziesietny() << '\n';

    Ulamek u3 = Ulamek<std::string>("skibidi", "ohio");
    u3.dziesietny();



    return 0;
}