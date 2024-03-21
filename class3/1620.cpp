#include "class3.h"
#include "iostream"
#include "map"

using namespace std;

int b1620() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    string str;
    map<int, string> dicItoS;
    map<string, int> dicStoI;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> str;
        dicItoS[i + 1] = str;
        dicStoI[str] = i + 1;
    }

    for (int i = 0; i < m; i++) {
        cin >> str;
        if (str[0] < 58) {
            cout << dicItoS[stoi(str)] << '\n';
        } else {
            cout << dicStoI[str] << '\n';
        }
    }

    return 0;
}
