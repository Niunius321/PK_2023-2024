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
template <typename Y>

void Zad2(Y &a, Y &b) {
    Y temp = a;
    a = b;
    b = temp;
}




int main()
{
    std::cout << Zad1('A', 'a') << std::endl;
    int x=5, y=10;
    Zad2(x,y);
    std::cout << x<<" "<<y<<std::endl;
    
    
}

