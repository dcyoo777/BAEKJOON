#include "class2.h"
#include "iostream"

using namespace std;

const int MAX_AGE = 200;

int b10814() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    int ages[n];
    string names[n];

    int counts[MAX_AGE + 1];
    int result[MAX_AGE + 1][n];

    for (int i = 1; i < MAX_AGE + 1; i++) {
        counts[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> ages[i] >> names[i];
        result[ages[i]][counts[ages[i]]++] = i;
    }

    for (int i = 1; i < MAX_AGE + 1; i++) {
        for (int j = 0; j < counts[i]; j++) {
            cout << i << ' ' << names[result[i][j]] << '\n';
        }
    }

    return 0;
}
