#include <bits/stdc++.h>
#define PI 3.1415926
#define VOLUMN(R) PI*R*R*R*4.0/3.0
using namespace std;
int main()
{
    double r;
    while (true)
    {
        cout << "radius (r):" << endl;
        cin >> r;
        if (r <= 0)
        {
            return 0;
        }
        double volume = VOLUMN(r);
        cout << "volume of " << fixed << setprecision(3) << r << " = " << volume << endl;
    }

    return 0;
}