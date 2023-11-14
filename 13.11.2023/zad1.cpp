#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    auto podpunktA = [](int x) { return x; };
    auto podpunktB = [](int x) { return (x * 4 + 10); };
    auto podpunktC = [](int x) { return (x * x * x - 100); };
    vector<int> numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 10; i++) {
        cout << podpunktA(numbers[i]) << endl;
    }
    for (int i = 0; i < 10; i++) {
        cout << podpunktB(numbers[i]) << endl;
    }
    for (int i = 0; i < 10; i++) {
        cout << podpunktC(numbers[i]) << endl;
    }
    return 0;
}