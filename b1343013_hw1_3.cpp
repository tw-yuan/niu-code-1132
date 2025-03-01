#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cout << "Input 3 integers:";
    cin >> a >> b >> c;
    cout << "Max = " << max({a, b, c}) << endl;
    cout << "Min = " << min({a, b, c}) << endl;
    return 0;
}