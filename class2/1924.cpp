#include "class2.h"
#include "iostream"

using namespace std;

bool isPrime1924(int num) {
    if (num == 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int b1924() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int m, n;

    cin >> m >> n;

    for (int i = m; i <= n; i++) {
        if(isPrime1924(i)) {
            cout << i << '\n';
        }
    }

    return 0;
}
