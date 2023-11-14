#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

auto Powiel(vector<int> &numbers, int x) {


    cout << endl;
    for_each(numbers.begin(), numbers.end(), [x](int &a) { return a *= x; });

    return numbers;
}

void Wypisz(const vector<int>& numbers) {
    for (int element: numbers) {
        cout << element << endl;
    }
}

int main() {

    int x;
    cout << "Podaj liczbe: ";
    cout << endl;
    cin >> x;
    vector<int> numbers = {1, 5, 20, 55, 70, 92, 100};
    Wypisz(numbers);
    cout << endl;
    Powiel(numbers, x);
    Wypisz(numbers);
    return 0;
}