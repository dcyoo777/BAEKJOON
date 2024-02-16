#include "class2.h"
#include "iostream"

using namespace std;

int b2839() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    for (int i = n / 5; i >= 0; i--) {
        if((n - i * 5) % 3 == 0) {
            cout << i + (n - i * 5) / 3;
            return 0;
        }
    }

    cout << -1;

    return 0;
}
