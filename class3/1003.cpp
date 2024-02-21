#include "class3.h"
#include "iostream"

using namespace std;

int b1003() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    int fill = 1;
    int fibos[41][2];
    int n;

    fibos[0][0] = 1;
    fibos[0][1] = 0;
    fibos[1][0] = 0;
    fibos[1][1] = 1;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        if (n > fill) {
            for (int j = fill + 1; j <= n; j++) {
                fibos[j][0] = fibos[j - 1][0] + fibos[j - 2][0];
                fibos[j][1] = fibos[j - 1][1] + fibos[j - 2][1];
            }
        }
        cout << fibos[n][0] << " " << fibos[n][1] << "\n";

    }

    return 0;
}
