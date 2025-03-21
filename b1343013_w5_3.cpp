#include <bits/stdc++.h>
using namespace std;
int cat(int h) {
    if (h < 1) return 0;
    int sum = h;
    return cat(h / 2) + cat(h / 3) + cat(h / 4) + sum;
}
int main() {
    int h;
    while(true) {
        cout << "Input h:" << endl;
        cin >> h;
        if (h <= 0) break;
        cout << "Output:" << cat(h) << endl;
    }
    return 0;
}