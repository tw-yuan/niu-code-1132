#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "File name: " << endl;
    string fileName;
    cin >> fileName;
    ifstream file(fileName, ios::in);

    if(!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    cout << "Success to read a file." << endl;
    int totalEnglish, aeiou[5] = {0, 0, 0, 0, 0};

    while (!file.eof()) {
        char c;
        file >> c;
        if (isalpha(c)) {
            totalEnglish++;
            c = tolower(c);
            switch (c) {
                case 'a':
                    aeiou[0]++;
                    break;
                case 'e':
                    aeiou[1]++;
                    break;
                case 'i':
                    aeiou[2]++;
                    break;
                case 'o':
                    aeiou[3]++;
                    break;
                case 'u':
                    aeiou[4]++;
                    break;
            }
        }
    }
    file.close();
    cout << "Total English letters: " << totalEnglish << endl;
    cout << "a: " << aeiou[0] << "  " << "e: " << aeiou[1] << "  " << "i: " << aeiou[2] << "  "
         << "o: " << aeiou[3] << "  " << "u: " << aeiou[4] << endl;
    

    return 0;
}