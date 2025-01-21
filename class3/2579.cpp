#include "class3.h"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int f2579(vector<int> stairs, int prev, int current) {

    cout << "func : " << current << '\n';

    if(stairs.size() - 1 == current) {
        return stairs[current];
    }

    if(stairs.size() - 2 == current) {
        return stairs[current] + f2579(stairs, current, current + 1);
    }

    if(stairs.size() - 3 == current) {
        return stairs[current] + f2579(stairs, current, current + 2);
    }

    if(current - prev == 1) {
        return stairs[current] + f2579(stairs, current, current + 2);
    }

    int a1 = f2579(stairs, current, current + 1);
    int a2 = f2579(stairs, current, current + 2);

    cout << current << " : " << a1 << " " << a2 << '\n';

    if (current == 0) {
        return max(a1, a2);
    }

    return stairs[current] + max(a1, a2);
}

int b2579() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    vector<int> stairs;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        stairs.push_back(x);
    }

    cout << f2579(stairs, -2, 0);

    return 0;
}
