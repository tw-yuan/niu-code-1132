#include <bits/stdc++.h>
using namespace std;
struct mytime {
    int hour;
    int minute;
    float second;
};
void mius(mytime t[]) {
    float total_t1 = t[0].hour * 3600 + t[0].minute * 60 + t[0].second;
    float total_t2 = t[1].hour * 3600 + t[1].minute * 60 + t[1].second;
    float diff = abs(total_t1 - total_t2);
    int hour = diff / 3600;
    diff -= hour * 3600;
    cout << "Hour: " << hour << endl;
    cout << "diff: " << diff << endl;
    int minute = diff / 60;
    diff -= minute * 60;
    cout << "Minute: " << minute << endl;
    cout << "diff: " << diff << endl;
    float second = diff;
    cout << "Second: " << second << endl;
    cout << "diff: " << diff << endl;
    cout << setw(2) << setfill('0') << t[0].hour << ":"
         << setw(2) << setfill('0') << t[0].minute << ":"
         << setw(2) << setfill('0') << t[0].second << endl;
    cout << setw(2) << setfill('0') << t[1].hour << ":"
         << setw(2) << setfill('0') << t[1].minute << ":"
         << setw(2) << setfill('0') << t[1].second << endl;
    cout << setw(2) << setfill('0') << hour << ":"
         << setw(2) << setfill('0') << minute << ":"
         << setprecision(4) <<setw(2) << setfill('0') << second << endl;
}
int main() {
    mytime time[2];
    cout << "Time1: ";
    cin >> time[0].hour >> time[0].minute >> time[0].second;
    cout << "Time2: ";
    cin >> time[1].hour >> time[1].minute >> time[1].second;
    mius(time);
    return 0;
}