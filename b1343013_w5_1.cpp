#include <bits/stdc++.h>
using namespace std;
float myPower(float x, int n) {
    float a;
    for (int i =1; i <= n; i++) {
        a = a + 1/pow(x, i);
    }
    return a;
}
int main() {
    float x;
    int n;
    cout << "Input x, n:" << endl;
    cin >> x >> n;
    while (x <= 0 || n <= 0) {
        cout << "Input x, n:" << endl;
        cin >> x >> n;
    }
    cout << "myPower(" << x << "," << n << ")=" << setprecision(4) << myPower(x, n) << endl;
    return 0;
}