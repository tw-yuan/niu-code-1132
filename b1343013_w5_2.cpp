#include <bits/stdc++.h>
using namespace std;
int fib(int n) {
    int temp,a = 0,b = 1;
    if (n == 0) return 0;
    if (n == 1) return 1;
    for (int i = 2; i <= n; i++) {
        temp =  b;
        b = a + b;
        a = temp;
    }
    return b;
}
int main() {
    int n;
    cout << "Fibonacci n:" << endl;
    cin >> n;
    while (n <= 0) {
        cout << "Fibonacci n:" << endl;
        cin >> n;
    }
    cout << "fib(" << n << ")=" << fib(n) << endl;
    return 0;
}