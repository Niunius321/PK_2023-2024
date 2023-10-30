#include <iostream>
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

int main()
{
    std::cout << Zad1('A', 'a') << std::endl;

}


