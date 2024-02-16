#include "class2.h"
#include "iostream"
#include "vector"

using namespace std;

const int MAX_AGE = 200;

int b7568() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    int age;

    cin >> n;

    int ages[MAX_AGE + 1];
    int addresses[n];
    string names[n];
//    vector<string> names[MAX_AGE + 1][n];

    for (int & a : ages) {
        a = 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> age >> names[i];
//        names[age][ages[age]] = name;
        ages[age]++;
//        addresses[i] =
    }

    for (int i = 1; i < MAX_AGE + 1; i++) {
        for (int j = 0; j < ages[i]; j++) {
            cout << i << ' ' << names[i][j] << '\n';
        }
    }

    return 0;
}
