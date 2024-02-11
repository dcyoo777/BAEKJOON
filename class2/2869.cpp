#include "class2.h"
#include "iostream"

using namespace std;

int b2869() {

    int a, b, v;

    cin >> a >> b >> v;

    if (v == a) {
        cout << 1;
        return 0;
    }

    int d = (v - a) / (a - b);

    if ((v - a) % (a - b)) {
        d++;
    }

    cout << d + 1;

    return 0;
}
