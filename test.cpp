#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int input;
    cout << "Input: ";
    cin >> input;
    input = log2(input);
    cout << input+1 << endl;

    return 0;
}