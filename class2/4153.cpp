#include "class2.h"
#include "iostream"

using namespace std;

int b4153() {

    while (true) {

        int a, b, c;

        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        if (a > c) {
            int temp = c;
            c = a;
            a = temp;
        }

        if (b > c) {
            int temp = c;
            c = b;
            b = temp;
        }

        if (a * a + b * b == c * c) {
            cout << "right\n";
        } else {
            cout << "wrong\n";
        }
    }

    return 0;
}
