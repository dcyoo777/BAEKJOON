#include "class2.h"
#include "iostream"
#include "map"

using namespace std;

int b10816() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, x;
    map<int, int> M;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (M.find(x) != M.end()) {
            M[x] += 1;
        } else {
            M[x] = 1;
        }
    }

    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> x;
        if (M.find(x) != M.end()) {
            cout << M[x] << ' ';
        } else {
            cout << 0 << ' ';
        }
    }

    return 0;
}
