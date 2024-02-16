#include "class2.h"
#include "iostream"

using namespace std;

int b11866() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;

    cin >> n >> k;

    int l = n;
    int next = 0;
    int r = k;

    int result[n];
    int list[n][3];

    for (int i = 0; i < n; i++) {
        list[i][0] = i + 1;
        list[i][1] = (n + i - 1) % n;
        list[i][2] = (i + 1) % n;
    }

    while (true) {
        if (l == 0) {
            break;
        }

        if (r == 1) {
            result[n - l] = list[next][0];
            list[list[next][1]][2] = list[next][2];
            list[list[next][2]][1] = list[next][1];
            l--;
            r = k;
        } else {
            r--;
        }

        next = list[next][2];

    }

    cout << "<";
    for (int i = 0; i < n - 1; i++) {
        cout << result[i] << ", ";
    }
    cout << result[n - 1];
    cout << ">";

    return 0;
}
