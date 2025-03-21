#include <bits/stdc++.h>
using namespace std;
int cat(int h, int t) {
    if (h/t == 0) return 0;
    return h/t + cat(h, t+1);
}
int main() {
    int h, sum;
    while(true) {
        cout << "Input h:" << endl;
        cin >> h;
        if (h <= 0) break;
        for (int i = 1; i <= h; i++) {
            cout << "h=" << h << ", i=" << i << ", h/i=" << h/i << ", cat(h/i, 1)=" << cat(h/i, 1) << endl;
            sum = sum + cat(h/i, 1);
        }
        cout << "Output:" << sum << endl;
        sum = 0;
    }
    return 0;
}