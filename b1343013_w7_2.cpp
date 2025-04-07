#include <bits/stdc++.h>
using namespace std;

int main() {
    string inputText;
    int offset;
    string encryptedText = "";

    cout << "Input a string: ";
    getline(cin, inputText);

    cout << "Offset: ";
    cin >> offset;

    for (char ch : inputText) {
        if (isalpha(ch)) { 
            char base = isupper(ch) ? 'A' : 'a';
            int original_pos = ch - base;
            int shifted_pos = (original_pos + offset) % 26;
            if (shifted_pos < 0) {
                shifted_pos += 26;
            }
            char encryptedChar = base + shifted_pos;
            encryptedText += encryptedChar;
        } else {
            encryptedText += ch;
        }
    }

    cout << "Encrypted: " << encryptedText << endl;

    return 0;
}