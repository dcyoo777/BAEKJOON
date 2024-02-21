#include "class3.h"
#include "iostream"
#include <cmath>

using namespace std;

int b1074() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    long n, r, c;
    long result = 0;

    cin >> n >> r >> c;

    for (long i = n - 1; i >= 0; i--) {
        long a = (long)pow(2, i);
        result += a * a * (r / a * 2 + c / a);
        r %= a;
        c %= a;
    }

    cout << result;

    return 0;
}
