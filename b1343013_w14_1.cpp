#include <bits/stdc++.h>
using namespace std;

class CBox {
public:
    int length, width, height;

    // 無參數建構子
    CBox() : length(0), width(0), height(0) {}

    // 帶參數建構子
    CBox(int l, int w, int h) : length(l), width(w), height(h) {}

    void set(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    // 計算體積
    int volume() {
        return length * width * height;
    }

    // 計算表面積
    int surfaceArea() {
        return 2 * (length * width + length * height + width * height);
    }
};

int main() {
    CBox box;
    int l, w, h;
    cout << "請輸入長、寬、高：";
    cin >> l >> w >> h;
    box.set(l, w, h);
    cout << "長=" << box.length << endl;
    cout << "寬=" << box.width << endl;
    cout << "高=" << box.height << endl;
    cout << "體積=" << box.volume() << endl;
    cout << "表面積=" << box.surfaceArea() << endl;
    return 0;
}