#include <bits/stdc++.h>
using namespace std;
int main() {
  int decimal;
  string r;
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
  int bl = log2(decimal) + 1;
  int bl_array = bl;
  int binary[bl];
  while (decimal != 0) {
    bl_array--;
    binary[bl_array] = (decimal % 2 == 0 ? 0 : 1);
    decimal /= 2;
  }
  for (int i = 0; i < bl; i++) {
    cout << binary[i];
  }
  cout << endl;
  return 0;
}