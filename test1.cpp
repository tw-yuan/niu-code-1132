#include <bits/stdc++.h>
using namespace std;

typedef struct my_time {
    int hour;
    int minute;
    float second;
} mytime;

void mius(mytime t[]){
    float total1 = 0, total2 = 0;
    total1 = (t[0].hour * 3600) + (t[0].minute * 60) + t[0].second;
    total2 = (t[1].hour * 3600) + (t[1].minute * 60) + t[1].second;
    float result = abs(total1 - total2);
    int hour = result / 3600;
    int minute = (result - (hour * 3600)) / 60;
    float second = result - (hour * 3600) - (minute * 60);
    cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setprecision(4) << setw(2) << setfill('0') << second << endl;
}

int main() {
    int hour, minute;
    float second;
    mytime t[2];
    cout << "Time1: ";
    cin >> hour >> minute >> second;;
    t[0] = {hour, minute, second};
    cout << "Time2: ";
    cin >> hour >> minute >> second;
    t[1] = {hour, minute, second};
    cout << setw(2) << setfill('0') << t[0].hour << ":" << setw(2) << setfill('0') << t[0].minute << ":" << setprecision(4) << setw(4) << setfill('0') << t[0].second << endl;
    cout << setw(2) << setfill('0') << t[1].hour << ":" << setw(2) << setfill('0') << t[1].minute << ":" << setprecision(4) << setw(4) << setfill('0') << t[1].second << endl;
    mius(t);
}