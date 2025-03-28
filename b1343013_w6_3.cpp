#include <bits/stdc++.h>
#include "head_math.h"

using namespace std;
int main() {
    int choose;
    while (true)
    {
        cout << "1) Parallelogram" << endl;
        cout << "2) Trapezoid" << endl;
        cout << "3) Periphery" << endl;
        cout << "4) Volume" << endl;
        cout << "5) Exit" << endl;
        cin >> choose;
        if (choose < 1 || choose >= 5) return 0;
        switch (choose)
        {
            case 1:
                float b, h;
                cout << "Base, Height:" << endl;
                cin >> b >> h;
                cout << "Area of Para = " << fixed << setprecision(2) << PARA(b, h) << endl;
                break;
            case 2:
                float ub, lb, h1;
                cout << "Upper, Base, Height:" << endl;
                cin >> ub >> lb >> h1;
                cout << "Area of Trapezoid = " << fixed << setprecision(2) << TRAPEZOID(ub, lb, h1) << endl;
                break;
            case 3:
                float r;
                cout << "Radius:" << endl;
                cin >> r;
                cout << "Periphery of Circle = " << fixed << setprecision(2) << PERIPHERY(r) << endl;
                break;
            case 4:
                float r1;
                cout << "Radius:" << endl;
                cin >> r1;
                cout << "Volume = " << fixed << setprecision(2) << VOLUME(r1) << endl;
                break;
        }
    }
}