#include <bits/stdc++.h>
using namespace std;

class CRect {
private:
    int width, height;
    double weight;
public:
    // 建構子，給初值
    CRect() : width(0), height(0), weight(0.0) {}

    // (a) 設定 weight
    void set(double wg) {
        weight = wg;
    }

    // (b) 設定 width 和 height
    void set(int w, int h) {
        width = w;
        height = h;
    }

    // (c) 設定 weight, width, height
    void set(double wg, int w, int h) {
        weight = wg;
        width = w;
        height = h;
    }

    // 顯示成員
    void show() {
        cout << "height=" << height << endl;
        cout << "width=" << width << endl;
        cout << "weight=" << weight << endl;
    }
};

int main() {
    CRect A;
    int w, h;
    double wg;
    cout << "請輸入高、寬：";
    cin >> h >> w;
    A.set(w, h);         // 設定寬和高
    cout << "請輸入重量：";
    cin >> wg;
    A.set(wg);          // 設定重量
    cout << "object A:" << endl;
    A.show();
    cout << endl;
    cout << "請輸入高、寬、重量：";
    cin >> h >> w >> wg;
    A.set(wg, w, h);   // 設定重量、寬和高
    cout << endl << "object A:" << endl;
    A.show();

    return 0;
}