#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void Wypisz(const vector<int> &numbers) {
    for (int element: numbers) {
        cout << element << endl;
    }
}

void Najwiekszy(const vector<int> &numbers) {
    cout << "najwiekszy element to: " << *max_element(numbers.begin(), numbers.end()) << endl;
}

void Licz(const vector<int> &numbers) {
    auto x = count_if(numbers.begin(), numbers.end(), [](int x) { return x % 2 == 0; });
    cout << "Liczb parzystych jest: " << x << endl;
    return;
}

vector<int> deleteOdd(vector<int> &numbers) {

    auto new_end = remove_if(numbers.begin(), numbers.end(), [](int x) { return x % 2 != 0; });
    numbers.erase(new_end,numbers.end());
    return numbers;
}

vector<int> Sort(vector<int>& numbers)
{
    sort(numbers.begin(),numbers.end());
    reverse(numbers.begin(),numbers.end());
    return numbers;
}

int main() {
    vector<int> numbers;
    cout << "Podaj 10 liczb:" << endl;
    for (int i = 0; i < 10; i++) {
        int x;
        cin >> x;
        numbers.push_back(x);
    }
    Wypisz(numbers);
    cout << endl;
    cout << "a)" << endl;
    Najwiekszy(numbers);
    cout << "b)" << endl;
    Licz(numbers);
    cout << "c)" << endl;
    deleteOdd(numbers);
    Wypisz(numbers);
    cout << "d)" << endl;
    Sort(numbers);
    Wypisz(numbers);
    return 0;
}