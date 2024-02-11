#include "class2.h"
#include "iostream"

using namespace std;

int b2292() {

    int n;

    cin >> n;

    int p = 0;
    int a = (n + 4) / 6;

    while (true) {
        a = a - p;
        if (a <= 0) {
            cout << p + 1;
            return 0;
        }
        p++;

    }
}
