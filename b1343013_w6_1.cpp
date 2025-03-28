#include <bits/stdc++.h>
using namespace std;
double area(double width, double height)
{
    return width * height;
}

double area(double width)
{
    return width * width;
}

int main()
{
    while (true)
    {
        double width, height;
        cout << "Input width , height: " << endl;
        cin >> width >> height;
        if (width <= 0 || height <= 0)
            return 0;
        if (width == height)
        {
            cout << "Area = " << fixed << setprecision(2) << area(width) << endl;
        }
        else
        {
            cout << "Area = " << fixed << setprecision(2) << area(width, height) << endl;
        }
    }
}