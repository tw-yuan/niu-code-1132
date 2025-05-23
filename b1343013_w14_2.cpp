#include <bits/stdc++.h>
using namespace std;

class CRect {
private:
    int width, height;
    double weight;
public:
    CRect() : width(0), height(0), weight(0.0) {}

    void set(double wg) {
        weight = wg;
    }

    void set(int w, int h) {
        width = w;
        height = h;
    }

    void set(double wg, int w, int h) {
        weight = wg;
        width = w;
        height = h;
    }

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
    A.set(w, h);
    cout << "請輸入重量：";
    cin >> wg;
    A.set(wg);
    cout << "object A:" << endl;
    A.show();
    cout << endl;
    cout << "請輸入高、寬、重量：";
    cin >> h >> w >> wg;
    A.set(wg, w, h);
    cout << endl << "object A:" << endl;
    A.show();

    return 0;
}