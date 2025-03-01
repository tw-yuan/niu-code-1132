#include <bits/stdc++.h>
using namespace std;

int main() {
    int choose = 0;
    cout << "1) Celsius" << endl;
    cout << "2) Fahrenheit" << endl;
    cout << "Choice:";
    cin >> choose;
    if (choose == 1) {
        double celsius;
        cout << "Input:";
        cin >> celsius;
        cout << celsius << "C = " << celsius * 9 / 5 + 32 << "F" << endl;
    } else if (choose == 2) {
        double fahrenheit;
        cout << "Input:";
        cin >> fahrenheit;
        cout << fahrenheit << "F = " << (fahrenheit - 32) * 5 / 9 << "C" << endl;
    } else {
        cout << "Error input." << endl;
    }
    return 0;
}