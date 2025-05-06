#include <bits/stdc++.h>
using namespace std;
struct student {
    int student_id;
    string name;
    int g1;
    int g2;
    int g3;
} stu1, stu2, stu3;
double g_average(int g1, int g2, int g3) {
    return g1*1.00*0.3 + g2*1.00*0.3 + g3*1.00*0.4;
}
int main() {
    int id, g1, g2, g3;
    string name;
    
    for (int i = 0; i < 3; i++) {
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        g1 = rand() % 101;
        g2 = rand() % 101;
        g3 = rand() % 101;
        if(i == 0)
        stu1 = {id, name, g1, g2, g3};
        if(i == 1)
        stu2 = {id, name, g1, g2, g3};
        if(i == 2)
        stu3 = {id, name, g1, g2, g3};
    }

    cout << "=======================" << endl;
    cout << left << setw(6) << stu1.student_id << setw(12) << stu1.name << setw(4) << stu1.g1 << setw(4) << stu1.g2 << setw(4) << stu1.g3 << setw(6) << g_average(stu1.g1, stu1.g2, stu1.g3) << endl;
    cout << left  << setw(6) << stu2.student_id << setw(12) << stu2.name << setw(4) << stu2.g1 << setw(4) << stu2.g2 << setw(4) << stu2.g3 << setw(6) << g_average(stu2.g1, stu2.g2, stu2.g3) << endl;
    cout << left  << setw(6) << stu3.student_id << setw(12) << stu3.name << setw(4) << stu3.g1 << setw(4) << stu3.g2 << setw(4) << stu3.g3 << setw(6) << g_average(stu3.g1, stu3.g2, stu3.g3) << endl;
    cout << "=======================" << endl;
    return 0;
}