#include <bits/stdc++.h>
using namespace std;
struct student {
    int student_id;
    char name[12];
    int g1;
    int g2;
    int g3;
} stu1, stu2, stu3, r_stu1, r_stu2, r_stu3;
double g_average(int g1, int g2, int g3) {
    return g1*1.00*0.3 + g2*1.00*0.3 + g3*1.00*0.4;
}
int main() {
    int id, g1, g2, g3;
    string stu_name;
    
    for (int i = 0; i < 3; i++) {
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin.ignore();
        getline(cin, stu_name);
        g1 = rand() % 101;
        g2 = rand() % 101;
        g3 = rand() % 101;
        if(i == 0) {
            strcpy(stu1.name, stu_name.c_str());
            stu1.student_id = id;
            stu1.g1 = g1;
            stu1.g2 = g2;
            stu1.g3 = g3;
        }
        if(i == 1) {
            strcpy(stu2.name, stu_name.c_str());
            stu2.student_id = id;
            stu2.g1 = g1;
            stu2.g2 = g2;
            stu2.g3 = g3;
        }
        if(i == 2) {
            strcpy(stu3.name, stu_name.c_str());
            stu3.student_id = id;
            stu3.g1 = g1;
            stu3.g2 = g2;
            stu3.g3 = g3;
        }
    }

    ofstream writefile("student.bin", ios::binary);

    if (!writefile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    writefile.write((char*)&stu1, sizeof(stu1));
    writefile.write((char*)&stu2, sizeof(stu2));
    writefile.write((char*)&stu3, sizeof(stu3));
    writefile.close();
    cout << "Success to write a file." << endl;

    cout << "Read the file: " << endl;
    ifstream readfile("student.bin", ios::binary);
    if (!readfile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    readfile.read((char*)&r_stu1, sizeof(r_stu1));
    readfile.read((char*)&r_stu2, sizeof(r_stu2));
    readfile.read((char*)&r_stu3, sizeof(r_stu3));
    readfile.close();

    cout << left << setw(6) << r_stu1.student_id << setw(12) << r_stu1.name << setw(4) << r_stu1.g1 << setw(4) << r_stu1.g2 << setw(4) << r_stu1.g3 << setw(6) << g_average(r_stu1.g1, r_stu1.g2, r_stu1.g3) << endl;
    cout << left  << setw(6) << r_stu2.student_id << setw(12) << r_stu2.name << setw(4) << r_stu2.g1 << setw(4) << r_stu2.g2 << setw(4) << r_stu2.g3 << setw(6) << g_average(r_stu2.g1, r_stu2.g2, r_stu2.g3) << endl;
    cout << left  << setw(6) << r_stu3.student_id << setw(12) << r_stu3.name << setw(4) << r_stu3.g1 << setw(4) << r_stu3.g2 << setw(4) << r_stu3.g3 << setw(6) << g_average(r_stu3.g1, r_stu3.g2, r_stu3.g3) << endl;
    return 0;
}