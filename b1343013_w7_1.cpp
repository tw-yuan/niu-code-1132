#include <bits/stdc++.h>
using namespace std;

void count(int array[]) // Corrected function signature
{
    int temp = 0, Odd = 0, Even = 0;
    for (int i = 0; i < 10; i++)
    {
        temp = array[i];
        if (temp % 2 == 0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
    }
    cout << "Odd: " << Odd << endl;
    cout << "Even: " << Even << endl;
    return;
}
int main()
{
    int N, array[10];
    int temp = 0;
    cout << "Input range 0~N:" << endl;
    cin >> N;
    for (int i = 0; i < 10; i++)
    {
        temp = rand() % (N - 0 + 1) + 0;
        array[i] = temp;
    }
    cout << "Random: " << endl;
    cout << array[0] << " " << array[1] << " " << array[2] << " " << array[3] << " " << array[4] << endl
         << array[5] << " " << array[6] << " " << array[7] << " " << array[8] << " " << array[9] << endl;
    count(array);
    return 0;
}