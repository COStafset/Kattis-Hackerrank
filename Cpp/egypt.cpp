#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        if (a == 0 && b == 0 && c == 0) return 0;

        int hypo, s1, s2;
        if (a > b && a > c) {
            hypo = a;
            s1 = b;
            s2 = c;
        } else if (b > a && b > c) {
            hypo = b;
            s1 = a;
            s2 = c;
        } else {
            hypo = c;
            s1 = a;
            s2 = b;
        }

        if (hypo*hypo == s1*s1 + s2*s2) {
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }
}
