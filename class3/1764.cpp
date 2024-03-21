#include "class3.h"
#include "iostream"
#include "map"
#include "vector"
#include "algorithm"

using namespace std;

int b1764() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    string str;
    map<string, bool> dic;
    vector<string> result;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> str;
        dic[str] = true;
    }

    for (int i = 0; i < m; i++) {
        cin >> str;
        if (dic.find(str) != dic.end() && dic[str]) {
            result.push_back(str);
        }
    }

    cout << result.size() << '\n';

    sort(result.begin(), result.end());

    for (const auto & i : result) {
        cout << i << '\n';
    }

    return 0;
}
