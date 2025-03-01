#include <bits/stdc++.h>
using namespace std;

int main() {
    double weight, height;
    cout << "Weight(kg):";
    cin >> weight;
    cout << "Height(cm):";
    cin >> height;
    double bmi = weight / pow(height / 100, 2);
    cout << "BMI:" << bmi << endl;
    if (bmi < 18.5) {
        cout << "underweight" << endl;
    } else if (bmi < 24) {
        cout << "normal" << endl;
    } else if (bmi < 27) {
        cout << "overweight" << endl;
    } else {
        cout << "fatness" << endl;
    }
    return 0;
}