#include <iostream>
#include <string>

template <typename T>

T Zad1(T x, T y) {
    if (typeid(x) == typeid(int) && typeid(y) == typeid(int)) {
        std::cout << "Dla typow int: ";
    }
    if (x >= y) {

        return y;
    }
    else {
        return x;
    }
}
template <typename Y>

void Zad2(Y &a, Y &b) {
    Y temp = a;
    a = b;
    b = temp;
}

template <typename T>
class Kolejka {
private:
    T tab[10];
    int zajetosc;
    bool pelna;

public:
    Kolejka() : zajetosc(0), pelna(false) {
        for (int i = 0; i < 10; ++i) {
            tab[i] = T();
        }
    }

    void wloz(T element) {
        if (!pelna) {
            tab[zajetosc++] = element;
            if (zajetosc == 10) {
                pelna = true;
            }
        }
    }

    T wez() {
        if (zajetosc > 0) {
            T element = tab[0];
            for (int i = 0; i < zajetosc - 1; ++i) {
                tab[i] = tab[i + 1];
            }
            tab[--zajetosc] = T();
            pelna = false;
            return element;
        } else {
            throw std::runtime_error("Kolejka jest pusta.");
        }
    }

    int ile_elem() const {
        return zajetosc;
    }

    bool czyPusta() const {
        return zajetosc == 0;
    }

    bool czyPelna() const {
        return pelna;
    }

    void drukuj() const {
        for (int i = 0; i < zajetosc; ++i) {
            std::cout << tab[i] << " ";
        }
        std::cout << std::endl;
    }
};


int main()
{
    std::cout << Zad1('A', 'a') << std::endl;
    int x=5, y=10;
    Zad2(x,y);
    std::cout << x<<" "<<y<<std::endl;
    Kolejka<int> kolejkaLiczb;
    Kolejka<std::string> kolejkaNapisow;

    std::cout << "Wprowadź trzy liczby całkowite do kolejki: ";
    for (int i = 0; i < 3; ++i) {
        int liczba;
        std::cin >> liczba;
        kolejkaLiczb.wloz(liczba);
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Wprowadź pięć napisów do kolejki: ";
    for (int i = 0; i < 5; ++i) {
        std::string napis;
        std::getline(std::cin, napis);
        kolejkaNapisow.wloz(napis);
    }

    std::cout << "Zawartość kolejki liczb całkowitych: ";
    kolejkaLiczb.drukuj();

    std::cout << "Zawartość kolejki napisów: ";
    kolejkaNapisow.drukuj();
    
}

