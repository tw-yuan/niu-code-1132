#include <bits/stdc++.h>
using namespace std;
int main() {
    int p;
    double rate;
    int years;
  
    cout << "money (p): ";
    cin >> p;
  
    cout << "rate (r): ";
    cin >> rate;
  
    cout << "year (n): ";
    cin >> years;
  
    cout << "year" << "\t" << "Amount" << endl;
  
    float amount = p;
    for (int i = 1; i <= years; ++i) {
      amount = amount * (1 + rate);
      cout << i << "\t" << fixed << setprecision(2) << amount << endl;
    }
  
    return 0;
  }