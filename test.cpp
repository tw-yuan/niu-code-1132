#include <bits/stdc++.h>
using namespace std;
int main() {
  int decimal, binary;
  cout << "Decimal: ";
  cin >> decimal;
  if (decimal < 0) {
    cout << "Input error!" << endl;
    return 0;
  } else if (decimal > 255) {
    cout << "Input error!" << endl;
    return 0;
  }
  cout << "Binary: ";
  for (int i = 7; i >= 0; i--) {
    binary = decimal / pow(2, i);
    cout << binary % 2;
  }
  cout << endl;
  return 0;
}